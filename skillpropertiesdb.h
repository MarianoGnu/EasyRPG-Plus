#ifndef SKILLPROPERTIESDB_H
#define SKILLPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class SkillPropertiesDB;
}

class SkillPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit SkillPropertiesDB(QWidget *parent = 0);
    ~SkillPropertiesDB();

    void setCurrentIndex(int index);
    
private slots:
    void on_comboSkillType_currentIndexChanged(int index);

private:
    Ui::SkillPropertiesDB *ui;
    int h_base;
    int h_stacked[5];

    void AdjustHeight();
};

#endif // SKILLPROPERTIESDB_H
