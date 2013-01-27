#include "conditionpropertiesdb.h"
#include "ui_conditionpropertiesdb.h"

ConditionPropertiesDB::ConditionPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConditionPropertiesDB)
{
    ui->setupUi(this);
}

ConditionPropertiesDB::~ConditionPropertiesDB()
{
    delete ui;
}

void ConditionPropertiesDB::on_spinConditionHealChance_valueChanged(int arg1)
{
    ui->spinConditionHealMaxTurns->setSuffix(QString(" turn(s), with a chance of %1% every turn").arg(arg1));
}

void ConditionPropertiesDB::on_spinConditionHpBattleFixed_valueChanged(int arg1)
{
    ui->spinConditionHpBattlePercent->setSuffix(QString(" / 100 + %1) every turn").arg(arg1));
}

void ConditionPropertiesDB::on_spinConditionHpFieldFixed_valueChanged(int arg1)
{
    ui->spinConditionHpFieldPercent->setSuffix(QString(" / 100 + %1) every turn").arg(arg1));
}

void ConditionPropertiesDB::on_spinConditionMpBattleFixed_valueChanged(int arg1)
{
    ui->spinConditionMpBattlePercent->setSuffix(QString(" / 100 + %1) every turn").arg(arg1));
}

void ConditionPropertiesDB::on_spinConditionMpFieldFixed_valueChanged(int arg1)
{
    ui->spinConditionMpFieldPercent->setSuffix(QString(" / 100 + %1) every turn").arg(arg1));
}
