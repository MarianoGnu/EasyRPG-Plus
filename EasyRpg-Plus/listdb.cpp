#include "listdb.h"
#include "ui_listdb.h"

ListDB::ListDB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListDB)
{
    ui->setupUi(this);
}

ListDB::~ListDB()
{
    delete ui;
}

void ListDB::on_lineFilter_textChanged(const QString &arg1)
{
    for (int i = 0; i < ui->list->count(); i++){
        if (ui->list->item(i)->text().contains(arg1, Qt::CaseInsensitive))
            ui->list->item(i)->setHidden(false);
        else
            ui->list->item(i)->setHidden(true);
    }
}
