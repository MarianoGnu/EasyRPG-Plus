#include "eventpage.h"

EventPage::EventPage(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
    setBackgroundRole(QPalette::Base);

    QPalette pal = palette();
    pal.setBrush(QPalette::Base, Qt::white);
    pal.setColor(QPalette::HighlightedText, Qt::red);
    setPalette(pal);

    m_dialogCommand = new DialogCommand(this);
    m_selection = 0;
    m_marked = 0;
    m_command_h = 15;
    m_box_deep = 4;
    m_event = new Command(0);
    m_event->setId(Command::Event);
    Command* c = m_event;
    c->setChild(new Command(c));
    c = c->child();
    c->setId(Command::If);
    c->setChild(new Command(c));
    c = c->child();
    c->setId(Command::NewCommand);
    c->setNext(new Command());
    c = c->next();
    c->setId(Command::Else);
    c->setNext(new Command());
    c = c->next();
    c->setId(Command::NewCommand);

    for (int i = 0; i < 7; i++)
    {
        c->setNext(new Command());
        c = c->next(false);
        c->setId(Command::Continue);
    }

    c = c->tutor();

    for (int i = 0; i < 7; i++)
    {
        c->setNext(new Command());
        c = c->next(false);
        c->setId(Command::Break);
    }
    setMouseTracking(true);
}

Command *EventPage::event() const
{
    return m_event;
}

void EventPage::deleteCommand(Command *e)
{
    if (e == 0)
        return;

    if (e->previous() != 0)
    {
        if (e->next(false) != 0)
        {
            e->previous()->setNext(e->next(false));
            e->next(false)->setPrevious(e->previous());
        }
        else
            e->previous()->setNext(0);
    }
    else if (e->next(false) != 0)
        e->next(false)->setPrevious(0);

    if (e->tutor() != 0 && e->tutor()->child() == e)
    {
        if (e->next(false) != 0)
        {
            e->tutor()->setChild(e->next(false));
            e->next(false)->setTutor(e->tutor());
        }
        else
            e->tutor()->setChild(0);
    }

    deleteCommand(e->child());

    delete e;
    return;
}

Command* EventPage::commandAt(QPoint p, Command* root = 0)
{
    if (root == 0)
        root = m_event->child();
    if (root == 0)
        return 0;

    Command* c = root;

    for(;;)
    {
        if (c->rect().contains(p))
        {
            break;
        }
        else
        {
            if (c->next() != 0)
                c = c->next();
            else
                return 0;
        }

    }
    if (c->child() != 0 && commandAt(p, c->child()) != 0 && commandAt(p,c->child())->id() != Command::Else)
        return commandAt(p, c->child());
    return c;
}

void EventPage::mousePressEvent(QMouseEvent *event)
{
    event->accept();

    if (m_marked != 0)
        if (m_marked == m_selection)
        {
            if (m_selection->id() == Command::NewCommand)
                deleteCommand (m_selection);
            else
                editCommand(m_selection);
        }

    m_selection = m_marked;
}

void EventPage::newCommand(Command *position)
{
    QRect rect = position->rect();
//    m_dialogCommand->run();
//    Command *n = m_dialogCommand->command();
//    I'll try to make that work latter
    Command* n = new Command();
    n->setId(Command::SetLabel);
    if (n != 0)
    {

        Command * tutor = position->tutor();
        Command * previous = position->previous();
        position->setTutor(0);
        position->setPrevious(0);

        if (tutor != 0 && tutor->child() == position)
        {
            tutor->setChild(0);
            position->setParent(0);
            tutor->setChild(n);
        }

        if (previous != 0)
        {
            previous->setNext(0);
            previous->setNext(n);
        }

        n->setNext(position);

    }
}

void EventPage::editCommand(Command *current)
{
    //will be used after
    current->setId(Command::ShowDialog);
}

void EventPage::mouseReleaseEvent(QMouseEvent *event)
{
    event->accept();
    update();
//    This method will be used when i include the drag and drop option.
}

void EventPage::mouseMoveEvent(QMouseEvent *event)
{
    event->accept();

    m_marked = commandAt(event->pos());
    update();
}

