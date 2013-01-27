#ifndef CURVEPROPERTIESDB_H
#define CURVEPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class CurvePropertiesDB;
}

class CurvePropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit CurvePropertiesDB(QWidget *parent = 0);
    ~CurvePropertiesDB();

private:
    Ui::CurvePropertiesDB *ui;
};

#endif // CURVEPROPERTIESDB_H
