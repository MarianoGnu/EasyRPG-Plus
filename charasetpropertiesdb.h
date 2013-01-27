#ifndef CHARASETPROPERTIESDB_H
#define CHARASETPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class CharaSetPropertiesDB;
}

class CharaSetPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit CharaSetPropertiesDB(QWidget *parent = 0);
    ~CharaSetPropertiesDB();
    
private:
    Ui::CharaSetPropertiesDB *ui;
};

#endif // CHARASETPROPERTIESDB_H
