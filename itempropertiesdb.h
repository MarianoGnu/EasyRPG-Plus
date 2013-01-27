#ifndef ITEMPROPERTIESDB_H
#define ITEMPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class ItemPropertiesDB;
}

class ItemPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit ItemPropertiesDB(QWidget *parent = 0);
    ~ItemPropertiesDB();

    void setCurrentIndex(int index);
    
private slots:

    void on_comboEquipmentSlotA_currentIndexChanged(int index);

private:
    Ui::ItemPropertiesDB *ui;
    int h_base;
    int h_stacked_item [8];
    int h_stacked_option [2];

    void AdjustHeight();

};

#endif // ITEMPROPERTIESDB_H