QPolygon EventPage::nest(Command *c)
{
    if (c == 0)
        return QPolygon();

    QRect rect = c->rect();
    QRect rectElse = c->elseRect();

    int nPoints = (rectElse.isNull()) ? 6 : 10;

    QPolygon result = QPolygon(nPoints);


    if (!rectElse.isNull())
    {
        result.setPoint(0, rect.topLeft());
        result.setPoint(1, rect.topRight());
        result.setPoint(2, rect.right(),rect.top() + m_command_h);
        result.setPoint(3, rect.left() + 10, rect.top() + m_command_h);
        result.setPoint(4, rectElse.topLeft());
        result.setPoint(5, rectElse.topRight());
        result.setPoint(6, rectElse.bottomRight());
        result.setPoint(7, rectElse.bottomLeft());
        result.setPoint(8, rect.x() + 10, rect.bottom());
        result.setPoint(9, rect.bottomLeft());
    }
    else
    {
        result.setPoint(0, rect.topLeft());
        result.setPoint(1, rect.topRight());
        result.setPoint(2, rect.right(),rect.top() + m_command_h);
        result.setPoint(3, rect.left() + 10, rect.top() + m_command_h);
        result.setPoint(4, rect.x() + 10, rect.bottom());
        result.setPoint(5, rect.bottomLeft());
    }

    return result;
}

QPolygon EventPage::boxdown(QRect rect, int dx, int dy)
{
    QPolygon result(4);

    result.setPoint(0, rect.left() - dx, rect.bottom() - dy);
    result.setPoint(1, rect.right() - dx, rect.bottom() - dy);
    result.setPoint(2, rect.right(), rect.bottom());
    result.setPoint(3, rect.left(), rect.bottom());

    return result;
}

QPolygon EventPage::boxright(QRect rect, int dx, int dy)
{
    QPolygon result(4);

    result.setPoint(0, rect.right() - dx, rect.top() - dy);
    result.setPoint(1, rect.right(), rect.top());
    result.setPoint(2, rect.right(), rect.bottom());
    result.setPoint(3, rect.right() - dx, rect.bottom() - dy);

    return result;
}

