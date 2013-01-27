#include "animationsetpropertiesdb.h"
#include "ui_animationsetpropertiesdb.h"

AnimationSetPropertiesDB::AnimationSetPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimationSetPropertiesDB)
{
    ui->setupUi(this);
}

AnimationSetPropertiesDB::~AnimationSetPropertiesDB()
{
    delete ui;
}
