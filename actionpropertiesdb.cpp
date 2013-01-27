#include "actionpropertiesdb.h"
#include "ui_actionpropertiesdb.h"

ActionPropertiesDB::ActionPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ActionPropertiesDB)
{
    ui->setupUi(this);
}

ActionPropertiesDB::~ActionPropertiesDB()
{
    delete ui;
}
