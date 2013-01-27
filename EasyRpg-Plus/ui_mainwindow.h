/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 19. Jan 23:16:33 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "actionpropertiesdb.h"
#include "attributepropertiesdb.h"
#include "characterpropertiesdb.h"
#include "charasetpropertiesdb.h"
#include "conditionpropertiesdb.h"
#include "curvepropertiesdb.h"
#include "eventpage.h"
#include "facesetpropertiesdb.h"
#include "itempropertiesdb.h"
#include "listdb.h"
#include "skillpropertiesdb.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New_Project;
    QAction *action_Open_Project;
    QAction *action_Close_Project;
    QAction *action_Save_Project;
    QAction *action_Quit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSearch;
    QAction *actionProject_Preferences;
    QAction *action_New_Map;
    QAction *action_Open_Map;
    QAction *action_Save_Map;
    QAction *actionSave_All;
    QAction *action_Revert;
    QAction *actionMap_Properties;
    QAction *actionM_ap_Editor;
    QAction *actionScene_Editor;
    QAction *actionGrid;
    QAction *actionAbout;
    QAction *action_Contents;
    QAction *actionMaterial_Manager;
    QAction *actionDatabase_Manager;
    QWidget *centralwidget;
    QGridLayout *gridLayout_47;
    QStackedWidget *stackedMain;
    QWidget *pageDatabase;
    QGridLayout *gridLayout_2;
    QGridLayout *gridDatabaseButtons1;
    QPushButton *pushCharacter;
    QPushButton *pushCurve;
    QPushButton *pushSkill;
    QPushButton *pushItem;
    QPushButton *pushAttribute;
    QPushButton *pushCondition;
    QGridLayout *gridDatabaseButtons2;
    QPushButton *pushCharaSets;
    QPushButton *pushFaceSets;
    QPushButton *pushAnimationSet;
    QPushButton *pushSystem;
    QPushButton *pushVocabulary;
    QPushButton *pushActions;
    QPushButton *pushCommonEvents;
    QStackedWidget *stackedDatabase;
    QWidget *pageCharacter;
    QGridLayout *gridLayout_9;
    QFrame *gridCharacterList;
    QGridLayout *gridLayout_154;
    QLabel *label_27;
    ListDB *listCharacter;
    QScrollArea *scrollCharacterProperties;
    QWidget *scrollCharacterPropertiesContents;
    QGridLayout *gridLayout_3;
    CharacterPropertiesDB *propertiesCharacter;
    QWidget *pageCurve;
    QGridLayout *gridLayout;
    QFrame *gridCurveList;
    QGridLayout *gridLayout_35;
    QLabel *label_8;
    ListDB *listCurve;
    QScrollArea *scrollCurveProperties;
    QWidget *scrollCurvePropertiesContents;
    QGridLayout *gridLayout_4;
    CurvePropertiesDB *propertiesCurve;
    QWidget *pageCharaSet;
    QGridLayout *gridLayout_60;
    QFrame *gridCharaSetList;
    QGridLayout *gridLayout_48;
    QLabel *label_20;
    ListDB *listCharaSet;
    QScrollArea *scrollCharaSetProperties;
    QWidget *scrollCharacterPropertiesContents_3;
    QGridLayout *gridLayout_22;
    CharaSetPropertiesDB *propertiesCharaSet;
    QWidget *pageSkill;
    QGridLayout *gridLayout_62;
    QFrame *gridSkillList;
    QGridLayout *gridLayout_51;
    QLabel *label_21;
    ListDB *listSkill;
    QScrollArea *scrollSkillProperties;
    QWidget *scrollSkillPropertiesContents;
    QGridLayout *gridLayout_55;
    SkillPropertiesDB *propertiesSkill;
    QWidget *pageActions;
    QGridLayout *gridLayout_114;
    QScrollArea *scrollActionsProperties;
    QWidget *scrollActionsPropertiesContents;
    QGridLayout *gridLayout_85;
    ActionPropertiesDB *propertiesAction;
    QFrame *gridActionsList;
    QGridLayout *gridLayout_84;
    QLabel *label_22;
    QComboBox *comboActionType;
    ListDB *listActions;
    QWidget *pageItem;
    QGridLayout *gridLayout_24;
    QScrollArea *scrollItemProperties;
    QWidget *scrollItemPropertiesContents;
    QGridLayout *gridLayout_92;
    ItemPropertiesDB *propertiesItem;
    QFrame *gridItemList;
    QGridLayout *gridLayout_91;
    QLabel *label_23;
    QComboBox *comboItemClass;
    ListDB *listItem;
    QWidget *pageAttribute;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollAttributeProperties;
    QWidget *scrollAttributePropertiesContents;
    QGridLayout *gridLayout_93;
    AttributePropertiesDB *propertiesAttribute;
    QFrame *gridAtribute;
    QGridLayout *gridAttributeList;
    QLabel *label_24;
    ListDB *listAttribute;
    QWidget *pageCondition;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollConditionProperties;
    QWidget *scrollConditionPropertiesContents;
    QGridLayout *gridLayout_94;
    ConditionPropertiesDB *propertiesCondition;
    QFrame *gridConditionList;
    QGridLayout *gridLayout_10;
    QLabel *label_25;
    ListDB *listCondition;
    QWidget *pageFaceSet;
    QGridLayout *gridLayout_7;
    QScrollArea *scrollFaceSetProperties;
    QWidget *scrollFaceSetPropertiesContents;
    QGridLayout *gridLayout_95;
    FaceSetPropertiesDB *propertiesFaceSet;
    QFrame *gridFaceSetList;
    QGridLayout *gridLayout_11;
    QLabel *label_26;
    ListDB *listFaceSet;
    QWidget *pageAnimationSet;
    QGridLayout *gridLayout_8;
    QScrollArea *scrollAnimationSetProperties;
    QWidget *scrollAnimationSetPropertiesContents;
    QGridLayout *gridLayout_96;
    FaceSetPropertiesDB *propertiesAnimationSet;
    QFrame *gridAnimationSetList;
    QGridLayout *gridLayout_12;
    QLabel *label_28;
    ListDB *listAnimationSet;
    QWidget *pageVocabulary;
    QGridLayout *gridLayout_29;
    QLabel *label_14;
    QWidget *pageSystem;
    QGridLayout *gridLayout_30;
    QLabel *label_15;
    QWidget *pageCommonEvents;
    QGridLayout *gridLayout_14;
    QFrame *gridAnimationSetList_2;
    QGridLayout *gridLayout_13;
    QLabel *label_29;
    ListDB *listCommonEvent;
    QScrollArea *scrollCommonEventProperties;
    QWidget *scrollCommonEventPropertiesContents;
    QGridLayout *gridLayout_97;
    EventPage *propertiesCommonEvent;
    QWidget *pageMapEditor;
    QGridLayout *gridLayout_33;
    QLabel *label_18;
    QWidget *pageSceneEditor;
    QGridLayout *gridLayout_34;
    QLabel *label_19;
    QWidget *pageMaterialManager;
    QGridLayout *gridLayout_32;
    QLabel *label_17;
    QMenuBar *menubar;
    QMenu *menuProject;
    QMenu *menuEdit;
    QMenu *menuMap;
    QMenu *menuView;
    QMenu *menu_Help;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(766, 572);
        MainWindow->setMinimumSize(QSize(400, 200));
        QIcon icon;
        icon.addFile(QStringLiteral(":/newproject"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        action_New_Project = new QAction(MainWindow);
        action_New_Project->setObjectName(QStringLiteral("action_New_Project"));
        action_New_Project->setIcon(icon);
        action_Open_Project = new QAction(MainWindow);
        action_Open_Project->setObjectName(QStringLiteral("action_Open_Project"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/openproject"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open_Project->setIcon(icon1);
        action_Close_Project = new QAction(MainWindow);
        action_Close_Project->setObjectName(QStringLiteral("action_Close_Project"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/closeproject"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close_Project->setIcon(icon2);
        action_Save_Project = new QAction(MainWindow);
        action_Save_Project->setObjectName(QStringLiteral("action_Save_Project"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/saveproject"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save_Project->setIcon(icon3);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/undo"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/redo"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        actionProject_Preferences = new QAction(MainWindow);
        actionProject_Preferences->setObjectName(QStringLiteral("actionProject_Preferences"));
        action_New_Map = new QAction(MainWindow);
        action_New_Map->setObjectName(QStringLiteral("action_New_Map"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/newmap"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Map->setIcon(icon6);
        action_Open_Map = new QAction(MainWindow);
        action_Open_Map->setObjectName(QStringLiteral("action_Open_Map"));
        action_Save_Map = new QAction(MainWindow);
        action_Save_Map->setObjectName(QStringLiteral("action_Save_Map"));
        actionSave_All = new QAction(MainWindow);
        actionSave_All->setObjectName(QStringLiteral("actionSave_All"));
        action_Revert = new QAction(MainWindow);
        action_Revert->setObjectName(QStringLiteral("action_Revert"));
        actionMap_Properties = new QAction(MainWindow);
        actionMap_Properties->setObjectName(QStringLiteral("actionMap_Properties"));
        actionM_ap_Editor = new QAction(MainWindow);
        actionM_ap_Editor->setObjectName(QStringLiteral("actionM_ap_Editor"));
        actionM_ap_Editor->setCheckable(false);
        actionM_ap_Editor->setChecked(false);
        actionScene_Editor = new QAction(MainWindow);
        actionScene_Editor->setObjectName(QStringLiteral("actionScene_Editor"));
        actionScene_Editor->setCheckable(false);
        actionGrid = new QAction(MainWindow);
        actionGrid->setObjectName(QStringLiteral("actionGrid"));
        actionGrid->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        action_Contents = new QAction(MainWindow);
        action_Contents->setObjectName(QStringLiteral("action_Contents"));
        actionMaterial_Manager = new QAction(MainWindow);
        actionMaterial_Manager->setObjectName(QStringLiteral("actionMaterial_Manager"));
        actionDatabase_Manager = new QAction(MainWindow);
        actionDatabase_Manager->setObjectName(QStringLiteral("actionDatabase_Manager"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_47 = new QGridLayout(centralwidget);
        gridLayout_47->setObjectName(QStringLiteral("gridLayout_47"));
        stackedMain = new QStackedWidget(centralwidget);
        stackedMain->setObjectName(QStringLiteral("stackedMain"));
        pageDatabase = new QWidget();
        pageDatabase->setObjectName(QStringLiteral("pageDatabase"));
        gridLayout_2 = new QGridLayout(pageDatabase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridDatabaseButtons1 = new QGridLayout();
        gridDatabaseButtons1->setObjectName(QStringLiteral("gridDatabaseButtons1"));
        pushCharacter = new QPushButton(pageDatabase);
        pushCharacter->setObjectName(QStringLiteral("pushCharacter"));
        pushCharacter->setStyleSheet(QStringLiteral(""));
        pushCharacter->setCheckable(true);
        pushCharacter->setChecked(true);
        pushCharacter->setFlat(false);

        gridDatabaseButtons1->addWidget(pushCharacter, 0, 0, 1, 1);

        pushCurve = new QPushButton(pageDatabase);
        pushCurve->setObjectName(QStringLiteral("pushCurve"));
        pushCurve->setCheckable(true);

        gridDatabaseButtons1->addWidget(pushCurve, 0, 1, 1, 1);

        pushSkill = new QPushButton(pageDatabase);
        pushSkill->setObjectName(QStringLiteral("pushSkill"));
        pushSkill->setCheckable(true);

        gridDatabaseButtons1->addWidget(pushSkill, 0, 2, 1, 1);

        pushItem = new QPushButton(pageDatabase);
        pushItem->setObjectName(QStringLiteral("pushItem"));
        pushItem->setCheckable(true);

        gridDatabaseButtons1->addWidget(pushItem, 0, 3, 1, 1);

        pushAttribute = new QPushButton(pageDatabase);
        pushAttribute->setObjectName(QStringLiteral("pushAttribute"));
        pushAttribute->setCheckable(true);

        gridDatabaseButtons1->addWidget(pushAttribute, 0, 4, 1, 1);

        pushCondition = new QPushButton(pageDatabase);
        pushCondition->setObjectName(QStringLiteral("pushCondition"));
        pushCondition->setCheckable(true);

        gridDatabaseButtons1->addWidget(pushCondition, 0, 5, 1, 1);


        gridLayout_2->addLayout(gridDatabaseButtons1, 0, 0, 1, 1);

        gridDatabaseButtons2 = new QGridLayout();
        gridDatabaseButtons2->setObjectName(QStringLiteral("gridDatabaseButtons2"));
        gridDatabaseButtons2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushCharaSets = new QPushButton(pageDatabase);
        pushCharaSets->setObjectName(QStringLiteral("pushCharaSets"));
        pushCharaSets->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushCharaSets, 0, 3, 1, 1);

        pushFaceSets = new QPushButton(pageDatabase);
        pushFaceSets->setObjectName(QStringLiteral("pushFaceSets"));
        pushFaceSets->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushFaceSets, 0, 1, 1, 1);

        pushAnimationSet = new QPushButton(pageDatabase);
        pushAnimationSet->setObjectName(QStringLiteral("pushAnimationSet"));
        pushAnimationSet->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushAnimationSet, 0, 2, 1, 1);

        pushSystem = new QPushButton(pageDatabase);
        pushSystem->setObjectName(QStringLiteral("pushSystem"));
        pushSystem->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushSystem, 0, 7, 1, 1);

        pushVocabulary = new QPushButton(pageDatabase);
        pushVocabulary->setObjectName(QStringLiteral("pushVocabulary"));
        pushVocabulary->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushVocabulary, 0, 6, 1, 1);

        pushActions = new QPushButton(pageDatabase);
        pushActions->setObjectName(QStringLiteral("pushActions"));
        pushActions->setCheckable(true);
        pushActions->setChecked(false);

        gridDatabaseButtons2->addWidget(pushActions, 0, 4, 1, 1);

        pushCommonEvents = new QPushButton(pageDatabase);
        pushCommonEvents->setObjectName(QStringLiteral("pushCommonEvents"));
        pushCommonEvents->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushCommonEvents, 0, 5, 1, 1);


        gridLayout_2->addLayout(gridDatabaseButtons2, 1, 0, 1, 1);

        stackedDatabase = new QStackedWidget(pageDatabase);
        stackedDatabase->setObjectName(QStringLiteral("stackedDatabase"));
        stackedDatabase->setFrameShape(QFrame::WinPanel);
        stackedDatabase->setFrameShadow(QFrame::Sunken);
        pageCharacter = new QWidget();
        pageCharacter->setObjectName(QStringLiteral("pageCharacter"));
        gridLayout_9 = new QGridLayout(pageCharacter);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridCharacterList = new QFrame(pageCharacter);
        gridCharacterList->setObjectName(QStringLiteral("gridCharacterList"));
        gridCharacterList->setMaximumSize(QSize(180, 16777215));
        gridLayout_154 = new QGridLayout(gridCharacterList);
        gridLayout_154->setObjectName(QStringLiteral("gridLayout_154"));
        gridLayout_154->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(gridCharacterList);
        label_27->setObjectName(QStringLiteral("label_27"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(118, 116, 108, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_27->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_27->setFont(font);
        label_27->setLayoutDirection(Qt::LeftToRight);
        label_27->setAutoFillBackground(true);
        label_27->setScaledContents(false);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_154->addWidget(label_27, 0, 0, 1, 1);

        listCharacter = new ListDB(gridCharacterList);
        listCharacter->setObjectName(QStringLiteral("listCharacter"));

        gridLayout_154->addWidget(listCharacter, 1, 0, 1, 1);


        gridLayout_9->addWidget(gridCharacterList, 0, 0, 1, 1);

        scrollCharacterProperties = new QScrollArea(pageCharacter);
        scrollCharacterProperties->setObjectName(QStringLiteral("scrollCharacterProperties"));
        scrollCharacterProperties->setMaximumSize(QSize(600, 16777215));
        scrollCharacterProperties->setWidgetResizable(true);
        scrollCharacterPropertiesContents = new QWidget();
        scrollCharacterPropertiesContents->setObjectName(QStringLiteral("scrollCharacterPropertiesContents"));
        scrollCharacterPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_3 = new QGridLayout(scrollCharacterPropertiesContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        propertiesCharacter = new CharacterPropertiesDB(scrollCharacterPropertiesContents);
        propertiesCharacter->setObjectName(QStringLiteral("propertiesCharacter"));

        gridLayout_3->addWidget(propertiesCharacter, 0, 0, 1, 1, Qt::AlignTop);

        scrollCharacterProperties->setWidget(scrollCharacterPropertiesContents);

        gridLayout_9->addWidget(scrollCharacterProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCharacter);
        pageCurve = new QWidget();
        pageCurve->setObjectName(QStringLiteral("pageCurve"));
        gridLayout = new QGridLayout(pageCurve);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridCurveList = new QFrame(pageCurve);
        gridCurveList->setObjectName(QStringLiteral("gridCurveList"));
        gridCurveList->setMaximumSize(QSize(180, 16777215));
        gridLayout_35 = new QGridLayout(gridCurveList);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridCurveList);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_8->setPalette(palette1);
        label_8->setFont(font);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAutoFillBackground(true);
        label_8->setScaledContents(false);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_35->addWidget(label_8, 0, 0, 1, 1);

        listCurve = new ListDB(gridCurveList);
        listCurve->setObjectName(QStringLiteral("listCurve"));

        gridLayout_35->addWidget(listCurve, 1, 0, 1, 1);


        gridLayout->addWidget(gridCurveList, 0, 0, 1, 1);

        scrollCurveProperties = new QScrollArea(pageCurve);
        scrollCurveProperties->setObjectName(QStringLiteral("scrollCurveProperties"));
        scrollCurveProperties->setMaximumSize(QSize(600, 16777215));
        scrollCurveProperties->setWidgetResizable(true);
        scrollCurvePropertiesContents = new QWidget();
        scrollCurvePropertiesContents->setObjectName(QStringLiteral("scrollCurvePropertiesContents"));
        scrollCurvePropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_4 = new QGridLayout(scrollCurvePropertiesContents);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        propertiesCurve = new CurvePropertiesDB(scrollCurvePropertiesContents);
        propertiesCurve->setObjectName(QStringLiteral("propertiesCurve"));

        gridLayout_4->addWidget(propertiesCurve, 0, 0, 1, 1, Qt::AlignTop);

        scrollCurveProperties->setWidget(scrollCurvePropertiesContents);

        gridLayout->addWidget(scrollCurveProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCurve);
        pageCharaSet = new QWidget();
        pageCharaSet->setObjectName(QStringLiteral("pageCharaSet"));
        gridLayout_60 = new QGridLayout(pageCharaSet);
        gridLayout_60->setObjectName(QStringLiteral("gridLayout_60"));
        gridCharaSetList = new QFrame(pageCharaSet);
        gridCharaSetList->setObjectName(QStringLiteral("gridCharaSetList"));
        gridCharaSetList->setMaximumSize(QSize(180, 16777215));
        gridLayout_48 = new QGridLayout(gridCharaSetList);
        gridLayout_48->setObjectName(QStringLiteral("gridLayout_48"));
        gridLayout_48->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(gridCharaSetList);
        label_20->setObjectName(QStringLiteral("label_20"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_20->setPalette(palette2);
        label_20->setFont(font);
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAutoFillBackground(true);
        label_20->setScaledContents(false);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_48->addWidget(label_20, 0, 0, 1, 1);

        listCharaSet = new ListDB(gridCharaSetList);
        listCharaSet->setObjectName(QStringLiteral("listCharaSet"));

        gridLayout_48->addWidget(listCharaSet, 1, 0, 1, 1);


        gridLayout_60->addWidget(gridCharaSetList, 0, 0, 1, 1);

        scrollCharaSetProperties = new QScrollArea(pageCharaSet);
        scrollCharaSetProperties->setObjectName(QStringLiteral("scrollCharaSetProperties"));
        scrollCharaSetProperties->setMaximumSize(QSize(600, 16777215));
        scrollCharaSetProperties->setWidgetResizable(true);
        scrollCharaSetProperties->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollCharacterPropertiesContents_3 = new QWidget();
        scrollCharacterPropertiesContents_3->setObjectName(QStringLiteral("scrollCharacterPropertiesContents_3"));
        scrollCharacterPropertiesContents_3->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_22 = new QGridLayout(scrollCharacterPropertiesContents_3);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        propertiesCharaSet = new CharaSetPropertiesDB(scrollCharacterPropertiesContents_3);
        propertiesCharaSet->setObjectName(QStringLiteral("propertiesCharaSet"));

        gridLayout_22->addWidget(propertiesCharaSet, 0, 0, 1, 1, Qt::AlignTop);

        scrollCharaSetProperties->setWidget(scrollCharacterPropertiesContents_3);

        gridLayout_60->addWidget(scrollCharaSetProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCharaSet);
        pageSkill = new QWidget();
        pageSkill->setObjectName(QStringLiteral("pageSkill"));
        gridLayout_62 = new QGridLayout(pageSkill);
        gridLayout_62->setObjectName(QStringLiteral("gridLayout_62"));
        gridSkillList = new QFrame(pageSkill);
        gridSkillList->setObjectName(QStringLiteral("gridSkillList"));
        gridSkillList->setMaximumSize(QSize(180, 16777215));
        gridLayout_51 = new QGridLayout(gridSkillList);
        gridLayout_51->setObjectName(QStringLiteral("gridLayout_51"));
        gridLayout_51->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(gridSkillList);
        label_21->setObjectName(QStringLiteral("label_21"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_21->setPalette(palette3);
        label_21->setFont(font);
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setAutoFillBackground(true);
        label_21->setScaledContents(false);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_51->addWidget(label_21, 0, 0, 1, 1);

        listSkill = new ListDB(gridSkillList);
        listSkill->setObjectName(QStringLiteral("listSkill"));

        gridLayout_51->addWidget(listSkill, 1, 0, 1, 1);


        gridLayout_62->addWidget(gridSkillList, 0, 0, 1, 1);

        scrollSkillProperties = new QScrollArea(pageSkill);
        scrollSkillProperties->setObjectName(QStringLiteral("scrollSkillProperties"));
        scrollSkillProperties->setMaximumSize(QSize(600, 16777215));
        scrollSkillProperties->setWidgetResizable(true);
        scrollSkillPropertiesContents = new QWidget();
        scrollSkillPropertiesContents->setObjectName(QStringLiteral("scrollSkillPropertiesContents"));
        scrollSkillPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_55 = new QGridLayout(scrollSkillPropertiesContents);
        gridLayout_55->setObjectName(QStringLiteral("gridLayout_55"));
        gridLayout_55->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesSkill = new SkillPropertiesDB(scrollSkillPropertiesContents);
        propertiesSkill->setObjectName(QStringLiteral("propertiesSkill"));

        gridLayout_55->addWidget(propertiesSkill, 0, 0, 1, 1, Qt::AlignTop);

        scrollSkillProperties->setWidget(scrollSkillPropertiesContents);

        gridLayout_62->addWidget(scrollSkillProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageSkill);
        pageActions = new QWidget();
        pageActions->setObjectName(QStringLiteral("pageActions"));
        gridLayout_114 = new QGridLayout(pageActions);
        gridLayout_114->setObjectName(QStringLiteral("gridLayout_114"));
        scrollActionsProperties = new QScrollArea(pageActions);
        scrollActionsProperties->setObjectName(QStringLiteral("scrollActionsProperties"));
        scrollActionsProperties->setMaximumSize(QSize(600, 16777215));
        scrollActionsProperties->setWidgetResizable(true);
        scrollActionsPropertiesContents = new QWidget();
        scrollActionsPropertiesContents->setObjectName(QStringLiteral("scrollActionsPropertiesContents"));
        scrollActionsPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        scrollActionsPropertiesContents->setMaximumSize(QSize(16777215, 1019));
        gridLayout_85 = new QGridLayout(scrollActionsPropertiesContents);
        gridLayout_85->setObjectName(QStringLiteral("gridLayout_85"));
        gridLayout_85->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesAction = new ActionPropertiesDB(scrollActionsPropertiesContents);
        propertiesAction->setObjectName(QStringLiteral("propertiesAction"));

        gridLayout_85->addWidget(propertiesAction, 0, 0, 1, 1, Qt::AlignTop);

        scrollActionsProperties->setWidget(scrollActionsPropertiesContents);

        gridLayout_114->addWidget(scrollActionsProperties, 0, 1, 2, 1);

        gridActionsList = new QFrame(pageActions);
        gridActionsList->setObjectName(QStringLiteral("gridActionsList"));
        gridActionsList->setMaximumSize(QSize(180, 16777215));
        gridLayout_84 = new QGridLayout(gridActionsList);
        gridLayout_84->setObjectName(QStringLiteral("gridLayout_84"));
        gridLayout_84->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(gridActionsList);
        label_22->setObjectName(QStringLiteral("label_22"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_22->setPalette(palette4);
        label_22->setFont(font);
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setAutoFillBackground(true);
        label_22->setScaledContents(false);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_84->addWidget(label_22, 0, 0, 1, 2);

        comboActionType = new QComboBox(gridActionsList);
        comboActionType->setObjectName(QStringLiteral("comboActionType"));

        gridLayout_84->addWidget(comboActionType, 1, 0, 1, 2);

        listActions = new ListDB(gridActionsList);
        listActions->setObjectName(QStringLiteral("listActions"));

        gridLayout_84->addWidget(listActions, 2, 0, 1, 2);


        gridLayout_114->addWidget(gridActionsList, 0, 0, 2, 1);

        stackedDatabase->addWidget(pageActions);
        pageItem = new QWidget();
        pageItem->setObjectName(QStringLiteral("pageItem"));
        gridLayout_24 = new QGridLayout(pageItem);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        scrollItemProperties = new QScrollArea(pageItem);
        scrollItemProperties->setObjectName(QStringLiteral("scrollItemProperties"));
        scrollItemProperties->setMaximumSize(QSize(600, 16777215));
        scrollItemProperties->setWidgetResizable(true);
        scrollItemPropertiesContents = new QWidget();
        scrollItemPropertiesContents->setObjectName(QStringLiteral("scrollItemPropertiesContents"));
        scrollItemPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        scrollItemPropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_92 = new QGridLayout(scrollItemPropertiesContents);
        gridLayout_92->setObjectName(QStringLiteral("gridLayout_92"));
        gridLayout_92->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesItem = new ItemPropertiesDB(scrollItemPropertiesContents);
        propertiesItem->setObjectName(QStringLiteral("propertiesItem"));

        gridLayout_92->addWidget(propertiesItem, 0, 0, 1, 1, Qt::AlignTop);

        scrollItemProperties->setWidget(scrollItemPropertiesContents);

        gridLayout_24->addWidget(scrollItemProperties, 0, 1, 1, 1);

        gridItemList = new QFrame(pageItem);
        gridItemList->setObjectName(QStringLiteral("gridItemList"));
        gridItemList->setMaximumSize(QSize(180, 16777215));
        gridLayout_91 = new QGridLayout(gridItemList);
        gridLayout_91->setObjectName(QStringLiteral("gridLayout_91"));
        gridLayout_91->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(gridItemList);
        label_23->setObjectName(QStringLiteral("label_23"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_23->setPalette(palette5);
        label_23->setFont(font);
        label_23->setLayoutDirection(Qt::LeftToRight);
        label_23->setAutoFillBackground(true);
        label_23->setScaledContents(false);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_91->addWidget(label_23, 0, 0, 1, 2);

        comboItemClass = new QComboBox(gridItemList);
        comboItemClass->setObjectName(QStringLiteral("comboItemClass"));

        gridLayout_91->addWidget(comboItemClass, 1, 0, 1, 2);

        listItem = new ListDB(gridItemList);
        listItem->setObjectName(QStringLiteral("listItem"));

        gridLayout_91->addWidget(listItem, 2, 0, 1, 2);


        gridLayout_24->addWidget(gridItemList, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageItem);
        pageAttribute = new QWidget();
        pageAttribute->setObjectName(QStringLiteral("pageAttribute"));
        gridLayout_5 = new QGridLayout(pageAttribute);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        scrollAttributeProperties = new QScrollArea(pageAttribute);
        scrollAttributeProperties->setObjectName(QStringLiteral("scrollAttributeProperties"));
        scrollAttributeProperties->setMaximumSize(QSize(600, 16777215));
        scrollAttributeProperties->setWidgetResizable(true);
        scrollAttributePropertiesContents = new QWidget();
        scrollAttributePropertiesContents->setObjectName(QStringLiteral("scrollAttributePropertiesContents"));
        scrollAttributePropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        scrollAttributePropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_93 = new QGridLayout(scrollAttributePropertiesContents);
        gridLayout_93->setObjectName(QStringLiteral("gridLayout_93"));
        gridLayout_93->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesAttribute = new AttributePropertiesDB(scrollAttributePropertiesContents);
        propertiesAttribute->setObjectName(QStringLiteral("propertiesAttribute"));

        gridLayout_93->addWidget(propertiesAttribute, 0, 0, 1, 1, Qt::AlignTop);

        scrollAttributeProperties->setWidget(scrollAttributePropertiesContents);

        gridLayout_5->addWidget(scrollAttributeProperties, 0, 1, 3, 1);

        gridAtribute = new QFrame(pageAttribute);
        gridAtribute->setObjectName(QStringLiteral("gridAtribute"));
        gridAtribute->setMaximumSize(QSize(180, 16777215));
        gridAttributeList = new QGridLayout(gridAtribute);
        gridAttributeList->setObjectName(QStringLiteral("gridAttributeList"));
        gridAttributeList->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(gridAtribute);
        label_24->setObjectName(QStringLiteral("label_24"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_24->setPalette(palette6);
        label_24->setFont(font);
        label_24->setLayoutDirection(Qt::LeftToRight);
        label_24->setAutoFillBackground(true);
        label_24->setScaledContents(false);
        label_24->setAlignment(Qt::AlignCenter);

        gridAttributeList->addWidget(label_24, 0, 0, 1, 1);

        listAttribute = new ListDB(gridAtribute);
        listAttribute->setObjectName(QStringLiteral("listAttribute"));

        gridAttributeList->addWidget(listAttribute, 1, 0, 1, 1);


        gridLayout_5->addWidget(gridAtribute, 0, 0, 3, 1);

        stackedDatabase->addWidget(pageAttribute);
        pageCondition = new QWidget();
        pageCondition->setObjectName(QStringLiteral("pageCondition"));
        gridLayout_6 = new QGridLayout(pageCondition);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        scrollConditionProperties = new QScrollArea(pageCondition);
        scrollConditionProperties->setObjectName(QStringLiteral("scrollConditionProperties"));
        scrollConditionProperties->setMaximumSize(QSize(600, 16777215));
        scrollConditionProperties->setWidgetResizable(true);
        scrollConditionPropertiesContents = new QWidget();
        scrollConditionPropertiesContents->setObjectName(QStringLiteral("scrollConditionPropertiesContents"));
        scrollConditionPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        scrollConditionPropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_94 = new QGridLayout(scrollConditionPropertiesContents);
        gridLayout_94->setObjectName(QStringLiteral("gridLayout_94"));
        gridLayout_94->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesCondition = new ConditionPropertiesDB(scrollConditionPropertiesContents);
        propertiesCondition->setObjectName(QStringLiteral("propertiesCondition"));

        gridLayout_94->addWidget(propertiesCondition, 0, 0, 1, 1, Qt::AlignTop);

        scrollConditionProperties->setWidget(scrollConditionPropertiesContents);

        gridLayout_6->addWidget(scrollConditionProperties, 0, 1, 3, 1);

        gridConditionList = new QFrame(pageCondition);
        gridConditionList->setObjectName(QStringLiteral("gridConditionList"));
        gridConditionList->setMaximumSize(QSize(180, 16777215));
        gridLayout_10 = new QGridLayout(gridConditionList);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(gridConditionList);
        label_25->setObjectName(QStringLiteral("label_25"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_25->setPalette(palette7);
        label_25->setFont(font);
        label_25->setLayoutDirection(Qt::LeftToRight);
        label_25->setAutoFillBackground(true);
        label_25->setScaledContents(false);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_25, 0, 0, 1, 1);

        listCondition = new ListDB(gridConditionList);
        listCondition->setObjectName(QStringLiteral("listCondition"));

        gridLayout_10->addWidget(listCondition, 1, 0, 1, 1);


        gridLayout_6->addWidget(gridConditionList, 0, 0, 3, 1);

        stackedDatabase->addWidget(pageCondition);
        pageFaceSet = new QWidget();
        pageFaceSet->setObjectName(QStringLiteral("pageFaceSet"));
        gridLayout_7 = new QGridLayout(pageFaceSet);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        scrollFaceSetProperties = new QScrollArea(pageFaceSet);
        scrollFaceSetProperties->setObjectName(QStringLiteral("scrollFaceSetProperties"));
        scrollFaceSetProperties->setMaximumSize(QSize(600, 16777215));
        scrollFaceSetProperties->setWidgetResizable(true);
        scrollFaceSetPropertiesContents = new QWidget();
        scrollFaceSetPropertiesContents->setObjectName(QStringLiteral("scrollFaceSetPropertiesContents"));
        scrollFaceSetPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        scrollFaceSetPropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_95 = new QGridLayout(scrollFaceSetPropertiesContents);
        gridLayout_95->setObjectName(QStringLiteral("gridLayout_95"));
        gridLayout_95->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesFaceSet = new FaceSetPropertiesDB(scrollFaceSetPropertiesContents);
        propertiesFaceSet->setObjectName(QStringLiteral("propertiesFaceSet"));

        gridLayout_95->addWidget(propertiesFaceSet, 0, 0, 1, 1, Qt::AlignTop);

        scrollFaceSetProperties->setWidget(scrollFaceSetPropertiesContents);

        gridLayout_7->addWidget(scrollFaceSetProperties, 0, 1, 3, 1);

        gridFaceSetList = new QFrame(pageFaceSet);
        gridFaceSetList->setObjectName(QStringLiteral("gridFaceSetList"));
        gridFaceSetList->setMaximumSize(QSize(180, 16777215));
        gridLayout_11 = new QGridLayout(gridFaceSetList);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(gridFaceSetList);
        label_26->setObjectName(QStringLiteral("label_26"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_26->setPalette(palette8);
        label_26->setFont(font);
        label_26->setLayoutDirection(Qt::LeftToRight);
        label_26->setAutoFillBackground(true);
        label_26->setScaledContents(false);
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_26, 0, 0, 1, 1);

        listFaceSet = new ListDB(gridFaceSetList);
        listFaceSet->setObjectName(QStringLiteral("listFaceSet"));

        gridLayout_11->addWidget(listFaceSet, 1, 0, 1, 1);


        gridLayout_7->addWidget(gridFaceSetList, 0, 0, 3, 1);

        stackedDatabase->addWidget(pageFaceSet);
        pageAnimationSet = new QWidget();
        pageAnimationSet->setObjectName(QStringLiteral("pageAnimationSet"));
        gridLayout_8 = new QGridLayout(pageAnimationSet);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        scrollAnimationSetProperties = new QScrollArea(pageAnimationSet);
        scrollAnimationSetProperties->setObjectName(QStringLiteral("scrollAnimationSetProperties"));
        scrollAnimationSetProperties->setMaximumSize(QSize(600, 16777215));
        scrollAnimationSetProperties->setWidgetResizable(true);
        scrollAnimationSetPropertiesContents = new QWidget();
        scrollAnimationSetPropertiesContents->setObjectName(QStringLiteral("scrollAnimationSetPropertiesContents"));
        scrollAnimationSetPropertiesContents->setGeometry(QRect(0, 0, 98, 28));
        scrollAnimationSetPropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_96 = new QGridLayout(scrollAnimationSetPropertiesContents);
        gridLayout_96->setObjectName(QStringLiteral("gridLayout_96"));
        gridLayout_96->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesAnimationSet = new FaceSetPropertiesDB(scrollAnimationSetPropertiesContents);
        propertiesAnimationSet->setObjectName(QStringLiteral("propertiesAnimationSet"));

        gridLayout_96->addWidget(propertiesAnimationSet, 0, 0, 1, 1, Qt::AlignTop);

        scrollAnimationSetProperties->setWidget(scrollAnimationSetPropertiesContents);

        gridLayout_8->addWidget(scrollAnimationSetProperties, 0, 2, 3, 1);

        gridAnimationSetList = new QFrame(pageAnimationSet);
        gridAnimationSetList->setObjectName(QStringLiteral("gridAnimationSetList"));
        gridAnimationSetList->setMaximumSize(QSize(180, 16777215));
        gridLayout_12 = new QGridLayout(gridAnimationSetList);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(gridAnimationSetList);
        label_28->setObjectName(QStringLiteral("label_28"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_28->setPalette(palette9);
        label_28->setFont(font);
        label_28->setLayoutDirection(Qt::LeftToRight);
        label_28->setAutoFillBackground(true);
        label_28->setScaledContents(false);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_28, 0, 0, 1, 1);

        listAnimationSet = new ListDB(gridAnimationSetList);
        listAnimationSet->setObjectName(QStringLiteral("listAnimationSet"));

        gridLayout_12->addWidget(listAnimationSet, 1, 0, 1, 1);


        gridLayout_8->addWidget(gridAnimationSetList, 0, 0, 3, 1);

        stackedDatabase->addWidget(pageAnimationSet);
        pageVocabulary = new QWidget();
        pageVocabulary->setObjectName(QStringLiteral("pageVocabulary"));
        gridLayout_29 = new QGridLayout(pageVocabulary);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        label_14 = new QLabel(pageVocabulary);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_29->addWidget(label_14, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageVocabulary);
        pageSystem = new QWidget();
        pageSystem->setObjectName(QStringLiteral("pageSystem"));
        gridLayout_30 = new QGridLayout(pageSystem);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        label_15 = new QLabel(pageSystem);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_30->addWidget(label_15, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageSystem);
        pageCommonEvents = new QWidget();
        pageCommonEvents->setObjectName(QStringLiteral("pageCommonEvents"));
        gridLayout_14 = new QGridLayout(pageCommonEvents);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridAnimationSetList_2 = new QFrame(pageCommonEvents);
        gridAnimationSetList_2->setObjectName(QStringLiteral("gridAnimationSetList_2"));
        gridAnimationSetList_2->setMaximumSize(QSize(180, 16777215));
        gridLayout_13 = new QGridLayout(gridAnimationSetList_2);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(gridAnimationSetList_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_29->setPalette(palette10);
        label_29->setFont(font);
        label_29->setLayoutDirection(Qt::LeftToRight);
        label_29->setAutoFillBackground(true);
        label_29->setScaledContents(false);
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_29, 0, 0, 1, 1);

        listCommonEvent = new ListDB(gridAnimationSetList_2);
        listCommonEvent->setObjectName(QStringLiteral("listCommonEvent"));

        gridLayout_13->addWidget(listCommonEvent, 1, 0, 1, 1);


        gridLayout_14->addWidget(gridAnimationSetList_2, 0, 0, 1, 1);

        scrollCommonEventProperties = new QScrollArea(pageCommonEvents);
        scrollCommonEventProperties->setObjectName(QStringLiteral("scrollCommonEventProperties"));
        scrollCommonEventProperties->setMaximumSize(QSize(600, 16777215));
        scrollCommonEventProperties->setWidgetResizable(true);
        scrollCommonEventPropertiesContents = new QWidget();
        scrollCommonEventPropertiesContents->setObjectName(QStringLiteral("scrollCommonEventPropertiesContents"));
        scrollCommonEventPropertiesContents->setGeometry(QRect(0, 0, 563, 404));
        scrollCommonEventPropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_97 = new QGridLayout(scrollCommonEventPropertiesContents);
        gridLayout_97->setObjectName(QStringLiteral("gridLayout_97"));
        gridLayout_97->setSizeConstraint(QLayout::SetNoConstraint);
        propertiesCommonEvent = new EventPage(scrollCommonEventPropertiesContents);
        propertiesCommonEvent->setObjectName(QStringLiteral("propertiesCommonEvent"));
        propertiesCommonEvent->setMinimumSize(QSize(0, 386));

        gridLayout_97->addWidget(propertiesCommonEvent, 0, 0, 1, 1);

        scrollCommonEventProperties->setWidget(scrollCommonEventPropertiesContents);

        gridLayout_14->addWidget(scrollCommonEventProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCommonEvents);

        gridLayout_2->addWidget(stackedDatabase, 2, 0, 1, 1);

        stackedMain->addWidget(pageDatabase);
        pageMapEditor = new QWidget();
        pageMapEditor->setObjectName(QStringLiteral("pageMapEditor"));
        gridLayout_33 = new QGridLayout(pageMapEditor);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(pageMapEditor);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_33->addWidget(label_18, 0, 0, 1, 1);

        stackedMain->addWidget(pageMapEditor);
        pageSceneEditor = new QWidget();
        pageSceneEditor->setObjectName(QStringLiteral("pageSceneEditor"));
        gridLayout_34 = new QGridLayout(pageSceneEditor);
        gridLayout_34->setObjectName(QStringLiteral("gridLayout_34"));
        gridLayout_34->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(pageSceneEditor);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_34->addWidget(label_19, 0, 0, 1, 1);

        stackedMain->addWidget(pageSceneEditor);
        pageMaterialManager = new QWidget();
        pageMaterialManager->setObjectName(QStringLiteral("pageMaterialManager"));
        gridLayout_32 = new QGridLayout(pageMaterialManager);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        gridLayout_32->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(pageMaterialManager);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_32->addWidget(label_17, 0, 0, 1, 1);

        stackedMain->addWidget(pageMaterialManager);

        gridLayout_47->addWidget(stackedMain, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 766, 21));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuMap = new QMenu(menubar);
        menuMap->setObjectName(QStringLiteral("menuMap"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::BottomToolBarArea);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuProject->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuMap->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menuProject->addAction(action_New_Project);
        menuProject->addAction(action_Open_Project);
        menuProject->addAction(action_Save_Project);
        menuProject->addSeparator();
        menuProject->addAction(action_Close_Project);
        menuProject->addSeparator();
        menuProject->addAction(action_Quit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSearch);
        menuEdit->addSeparator();
        menuEdit->addAction(actionProject_Preferences);
        menuMap->addAction(action_New_Map);
        menuMap->addAction(action_Open_Map);
        menuMap->addSeparator();
        menuMap->addAction(action_Save_Map);
        menuMap->addAction(actionSave_All);
        menuMap->addSeparator();
        menuMap->addAction(action_Revert);
        menuMap->addSeparator();
        menuMap->addAction(actionMap_Properties);
        menuView->addAction(actionM_ap_Editor);
        menuView->addAction(actionScene_Editor);
        menuView->addAction(actionDatabase_Manager);
        menuView->addAction(actionMaterial_Manager);
        menuView->addSeparator();
        menuView->addAction(actionGrid);
        menu_Help->addAction(actionAbout);
        menu_Help->addSeparator();
        menu_Help->addAction(action_Contents);
        toolBar->addSeparator();
        toolBar->addAction(actionM_ap_Editor);
        toolBar->addSeparator();
        toolBar->addAction(actionScene_Editor);
        toolBar->addSeparator();
        toolBar->addAction(actionDatabase_Manager);
        toolBar->addSeparator();
        toolBar->addAction(actionMaterial_Manager);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        stackedMain->setCurrentIndex(0);
        stackedDatabase->setCurrentIndex(12);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RPG Factory", 0));
        action_New_Project->setText(QApplication::translate("MainWindow", "&New Project", 0));
#ifndef QT_NO_TOOLTIP
        action_New_Project->setToolTip(QApplication::translate("MainWindow", "New Project", 0));
#endif // QT_NO_TOOLTIP
        action_New_Project->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        action_Open_Project->setText(QApplication::translate("MainWindow", "&Open Project", 0));
        action_Open_Project->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", 0));
        action_Close_Project->setText(QApplication::translate("MainWindow", "&Close Project", 0));
        action_Close_Project->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        action_Save_Project->setText(QApplication::translate("MainWindow", "&Save Project", 0));
        action_Save_Project->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "&Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "&Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionSearch->setText(QApplication::translate("MainWindow", "&Search", 0));
        actionSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionProject_Preferences->setText(QApplication::translate("MainWindow", "Pro&ject Preferences", 0));
        actionProject_Preferences->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        action_New_Map->setText(QApplication::translate("MainWindow", "&New Map", 0));
        action_New_Map->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Open_Map->setText(QApplication::translate("MainWindow", "&Open Map", 0));
        action_Open_Map->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_Save_Map->setText(QApplication::translate("MainWindow", "&Save Map", 0));
        action_Save_Map->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_All->setText(QApplication::translate("MainWindow", "Save &All", 0));
        actionSave_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        action_Revert->setText(QApplication::translate("MainWindow", "&Revert", 0));
        action_Revert->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionMap_Properties->setText(QApplication::translate("MainWindow", "Map Preferences", 0));
        actionMap_Properties->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        actionM_ap_Editor->setText(QApplication::translate("MainWindow", "M&ap Editor", 0));
        actionM_ap_Editor->setShortcut(QApplication::translate("MainWindow", "F6", 0));
        actionScene_Editor->setText(QApplication::translate("MainWindow", "&Scene Editor", 0));
        actionScene_Editor->setShortcut(QApplication::translate("MainWindow", "F7", 0));
        actionGrid->setText(QApplication::translate("MainWindow", "Grid", 0));
        actionGrid->setShortcut(QApplication::translate("MainWindow", "F10", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        action_Contents->setText(QApplication::translate("MainWindow", "&Contents", 0));
        action_Contents->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionMaterial_Manager->setText(QApplication::translate("MainWindow", "Material Manager", 0));
        actionMaterial_Manager->setShortcut(QApplication::translate("MainWindow", "F9", 0));
        actionDatabase_Manager->setText(QApplication::translate("MainWindow", "Database Manager", 0));
        actionDatabase_Manager->setShortcut(QApplication::translate("MainWindow", "F8", 0));
        pushCharacter->setText(QApplication::translate("MainWindow", "Characters", 0));
        pushCurve->setText(QApplication::translate("MainWindow", "Curve Sets", 0));
        pushSkill->setText(QApplication::translate("MainWindow", "Skills", 0));
        pushItem->setText(QApplication::translate("MainWindow", "Items", 0));
        pushAttribute->setText(QApplication::translate("MainWindow", "Attributes", 0));
        pushCondition->setText(QApplication::translate("MainWindow", "Conditions", 0));
        pushCharaSets->setText(QApplication::translate("MainWindow", "Chara Sets", 0));
        pushFaceSets->setText(QApplication::translate("MainWindow", "Face Sets", 0));
        pushAnimationSet->setText(QApplication::translate("MainWindow", "Animation Sets", 0));
        pushSystem->setText(QApplication::translate("MainWindow", "System", 0));
        pushVocabulary->setText(QApplication::translate("MainWindow", "Vocabulary", 0));
        pushActions->setText(QApplication::translate("MainWindow", "Actions", 0));
        pushCommonEvents->setText(QApplication::translate("MainWindow", "Common Events", 0));
        label_27->setText(QApplication::translate("MainWindow", "Characters", 0));
        label_8->setText(QApplication::translate("MainWindow", "Curve", 0));
        label_20->setText(QApplication::translate("MainWindow", "Chara Set", 0));
        label_21->setText(QApplication::translate("MainWindow", "Skills", 0));
        label_22->setText(QApplication::translate("MainWindow", "Actions", 0));
        comboActionType->clear();
        comboActionType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Map Actions", 0)
         << QApplication::translate("MainWindow", "Battle Actions", 0)
        );
        label_23->setText(QApplication::translate("MainWindow", "Items", 0));
        comboItemClass->clear();
        comboItemClass->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Key Items", 0)
         << QApplication::translate("MainWindow", "Equipment", 0)
         << QApplication::translate("MainWindow", "Medicine", 0)
         << QApplication::translate("MainWindow", "Book", 0)
         << QApplication::translate("MainWindow", "Material", 0)
         << QApplication::translate("MainWindow", "InvokeSkill", 0)
         << QApplication::translate("MainWindow", "Variable", 0)
         << QApplication::translate("MainWindow", "Common Event", 0)
        );
        label_24->setText(QApplication::translate("MainWindow", "Attributes", 0));
        label_25->setText(QApplication::translate("MainWindow", "Condition", 0));
        label_26->setText(QApplication::translate("MainWindow", "Face Set", 0));
        label_28->setText(QApplication::translate("MainWindow", "Animation Set", 0));
        label_14->setText(QApplication::translate("MainWindow", "Page Vocabulary", 0));
        label_15->setText(QApplication::translate("MainWindow", "Page System", 0));
        label_29->setText(QApplication::translate("MainWindow", "Common Events", 0));
        label_18->setText(QApplication::translate("MainWindow", "Page Map Editor", 0));
        label_19->setText(QApplication::translate("MainWindow", "Page Scene Editor", 0));
        label_17->setText(QApplication::translate("MainWindow", "Page Material", 0));
        menuProject->setTitle(QApplication::translate("MainWindow", "&Project", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuMap->setTitle(QApplication::translate("MainWindow", "&Map", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
