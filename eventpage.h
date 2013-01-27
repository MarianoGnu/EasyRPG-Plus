#ifndef EVENTPAGE_H
#define EVENTPAGE_H

#include <dialogcommand.h>
#include <command.h>
#include <QWidget>
#include <QMouseEvent>
#include <QPainter>

//QT_FORWARD_DECLARE_CLASS(QUndoStack)

class Command;
class DialogCommand;

class EventPage : public QWidget
{
    Q_OBJECT
public:
    explicit EventPage(QWidget *parent = 0);

    void deleteCommand (Command *e);

    Command* commandAt(QPoint p, Command* root);
    void newCommand(Command* position);
    void editCommand(Command* current);

    Command* event() const;
    void setEvent(Command *f_event);
    QPolygon nest(Command *c);
    QPolygon boxdown(QRect rect, int dx, int dy);
    QPolygon boxright(QRect rect, int dx, int dy);

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    int m_command_h;
    int m_box_deep;

    Command *m_event;
    Command *m_selection;
    Command *m_marked;

    DialogCommand *m_dialogCommand;


signals:
    
public slots:
    
};

#endif // EVENTPAGE_H
