#ifndef ATTRIBUTEPROPERTIESDB_H
#define ATTRIBUTEPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class AttributePropertiesDB;
}

class AttributePropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit AttributePropertiesDB(QWidget *parent = 0);
    ~AttributePropertiesDB();
    
private:
    Ui::AttributePropertiesDB *ui;
};

#endif // ATTRIBUTEPROPERTIESDB_H
