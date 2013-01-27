#include "characterpropertiesdb.h"
#include "ui_characterpropertiesdb.h"

CharacterPropertiesDB::CharacterPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CharacterPropertiesDB)
{
    ui->setupUi(this);
}

CharacterPropertiesDB::~CharacterPropertiesDB()
{
    delete ui;
}
