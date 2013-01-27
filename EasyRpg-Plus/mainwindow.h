#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_Quit_triggered();

    void on_pushCharacter_clicked();

    void on_pushCurve_clicked();

    void on_pushSkill_clicked();

    void on_pushItem_clicked();

    void on_pushAttribute_clicked();

    void on_pushCondition_clicked();

    void on_pushFaceSets_clicked();

    void on_pushAnimationSet_clicked();

    void on_pushCharaSets_clicked();

    void on_pushVocabulary_clicked();

    void on_pushSystem_clicked();

    void on_pushCommonEvents_clicked();

    void on_pushActions_clicked();

    void on_actionDatabase_Manager_triggered();

    void on_actionMaterial_Manager_triggered();

    void on_actionScene_Editor_triggered();

    void on_actionM_ap_Editor_triggered();

    void on_comboItemClass_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;

    QPushButton *currentDatabaseButton;
};

#endif // MAINWINDOW_H
