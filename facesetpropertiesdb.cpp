#include "facesetpropertiesdb.h"
#include "ui_facesetpropertiesdb.h"

FaceSetPropertiesDB::FaceSetPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FaceSetPropertiesDB)
{
    ui->setupUi(this);
}

FaceSetPropertiesDB::~FaceSetPropertiesDB()
{
    delete ui;
}
