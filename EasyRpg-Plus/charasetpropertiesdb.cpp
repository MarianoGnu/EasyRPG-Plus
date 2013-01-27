#include "charasetpropertiesdb.h"
#include "ui_charasetpropertiesdb.h"

CharaSetPropertiesDB::CharaSetPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CharaSetPropertiesDB)
{
    ui->setupUi(this);
}

CharaSetPropertiesDB::~CharaSetPropertiesDB()
{
    delete ui;
}
