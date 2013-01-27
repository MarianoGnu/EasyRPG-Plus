#include "attributepropertiesdb.h"
#include "ui_attributepropertiesdb.h"

AttributePropertiesDB::AttributePropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AttributePropertiesDB)
{
    ui->setupUi(this);
}

AttributePropertiesDB::~AttributePropertiesDB()
{
    delete ui;
}
