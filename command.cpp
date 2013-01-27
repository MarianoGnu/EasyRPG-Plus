#include "command.h"

/*********
 *Command*
 *********/

Command::Command(Command *tutor) :
    QObject(tutor)
{
    m_tutor = tutor;
    m_id = Command::Event;
}

Command::ID Command::id() const
{
    return m_id;
}

void Command::setId(ID f_id)
{
    m_id = f_id;
}

QString Command::desc() const
{
    //This method will be replaced by subclases, i'll just make a test right now:

    QString result;

    switch (id()){
        case NewCommand:
            result = "Add New Command";
            break;
        case ShowDialog:
            result = "Show Dialog: Dialog Name";
            break;
        case MultipleChoice:
            result = "Multiple Choices";
            break;
        case ImputNumber:
            result = "Imput Number : IVar[#]";
            break;
        case If:
            result = "If a >= b";
            break;
        case Else:
            result = "else";
            break;
        case SetLabel:
            result = "Label: Name";
            break;
        case GoToLabel:
            result = "Go to label: Name";
            break;
        case Loop:
            result = "For (IVar[#] = X; IVar == Y; IVar++";
            break;
        case Break:
            result = "Break;";
            break;
        case Continue:
            result = "Continue";
            break;
        default:
            result = "UnusedEvent";
            break;
    }

    return result;

}

Command* Command::tutor() const
{
    if (m_tutor != 0)
        return m_tutor;
    else if (m_previous != 0)
        return m_previous->tutor();    //Recursion!
    return 0;
}

void Command::setTutor(Command *f_tutor)
{
    m_tutor = f_tutor;
}

QRect Command::rect() const
{
    return m_rect;
}

QRect Command::elseRect() const
{
    if (m_child == 0)
        return QRect();
    Command *c = child();

    for(;;)
    {
        if (c->id() == Command::Else)
        {
            return c->rect();
        }
        if (c->next() != 0)
            c = c->next();
        else
            break;
    }

    return QRect();
}
void Command::setRect(const QRect &rect)
{
    m_rect = rect;
}

Command* Command::child() const
{
    return m_child;
}

void Command::setChild(Command *f_child)
{
    m_child = f_child;
    if (m_child != 0)
        m_child->m_tutor = this;
}

Command *Command::next(bool chk_child) const
{
    if (chk_child && m_child != 0)
        return m_child;
    else if (m_next != 0)
        return m_next;
    else if (tutor() != 0)
        return tutor()->next(false);
    return 0;
}

void Command::setNext(Command *f_next)
{
    m_next = f_next;
    if (f_next != 0)
        f_next->m_previous = this;
}
void Command::insertBack(Command* f_command)
{
    if (f_command == 0)
        return;
    if (m_previous != 0)
    {
        m_previous->m_next = f_command;
        f_command->m_previous = m_previous;
    }
    f_command->m_next = this;
    m_previous = f_command;
}

Command* Command::previous() const
{
    return m_previous;
}

void Command::setPrevious(Command *f_previous)
{
    m_previous = f_previous;
}

int Command::count(bool count_children)
{
    int result = 1;
    Command *c = next(count_children);

    while(c != 0 && c->nesting() >= nesting())
    {
        c = c->next(count_children);
        result++;
    }
    return result;
}

int Command::nesting() const
{
    int result = 0;
    Command * p = tutor();
    while (p != 0)
    {
        result +=1;
        p = p->tutor();
    }
    return result;
}
