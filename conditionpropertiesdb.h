#ifndef CONDITIONPROPERTIESDB_H
#define CONDITIONPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class ConditionPropertiesDB;
}

class ConditionPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit ConditionPropertiesDB(QWidget *parent = 0);
    ~ConditionPropertiesDB();
    
private slots:
    void on_spinConditionHealChance_valueChanged(int arg1);

    void on_spinConditionHpBattleFixed_valueChanged(int arg1);

    void on_spinConditionHpFieldFixed_valueChanged(int arg1);

    void on_spinConditionMpBattleFixed_valueChanged(int arg1);

    void on_spinConditionMpFieldFixed_valueChanged(int arg1);

private:
    Ui::ConditionPropertiesDB *ui;
};

#endif // CONDITIONPROPERTIESDB_H
