#include "curvepropertiesdb.h"
#include "ui_curvepropertiesdb.h"

CurvePropertiesDB::CurvePropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurvePropertiesDB)
{
    ui->setupUi(this);
}

CurvePropertiesDB::~CurvePropertiesDB()
{
    delete ui;
}
