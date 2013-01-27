#include "skillpropertiesdb.h"
#include "ui_skillpropertiesdb.h"

SkillPropertiesDB::SkillPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SkillPropertiesDB)
{
    ui->setupUi(this);
    h_base = 179;
    h_stacked[0] = 856;
    h_stacked[1] = 54;
    h_stacked[2] = 54;
    h_stacked[3] = 229;
    h_stacked[4] = 170;
    AdjustHeight();
}

SkillPropertiesDB::~SkillPropertiesDB()
{
    delete ui;
}

void SkillPropertiesDB::on_comboSkillType_currentIndexChanged(int index)
{
    ui->stackedSkill->setCurrentIndex(index);
    AdjustHeight();
}

void SkillPropertiesDB::AdjustHeight()
{
    setMaximumHeight(h_base+h_stacked[ui->stackedSkill->currentIndex()]);
    setMinimumHeight(h_base+h_stacked[ui->stackedSkill->currentIndex()]);
    ui->stackedSkill->setMaximumHeight(h_stacked[ui->stackedSkill->currentIndex()]);
    ui->stackedSkill->setMinimumHeight(h_stacked[ui->stackedSkill->currentIndex()]);
}

void SkillPropertiesDB::setCurrentIndex(int index)
{
    on_comboSkillType_currentIndexChanged(index);
}
