#ifndef ACTIONPROPERTIESDB_H
#define ACTIONPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class ActionPropertiesDB;
}

class ActionPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit ActionPropertiesDB(QWidget *parent = 0);
    ~ActionPropertiesDB();
    
private:
    Ui::ActionPropertiesDB *ui;
};

#endif // ACTIONPROPERTIESDB_H
