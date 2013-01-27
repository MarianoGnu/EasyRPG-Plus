#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentDatabaseButton = ui->pushCharacter;
    ui->stackedDatabase->setCurrentWidget(ui->pageCharacter);
    ui->stackedMain->setCurrentWidget(ui->pageMapEditor);
    ui->propertiesSkill->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    qApp->quit();
}

void MainWindow::on_pushCharacter_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCharacter->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCharacter);
    //actualize pointers
    currentDatabaseButton = ui->pushCharacter;
}

void MainWindow::on_pushCurve_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCurve->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCurve);
    //actualize pointers
    currentDatabaseButton = ui->pushCurve;
}

void MainWindow::on_pushSkill_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushSkill->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageSkill);
    //actualize pointers
    currentDatabaseButton = ui->pushSkill;
}

void MainWindow::on_pushItem_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushItem->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageItem);
    //actualize pointers
    currentDatabaseButton = ui->pushItem;
}

void MainWindow::on_pushAttribute_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushAttribute->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageAttribute);
    //actualize pointers
    currentDatabaseButton = ui->pushAttribute;
}

void MainWindow::on_pushCondition_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCondition->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCondition);
    //actualize pointers
    currentDatabaseButton = ui->pushCondition;
}

void MainWindow::on_pushFaceSets_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushFaceSets->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageFaceSet);
    //actualize pointers
    currentDatabaseButton = ui->pushFaceSets;
}

void MainWindow::on_pushAnimationSet_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushAnimationSet->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageAnimationSet);
    //actualize pointers
    currentDatabaseButton = ui->pushAnimationSet;
}

void MainWindow::on_pushCharaSets_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCharaSets->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCharaSet);
    //actualize pointers
    currentDatabaseButton = ui->pushCharaSets;
}

void MainWindow::on_pushVocabulary_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushVocabulary->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageVocabulary);
    //actualize pointers
    currentDatabaseButton = ui->pushVocabulary;
}

void MainWindow::on_pushSystem_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushSystem->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageSystem);
    //actualize pointers
    currentDatabaseButton = ui->pushSystem;
}

void MainWindow::on_pushActions_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushActions->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageActions);
    //actualize pointers
    currentDatabaseButton = ui->pushActions;
}

void MainWindow::on_pushCommonEvents_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCommonEvents->setChecked(true);
    //Handle Page
    ui->stackedDatabase->setCurrentWidget(ui->pageCommonEvents);

    //actualize pointers
    currentDatabaseButton = ui->pushCommonEvents;

}

void MainWindow::on_actionDatabase_Manager_triggered()
{
    ui->stackedMain->setCurrentWidget(ui->pageDatabase);
}

void MainWindow::on_actionMaterial_Manager_triggered()
{
    ui->stackedMain->setCurrentWidget(ui->pageMaterialManager);
}

void MainWindow::on_actionScene_Editor_triggered()
{
ui->stackedMain->setCurrentWidget(ui->pageSceneEditor);
}

void MainWindow::on_actionM_ap_Editor_triggered()
{
ui->stackedMain->setCurrentWidget(ui->pageMapEditor);
}


void MainWindow::on_comboItemClass_currentIndexChanged(int index)
{
    ui->propertiesItem->setCurrentIndex(index);
}
