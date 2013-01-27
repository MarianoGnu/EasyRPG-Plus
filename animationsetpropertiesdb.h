#ifndef ANIMATIONSETPROPERTIESDB_H
#define ANIMATIONSETPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class AnimationSetPropertiesDB;
}

class AnimationSetPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit AnimationSetPropertiesDB(QWidget *parent = 0);
    ~AnimationSetPropertiesDB();
    
private:
    Ui::AnimationSetPropertiesDB *ui;
};

#endif // ANIMATIONSETPROPERTIESDB_H
