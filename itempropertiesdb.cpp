#include "itempropertiesdb.h"
#include "ui_itempropertiesdb.h"

ItemPropertiesDB::ItemPropertiesDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemPropertiesDB)
{
    ui->setupUi(this);
    h_base = 173;
    h_stacked_item[0] = 0;
    h_stacked_item[1] = 693;
    h_stacked_item[2] = 500;
    h_stacked_item[3] = 500;
    h_stacked_item[4] = 500;
    h_stacked_item[5] = 500;
    h_stacked_item[6] = 500;
    h_stacked_item[7] = 80;
    h_stacked_option[0] = 515;
    h_stacked_option[1] = 160;
    setCurrentIndex(0);
}

ItemPropertiesDB::~ItemPropertiesDB()
{
    delete ui;
}

void ItemPropertiesDB::AdjustHeight()
{
    if (ui->stackedItem->currentIndex() == 1)
    {
        if (ui->comboEquipmentSlotA->currentIndex() == 0) // TODO >> CHANGE FOR A SLOT TYPE CHECK
        {
            setMaximumHeight(h_base + h_stacked_item[ui->stackedItem->currentIndex()] + h_stacked_option[0]);
            setMinimumHeight(h_base + h_stacked_item[ui->stackedItem->currentIndex()] + h_stacked_option[0]);
            ui->stackedItem->setMaximumHeight(h_stacked_item[ui->stackedItem->currentIndex()]);
            ui->stackedItem->setMinimumHeight(h_stacked_item[ui->stackedItem->currentIndex()]);
            ui->stackedEquipmentOptions->setMaximumHeight(h_stacked_option[0]);
            ui->stackedEquipmentOptions->setMinimumHeight(h_stacked_option[0]);
        }
        else
        {
            setMaximumHeight(h_base + h_stacked_item[ui->stackedItem->currentIndex()] + h_stacked_option[1]);
            setMinimumHeight(h_base + h_stacked_item[ui->stackedItem->currentIndex()] + h_stacked_option[1]);
            ui->stackedItem->setMaximumHeight(h_stacked_item[ui->stackedItem->currentIndex()]);
            ui->stackedItem->setMinimumHeight(h_stacked_item[ui->stackedItem->currentIndex()]);
            ui->stackedEquipmentOptions->setMaximumHeight(h_stacked_option[1]);
            ui->stackedEquipmentOptions->setMinimumHeight(h_stacked_option[1]);
        }

    }
    else
    {
        setMaximumHeight(h_base + h_stacked_item[ui->stackedItem->currentIndex()]);
        setMinimumHeight(h_base + h_stacked_item[ui->stackedItem->currentIndex()]);
        ui->stackedItem->setMaximumHeight(h_stacked_item[ui->stackedItem->currentIndex()]);
        ui->stackedItem->setMinimumHeight(h_stacked_item[ui->stackedItem->currentIndex()]);
        ui->stackedEquipmentOptions->setMinimumHeight(0);
        ui->stackedEquipmentOptions->setMaximumHeight(0);
    }
}

void ItemPropertiesDB::setCurrentIndex(int index)
{
    ui->stackedItem->setCurrentIndex(index);
    AdjustHeight();
}


void ItemPropertiesDB::on_comboEquipmentSlotA_currentIndexChanged(int index)
{
    ui->stackedEquipmentOptions->setCurrentIndex(index);
    AdjustHeight();
}
