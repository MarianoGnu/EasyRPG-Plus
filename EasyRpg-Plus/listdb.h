#ifndef LISTDB_H
#define LISTDB_H

#include <QWidget>

namespace Ui {
class ListDB;
}

class ListDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit ListDB(QWidget *parent = 0);
    ~ListDB();
    
private slots:
    void on_lineFilter_textChanged(const QString &arg1);

private:
    Ui::ListDB *ui;
};

#endif // LISTDB_H
