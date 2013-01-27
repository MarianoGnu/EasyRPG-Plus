#ifndef CHARACTERPROPERTIESDB_H
#define CHARACTERPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class CharacterPropertiesDB;
}

class CharacterPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit CharacterPropertiesDB(QWidget *parent = 0);
    ~CharacterPropertiesDB();
    
private:
    Ui::CharacterPropertiesDB *ui;
};

#endif // CHARACTERPROPERTIESDB_H