void EventPage::paintEvent(QPaintEvent *event)
{
    QRegion paintRegion = event->region();
    QPainter painter(this);

    QPalette pal = palette();
    QColor a[2][2];
    a[0][0] = QColor(0xFFFFBF);
    a[0][1] = QColor(0xFFFFDE);
    a[1][0] = QColor(0xBFCFFF);
    a[1][1] = QColor(0xDEE6FF);

    Command *c = m_event->child();

    int m_offset_y = 10;

    for (;;)
    {
        if (c == 0)
            break;
        // create rect
        int h;
        if (c->child() != 0)
            h = c->child()->count() * m_command_h + m_command_h;
        else
            h = m_command_h;
        QRect rect = QRect(c->nesting() * 10 ,m_offset_y,width() - c->nesting()* 10 + 9 - 20 ,h);
        c->setRect(rect);//used for creating nesting comands
        if (paintRegion.contains(c->rect()))
        {
            painter.setPen(c->id() == Command::Else ? Qt::transparent : Qt::black);

            painter.setBrush(c->id() == Command::Else ? Qt::transparent : a[c->nesting()%2][c->count(false)%2]);

            // paint the shape
            painter.drawRect(rect);

            // paint the event info
            painter.setPen(Qt::black);
            painter.setBrush(pal.text());
            painter.drawText(QRect(rect.left()+ (c->id() == Command::Else ? 0:10),rect.top(),rect.width(),m_command_h), Qt::AlignLeft, c->desc());
        }
        //Find next command
        c = c->next();
        m_offset_y +=m_command_h;
    }
    setMinimumHeight(m_offset_y+10);

    if (m_selection != 0)
    {
        painter.setPen(QColor(0,64,0));
        painter.setBrush(QColor(50, 255, 50));
        if (m_selection->child() == 0)
            painter.drawRect(m_selection->rect());
        else
            painter.drawPolygon(nest(m_selection));
        // paint the event info
        QFont f = font();
        f.setBold(true);
        setFont(f);
        painter.setPen(Qt::black);
        QRect rect = m_selection->rect();
        rect.setHeight(m_command_h);
        painter.drawText(m_selection->rect().translated(20,0), Qt::AlignLeft, "--> " + m_selection->desc());
        rect = m_selection->elseRect();
        if (!rect.isNull())
            painter.drawText(rect.translated(10,0), Qt::AlignLeft, "--> else");
        f.setBold(false);
        setFont(f);
    }
    if (m_marked != 0)
    {
        painter.setPen(QColor(0,64,0));
        if (m_marked->child() == 0)
        {
            painter.setBrush(QColor(191, 255, 191));
            painter.drawRect(m_marked->rect().translated(-m_box_deep,-m_box_deep));
            painter.setBrush(QColor(222, 255, 222));
            painter.drawPolygon(boxdown(m_marked->rect().adjusted(0,0,1,1), m_box_deep, m_box_deep));
            painter.drawPolygon(boxright(m_marked->rect().adjusted(0,0,1,1), m_box_deep, m_box_deep));
        }
        else
        {

            painter.setBrush(QColor(222, 255, 222));
            QRect rect = m_marked->rect();
            rect.setWidth(10);
            painter.drawPolygon(boxdown(rect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
            rect = m_marked->rect();
            rect.setWidth(rect.width() - 10);
            rect.setHeight(m_command_h);
            rect.translate(10,0);
            painter.drawPolygon(boxdown(rect.adjusted(0,0,0,1), m_box_deep, m_box_deep));
            painter.drawPolygon(boxright(rect.adjusted(0,0,0,1),m_box_deep, m_box_deep));
            QRect elseRect = m_marked->elseRect();
            if (!elseRect.isNull())
            {
                painter.drawPolygon(boxdown(elseRect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
                painter.drawPolygon(boxright(elseRect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
                QRect r1 = QRect(rect.bottomLeft(), elseRect.topLeft());
                painter.drawPolygon(boxright(r1.adjusted(0,0,0,0), m_box_deep, m_box_deep));
                r1 = QRect(elseRect.bottomLeft(), m_marked->rect().bottomLeft()+=QPoint(10,0));
                painter.drawPolygon(boxright(r1.adjusted(0,0,0,0), m_box_deep, m_box_deep));
            }
            else
            {
                rect = m_marked->rect().translated(0, m_command_h);
                rect.setWidth(10);
                rect.setHeight(rect.height() - m_command_h);
                painter.drawPolygon(boxright(rect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
            }
            painter.setBrush(QColor(191, 255, 191));
            painter.drawPolygon(nest(m_marked).translated(-m_box_deep,-m_box_deep));
        }
        // paint the event info
        painter.setPen(Qt::black);
        painter.setBrush(pal.text());
        QRect rect = m_marked->rect().translated(-m_box_deep,-m_box_deep);
        rect.setHeight(m_command_h);
        painter.drawText(rect.translated(10,0), Qt::AlignLeft, "--> " + m_marked->desc());
        rect = m_marked->elseRect();
        if (!rect.isNull())
            painter.drawText(rect.translated(-m_box_deep, -m_box_deep), Qt::AlignLeft, "--> else");
    }
    if (m_marked != 0 && m_marked == m_selection)
    {
        painter.setPen(QColor(0,0,64));
        if (m_marked->child() == 0)
        {
            painter.setBrush(QColor(191, 191, 255));
            painter.drawRect(m_marked->rect().translated(-m_box_deep,-m_box_deep));
            painter.setBrush(QColor(222, 222, 255));
            painter.drawPolygon(boxdown(m_marked->rect().adjusted(0,0,1,1), m_box_deep, m_box_deep));
            painter.drawPolygon(boxright(m_marked->rect().adjusted(0,0,1,1), m_box_deep, m_box_deep));
        }
        else
        {

            painter.setBrush(QColor(222, 222, 255));
            QRect rect = m_marked->rect();
            rect.setWidth(10);
            painter.drawPolygon(boxdown(rect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
            rect = m_marked->rect();
            rect.setWidth(rect.width() - 10);
            rect.setHeight(m_command_h);
            rect.translate(10,0);
            painter.drawPolygon(boxdown(rect.adjusted(0,0,0,1), m_box_deep, m_box_deep));
            painter.drawPolygon(boxright(rect.adjusted(0,0,0,1),m_box_deep, m_box_deep));
            QRect elseRect = m_marked->elseRect();
            if (!elseRect.isNull())
            {
                painter.drawPolygon(boxdown(elseRect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
                painter.drawPolygon(boxright(elseRect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
                QRect r1 = QRect(rect.bottomLeft(), elseRect.topLeft());
                painter.drawPolygon(boxright(r1.adjusted(0,0,0,0), m_box_deep, m_box_deep));
                r1 = QRect(elseRect.bottomLeft(), m_marked->rect().bottomLeft()+=QPoint(10,0));
                painter.drawPolygon(boxright(r1.adjusted(0,0,0,0), m_box_deep, m_box_deep));
            }
            else
            {
                rect = m_marked->rect().translated(0, m_command_h);
                rect.setWidth(10);
                rect.setHeight(rect.height() - m_command_h);
                painter.drawPolygon(boxright(rect.adjusted(0,0,0,0), m_box_deep, m_box_deep));
            }
            painter.setBrush(QColor(191, 191, 255));
            painter.drawPolygon(nest(m_marked).translated(-m_box_deep,-m_box_deep));
        }
        // paint the event info
        painter.setPen(Qt::black);
        painter.setBrush(pal.text());
        QRect rect = m_marked->rect().translated(-m_box_deep, -m_box_deep);
        rect.setHeight(m_command_h);
        painter.drawText(rect.translated(20,0), Qt::AlignLeft, " --> " + m_marked->desc());
        rect = m_marked->elseRect();
        if (!rect.isNull())
            painter.drawText(rect.translated(-m_box_deep + 10, -m_box_deep), Qt::AlignLeft, "--> else");
    }
}
