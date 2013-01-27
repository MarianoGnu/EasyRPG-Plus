/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 31. Dec 08:32:19 2012
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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <characterpropertiesdb.h>
#include <listdb.h>

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
    QPushButton *pushFaceSets;
    QPushButton *pushVocabulary;
    QPushButton *pushSystem;
    QPushButton *pushCommonEvents;
    QPushButton *pushAnimationSet;
    QPushButton *pushCharaSets;
    QPushButton *pushActions;
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
    QWidget *scrollCharacterPropertiesContents_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupCurveName;
    QGridLayout *gridLayout_36;
    QLineEdit *lineCurveName;
    QTabWidget *tabCurve;
    QWidget *tabCurveHp;
    QGridLayout *gridLayout_37;
    QGraphicsView *graphicsCurveHP;
    QWidget *tabCurveMp;
    QGridLayout *gridLayout_38;
    QGraphicsView *graphicsCurveMP;
    QWidget *tabCurveAttack;
    QGridLayout *gridLayout_39;
    QGraphicsView *graphicsCurveAttack;
    QWidget *tabCurveDefense;
    QGridLayout *gridLayout_40;
    QGraphicsView *graphicsCurveDefense;
    QWidget *tabCurveMind;
    QGridLayout *gridLayout_41;
    QGraphicsView *graphicsCurveMind;
    QWidget *tabCurveAgility;
    QGridLayout *gridLayout_42;
    QGraphicsView *graphicsCurveAgility;
    QWidget *tabCurveExp;
    QGridLayout *gridLayout_43;
    QGraphicsView *graphicsCurveExp;
    QGroupBox *groupCurveLvl;
    QGridLayout *gridLayout_44;
    QSpinBox *spinCurveLvl;
    QGroupBox *groupCurveValue;
    QGridLayout *gridLayout_45;
    QSpinBox *spinCurveValue;
    QGroupBox *groupCurveCreation;
    QGridLayout *gridLayout_46;
    QPushButton *pushCustomeCurve;
    QPushButton *pushCurveLow;
    QPushButton *pushNormalCurve;
    QPushButton *pushExcellentCurve;
    QPushButton *pushGeniusCurve;
    QWidget *pageCharaSet;
    QGridLayout *gridLayout_60;
    QFrame *gridCharaSetList;
    QGridLayout *gridLayout_48;
    QLabel *label_20;
    ListDB *listCharaSet;
    QScrollArea *scrollCharaSetProperties;
    QWidget *scrollCharacterPropertiesContents_3;
    QGridLayout *gridLayout_22;
    QGroupBox *groupCharaSetName;
    QGridLayout *gridLayout_49;
    QLineEdit *lineCharaSetName;
    QGroupBox *groupCharaSetAction;
    QGridLayout *gridLayout_50;
    QListWidget *listCharaSetAction;
    QGroupBox *groupCharaSetGraphic;
    QGridLayout *gridLayout_52;
    QGraphicsView *graphicsCharaSet;
    QPushButton *pushCharaSetChange;
    QWidget *pageSkill;
    QGridLayout *gridLayout_62;
    QFrame *gridSkillList;
    QGridLayout *gridLayout_51;
    QLabel *label_21;
    ListDB *listSkill;
    QScrollArea *scrollSkillProperties;
    QWidget *scrollSkillPropertiesContents;
    QGridLayout *gridLayout_55;
    QGroupBox *groupSkilltName;
    QGridLayout *gridLayout_56;
    QLineEdit *lineSkillName;
    QGroupBox *groupSkillCost;
    QGridLayout *gridLayout_54;
    QRadioButton *radioSkillFixedCost;
    QSpinBox *spinSkillFixedCost;
    QRadioButton *radioSkillPercentCost;
    QSpinBox *spinSkillPercentCost;
    QFrame *line;
    QGroupBox *groupSkillDesc;
    QGridLayout *gridLayout_57;
    QLineEdit *lineSkillDesc;
    QGroupBox *groupSkillType;
    QGridLayout *gridLayout_53;
    QComboBox *comboSkillType;
    QStackedWidget *stackedSkill;
    QWidget *pageSkillNormal;
    QGridLayout *gridLayout_61;
    QGroupBox *groupSkillDamage;
    QGridLayout *gridLayout_58;
    QSpinBox *spinSkillDamage;
    QGroupBox *groupSkillReduce;
    QGridLayout *gridLayout_63;
    QCheckBox *checkSkillReduceHp;
    QCheckBox *checkSkillReduceMind;
    QCheckBox *checkSkillReduceMp;
    QCheckBox *checkSkillReduceAgility;
    QCheckBox *checkSkillReduceAttack;
    QCheckBox *checkSkillAbsorbs;
    QCheckBox *checkSkillReduceDefense;
    QCheckBox *checkSkillIgnoreDefense;
    QGroupBox *groupSkillSuccessRate;
    QGridLayout *gridLayout_59;
    QSpinBox *spinSkillSuccessRate;
    QGroupBox *groupSkillMindChance;
    QGridLayout *gridLayout_64;
    QVBoxLayout *verticalSliderSkillHitChance;
    QSlider *sliderSkillHitChange;
    QLCDNumber *lcdSkillHitChance;
    QTableWidget *tableSkillA;
    QGroupBox *groupSkillMindChance_2;
    QGridLayout *gridLayout_65;
    QVBoxLayout *verticalSliderSkillMindChance;
    QSlider *sliderSkillMindChange;
    QLCDNumber *lcdSkillMindChance;
    QTableWidget *tableSkillB;
    QGroupBox *groupSkillVariance;
    QGridLayout *gridLayout_66;
    QVBoxLayout *verticalSliderSkillVariance;
    QSlider *sliderSkillVariance;
    QLCDNumber *lcdSkillVariance;
    QTableWidget *tableSkillC;
    QGroupBox *groupSkillConditionEffect;
    QGridLayout *gridLayout_67;
    QRadioButton *radioSkillCausesCondition;
    QRadioButton *radioSkillCuresCondition;
    QListWidget *listSkillConditionEffect;
    QGroupBox *groupSkillAttribute;
    QGridLayout *gridLayout_68;
    QCheckBox *checkSkillReduceAttributeDefense;
    QListWidget *listSkillAttribute;
    QGroupBox *groupSkillBatleAnimation;
    QGridLayout *gridLayout_69;
    QComboBox *comboSkillBattleAnimation;
    QGraphicsView *graphicsSkillBattleAnimation;
    QGroupBox *groupSkillCharacterAnimation;
    QGridLayout *gridLayout_70;
    QGraphicsView *graphicsSkillCharacterAnimation;
    QPushButton *pushSkillCharacterAnimation;
    QWidget *pageSkillTeleport;
    QGridLayout *gridLayout_72;
    QGroupBox *groupSkillTeleportSoundEffect;
    QGridLayout *gridLayout_71;
    QLineEdit *lineSkillTeleportSoundEffect;
    QToolButton *toolSkillTeleportSelectSound;
    QWidget *pageSkillEscape;
    QGridLayout *gridLayout_74;
    QGroupBox *groupSkillEscapeSoundEffect;
    QGridLayout *gridLayout_73;
    QLineEdit *lineSkillEscapeSoundEffect;
    QToolButton *toolSkillEscapeSelectSound;
    QWidget *pageSkillVariable;
    QGridLayout *gridLayout_79;
    QGroupBox *groupSkillVariableSoundEffect;
    QGridLayout *gridLayout_75;
    QLineEdit *lineSkillVariableSoundEffect;
    QToolButton *toolSkillVariableSelectSound;
    QGroupBox *groupSkillVariable;
    QGridLayout *gridLayout_76;
    QLineEdit *lineSkillVariableVar;
    QToolButton *toolSkillVariableSelectVar;
    QGroupBox *groupSkillVariableValue;
    QGridLayout *gridLayout_77;
    QLineEdit *lineSkillVariableValue;
    QToolButton *toolSkillVariableSelectValue;
    QGroupBox *groupSkillVariableAt;
    QGridLayout *gridLayout_78;
    QCheckBox *checkSkillVariableAtMap;
    QCheckBox *checkSkillVariableAtBattle;
    QWidget *pageSkillCommonEvent;
    QGridLayout *gridLayout_82;
    QGroupBox *groupSkillCommonEventSoundEffect;
    QGridLayout *gridLayout_80;
    QLineEdit *lineSkillCommonEventSoundEffect;
    QToolButton *toolSkillCommonEventSelectSound;
    QGroupBox *groupSkillSelectCommonEvent;
    QGridLayout *gridLayout_81;
    QComboBox *comboSkillCommonEvent;
    QGroupBox *groupSkillCommonEventAt;
    QGridLayout *gridLayout_83;
    QCheckBox *checkSkillCommonEventAtMap;
    QCheckBox *checkSkillCommonEventAtBattle;
    QWidget *pageActions;
    QGridLayout *gridLayout_114;
    QScrollArea *scrollActionsProperties;
    QWidget *scrollActionsPropertiesContents;
    QGridLayout *gridLayout_85;
    QGroupBox *groupActionsName;
    QGridLayout *gridLayout_86;
    QLineEdit *lineActionsName;
    QGroupBox *groupActionsConditions;
    QGridLayout *gridLayout_87;
    QListWidget *listActionsConditions;
    QGroupBox *groupActionsFinalEvent;
    QGridLayout *gridLayout_88;
    QComboBox *comboActionsFinalEvent;
    QGroupBox *groupActionsInitialEvent;
    QGridLayout *gridLayout_89;
    QComboBox *comboActionsInitialEvent;
    QGroupBox *groupActionsMovement;
    QGridLayout *gridLayout_90;
    QCheckBox *checkActionsMoveUp;
    QCheckBox *checkActionsMoveDown;
    QCheckBox *checkActionsMoveLeft;
    QCheckBox *checkActionsMoveRight;
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
    QGroupBox *groupItemsName;
    QGridLayout *gridLayout_93;
    QLineEdit *lineItemName;
    QGroupBox *groupItemDesc;
    QGridLayout *gridLayout_94;
    QLineEdit *lineItemDesc;
    QGroupBox *groupItemPrice;
    QGridLayout *gridLayout_95;
    QSpinBox *spinItemPrice;
    QStackedWidget *stackedItem;
    QWidget *pageItemKey;
    QGridLayout *gridLayout_107;
    QWidget *pageItemEquipment;
    QGridLayout *gridLayout_142;
    QGroupBox *groupEquipmentSlotA;
    QGridLayout *gridLayout_118;
    QComboBox *comboEquipmentSlotA;
    QGroupBox *groupEquipmentUsableBy;
    QGridLayout *gridLayout_120;
    QListWidget *listEquipmentUsableBy;
    QGroupBox *groupEquipmentValueChange;
    QGridLayout *gridLayout_125;
    QGroupBox *groupEquipmentAttack;
    QGridLayout *gridLayout_121;
    QSpinBox *spinEquipmentAttack;
    QGroupBox *groupEquipmentMind;
    QGridLayout *gridLayout_122;
    QSpinBox *spinEquipmentMind;
    QGroupBox *groupEquipmentDefense;
    QGridLayout *gridLayout_124;
    QSpinBox *spinEquipmentDefense;
    QGroupBox *groupEquipmentAgility;
    QGridLayout *gridLayout_123;
    QSpinBox *spinEquipmentAgility;
    QGroupBox *groupEquipmentAttibute;
    QGridLayout *gridLayout_126;
    QListWidget *listEquipmentAttibute;
    QGroupBox *groupEquipmentConditionEffect;
    QGridLayout *gridLayout_127;
    QRadioButton *radioEquipmentCausesCondition;
    QRadioButton *radioEquipmentCuresCondition;
    QListWidget *listEquipmentConditionEffect;
    QGroupBox *groupEquipmentConditionChance;
    QGridLayout *gridLayout_128;
    QSpinBox *spinEquipmentConditionChance;
    QGroupBox *groupEquipmentSkill;
    QGridLayout *gridLayout_129;
    QComboBox *comboEquipmentSkill;
    QStackedWidget *stackedEquipmentOptions;
    QWidget *pageWeaponOptions;
    QGridLayout *gridLayout_130;
    QGroupBox *groupWeaponOptions;
    QGridLayout *gridLayout_138;
    QGroupBox *groupWeaponSecuence;
    QGridLayout *gridLayout_133;
    QGraphicsView *graphicsWeaponActionSecuence;
    QPushButton *pushWeaponSecuence;
    QGroupBox *groupWeaponDamageOptions;
    QGridLayout *gridLayout_137;
    QGroupBox *groupWeaponMpCost;
    QGridLayout *gridLayout_134;
    QSpinBox *spinWeaponMpCost;
    QGroupBox *groupWeaponBaseDamage;
    QGridLayout *gridLayout_135;
    QSpinBox *spinWeaponBaseDamage;
    QGroupBox *groupWeaponCriticalChance;
    QGridLayout *gridLayout_136;
    QSpinBox *spinWeaponCriticalChance;
    QGroupBox *groupWeaponTargetAnimation;
    QGridLayout *gridLayout_132;
    QGraphicsView *graphicsWeaponTargetAnimation;
    QComboBox *comboWeaponTargetAnimation;
    QGroupBox *groupWeaponOptions_2;
    QGridLayout *gridLayout_139;
    QCheckBox *checkWeaponPreventiveAttack;
    QCheckBox *checkWeaponAttackTwise;
    QCheckBox *checkWeaponIgnoreEvasion;
    QCheckBox *checkWeaponCursed;
    QCheckBox *checkWeaponAttackAllEnemies;
    QWidget *pageArmor;
    QGridLayout *gridLayout_131;
    QGroupBox *groupArmorOptions;
    QGridLayout *gridLayout_141;
    QGroupBox *groupArmorOptions_2;
    QGridLayout *gridLayout_140;
    QCheckBox *checkArmorPreventCritical;
    QCheckBox *checkArmorEvadeAttack;
    QCheckBox *checkArmorConsumeHalfMp;
    QCheckBox *checkArmorPreventsDmgOnField;
    QCheckBox *checkArmorCursed;
    QGroupBox *groupEquipmentSlotB;
    QGridLayout *gridLayout_119;
    QComboBox *comboEquipmentSlotB;
    QWidget *pageItemMedicine;
    QGridLayout *gridLayout_104;
    QGroupBox *groupMedicineRecover;
    QGridLayout *gridLayout_102;
    QLabel *label_9;
    QSpinBox *spinMedicineRecoverHp;
    QLabel *label_25;
    QSpinBox *spinMedicineRecoverHpPercent;
    QLabel *label_24;
    QSpinBox *spinMedicineRecoverMp;
    QLabel *label_26;
    QSpinBox *spinMedicineRecoverMpPercent;
    QGroupBox *groupMedicineOptions;
    QGridLayout *gridLayout_100;
    QCheckBox *checkMedicineOnlyOnField;
    QCheckBox *checkMedicineOnlyOnFainted;
    QGroupBox *groupMedicineCausesCondition;
    QGridLayout *gridLayout_103;
    QListWidget *listMedicineCausesCondition;
    QGroupBox *groupMedicineUsableBy;
    QGridLayout *gridLayout_101;
    QListWidget *listMedicineUsableBy;
    QGroupBox *groupMedicineEffectRange;
    QGridLayout *gridLayout_99;
    QComboBox *comboMedicineEfectRange;
    QGroupBox *groupMedicineUseCount;
    QGridLayout *gridLayout_96;
    QComboBox *comboMedicineUseCount;
    QWidget *pageItemBook;
    QGridLayout *gridLayout_98;
    QGroupBox *groupBookUseCount;
    QGridLayout *gridLayout_97;
    QComboBox *comboBookUseCount;
    QGroupBox *groupBookSkill;
    QGridLayout *gridLayout_105;
    QComboBox *comboBookSkill;
    QGroupBox *groupBookLearnedBy;
    QGridLayout *gridLayout_106;
    QListWidget *listBookLearnedBy;
    QWidget *pageItemMaterial;
    QGridLayout *gridLayout_117;
    QGroupBox *groupMaterialAbilityValue;
    QGridLayout *gridLayout_116;
    QGroupBox *groupMaterialMaxHp;
    QGridLayout *gridLayout_109;
    QSpinBox *spinMaterialMaxHp;
    QGroupBox *groupMaterialMaxMp;
    QGridLayout *gridLayout_110;
    QSpinBox *spinMaterialMaxMp;
    QGroupBox *groupMaterialAgility;
    QGridLayout *gridLayout_113;
    QSpinBox *spinMaterialAgility;
    QGroupBox *groupMaterialMind;
    QGridLayout *gridLayout_115;
    QSpinBox *spinMaterialMind;
    QGroupBox *groupMaterialDefense;
    QGridLayout *gridLayout_112;
    QSpinBox *spinMaterialDefense;
    QGroupBox *groupMaterialAttack;
    QGridLayout *gridLayout_111;
    QSpinBox *spinMaterialAttack;
    QGroupBox *groupMaterialUsableBy;
    QGridLayout *gridLayout_108;
    QListWidget *listMaterialUsableBy;
    QWidget *pageItemInvokeSkill;
    QGridLayout *gridLayout_146;
    QGroupBox *groupMaterialUsableBy_2;
    QGridLayout *gridLayout_144;
    QListWidget *listMaterialUsableBy_2;
    QGroupBox *groupBookSkill_2;
    QGridLayout *gridLayout_145;
    QComboBox *comboBookSkill_2;
    QGroupBox *groupScrollMessage;
    QGridLayout *gridLayout_143;
    QRadioButton *radioScrollMessageItem;
    QRadioButton *radioScrollMessageSkill;
    QSpacerItem *verticalSpacer;
    QWidget *pageItemVariable;
    QGridLayout *gridLayout_149;
    QGroupBox *groupItemVarType;
    QGridLayout *gridLayout_148;
    QComboBox *comboItemVarType;
    QPushButton *pushItemVarEdit;
    QGroupBox *groupItemVarZone;
    QGridLayout *gridLayout_150;
    QComboBox *comboItemVarZone;
    QTreeWidget *treeItemVarLocation;
    QGroupBox *groupItemVarIndex;
    QGridLayout *gridLayout_147;
    QListWidget *listItemVarIndex;
    QGridLayout *gridItemVarFilter;
    QLabel *labelItemVarFilter;
    QLineEdit *lineItemVarFilter;
    QWidget *pageItemCommonEvent;
    QGridLayout *gridLayout_153;
    QGroupBox *groupItemEvEvent;
    QGridLayout *gridLayout_152;
    QComboBox *comboItemEvEvent;
    QGroupBox *groupItemEvZone;
    QGridLayout *gridLayout_151;
    QComboBox *comboItemEvZone;
    QFrame *gridItemList;
    QGridLayout *gridLayout_91;
    QLabel *label_23;
    QComboBox *comboItemClass;
    ListDB *listItem;
    QWidget *pageAttribute;
    QGridLayout *gridLayout_25;
    QLabel *label_10;
    QWidget *pageCondition;
    QGridLayout *gridLayout_26;
    QLabel *label_11;
    QWidget *pageFaceSet;
    QGridLayout *gridLayout_27;
    QLabel *label_12;
    QWidget *pageAnimationSet;
    QGridLayout *gridLayout_28;
    QLabel *label_13;
    QWidget *pageVocabulary;
    QGridLayout *gridLayout_29;
    QLabel *label_14;
    QWidget *pageSystem;
    QGridLayout *gridLayout_30;
    QLabel *label_15;
    QWidget *pageCommonEvents;
    QGridLayout *gridLayout_31;
    QLabel *label_16;
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
        MainWindow->resize(961, 572);
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
        pushFaceSets = new QPushButton(pageDatabase);
        pushFaceSets->setObjectName(QStringLiteral("pushFaceSets"));
        pushFaceSets->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushFaceSets, 0, 1, 1, 1);

        pushVocabulary = new QPushButton(pageDatabase);
        pushVocabulary->setObjectName(QStringLiteral("pushVocabulary"));
        pushVocabulary->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushVocabulary, 0, 4, 1, 1);

        pushSystem = new QPushButton(pageDatabase);
        pushSystem->setObjectName(QStringLiteral("pushSystem"));
        pushSystem->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushSystem, 0, 5, 1, 1);

        pushCommonEvents = new QPushButton(pageDatabase);
        pushCommonEvents->setObjectName(QStringLiteral("pushCommonEvents"));
        pushCommonEvents->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushCommonEvents, 0, 7, 1, 1);

        pushAnimationSet = new QPushButton(pageDatabase);
        pushAnimationSet->setObjectName(QStringLiteral("pushAnimationSet"));
        pushAnimationSet->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushAnimationSet, 0, 2, 1, 1);

        pushCharaSets = new QPushButton(pageDatabase);
        pushCharaSets->setObjectName(QStringLiteral("pushCharaSets"));
        pushCharaSets->setCheckable(true);

        gridDatabaseButtons2->addWidget(pushCharaSets, 0, 3, 1, 1);

        pushActions = new QPushButton(pageDatabase);
        pushActions->setObjectName(QStringLiteral("pushActions"));
        pushActions->setCheckable(true);
        pushActions->setChecked(false);

        gridDatabaseButtons2->addWidget(pushActions, 0, 6, 1, 1);


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
        gridCharacterList->setMinimumSize(QSize(180, 0));
        gridCharacterList->setMaximumSize(QSize(180, 16777215));
        gridLayout_154 = new QGridLayout(gridCharacterList);
        gridLayout_154->setObjectName(QStringLiteral("gridLayout_154"));
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
        scrollCharacterProperties->setMaximumSize(QSize(520, 16777215));
        scrollCharacterProperties->setWidgetResizable(true);
        scrollCharacterPropertiesContents = new QWidget();
        scrollCharacterPropertiesContents->setObjectName(QStringLiteral("scrollCharacterPropertiesContents"));
        scrollCharacterPropertiesContents->setGeometry(QRect(0, 0, 518, 404));
        gridLayout_3 = new QGridLayout(scrollCharacterPropertiesContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        propertiesCharacter = new CharacterPropertiesDB(scrollCharacterPropertiesContents);
        propertiesCharacter->setObjectName(QStringLiteral("propertiesCharacter"));

        gridLayout_3->addWidget(propertiesCharacter, 0, 0, 1, 1);

        scrollCharacterProperties->setWidget(scrollCharacterPropertiesContents);

        gridLayout_9->addWidget(scrollCharacterProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCharacter);
        pageCurve = new QWidget();
        pageCurve->setObjectName(QStringLiteral("pageCurve"));
        gridLayout = new QGridLayout(pageCurve);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridCurveList = new QFrame(pageCurve);
        gridCurveList->setObjectName(QStringLiteral("gridCurveList"));
        gridCurveList->setMinimumSize(QSize(180, 0));
        gridCurveList->setMaximumSize(QSize(180, 16777215));
        gridLayout_35 = new QGridLayout(gridCurveList);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
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
        scrollCurveProperties->setMaximumSize(QSize(520, 16777215));
        scrollCurveProperties->setWidgetResizable(true);
        scrollCharacterPropertiesContents_2 = new QWidget();
        scrollCharacterPropertiesContents_2->setObjectName(QStringLiteral("scrollCharacterPropertiesContents_2"));
        scrollCharacterPropertiesContents_2->setGeometry(QRect(0, 0, 501, 492));
        gridLayout_4 = new QGridLayout(scrollCharacterPropertiesContents_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupCurveName = new QGroupBox(scrollCharacterPropertiesContents_2);
        groupCurveName->setObjectName(QStringLiteral("groupCurveName"));
        groupCurveName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupCurveName->sizePolicy().hasHeightForWidth());
        groupCurveName->setSizePolicy(sizePolicy);
        groupCurveName->setMinimumSize(QSize(0, 50));
        groupCurveName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_36 = new QGridLayout(groupCurveName);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        lineCurveName = new QLineEdit(groupCurveName);
        lineCurveName->setObjectName(QStringLiteral("lineCurveName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineCurveName->sizePolicy().hasHeightForWidth());
        lineCurveName->setSizePolicy(sizePolicy1);
        lineCurveName->setMinimumSize(QSize(0, 0));

        gridLayout_36->addWidget(lineCurveName, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupCurveName, 0, 0, 1, 2);

        tabCurve = new QTabWidget(scrollCharacterPropertiesContents_2);
        tabCurve->setObjectName(QStringLiteral("tabCurve"));
        tabCurve->setTabPosition(QTabWidget::North);
        tabCurve->setTabShape(QTabWidget::Rounded);
        tabCurveHp = new QWidget();
        tabCurveHp->setObjectName(QStringLiteral("tabCurveHp"));
        gridLayout_37 = new QGridLayout(tabCurveHp);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        graphicsCurveHP = new QGraphicsView(tabCurveHp);
        graphicsCurveHP->setObjectName(QStringLiteral("graphicsCurveHP"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphicsCurveHP->sizePolicy().hasHeightForWidth());
        graphicsCurveHP->setSizePolicy(sizePolicy2);

        gridLayout_37->addWidget(graphicsCurveHP, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveHp, QString());
        tabCurveMp = new QWidget();
        tabCurveMp->setObjectName(QStringLiteral("tabCurveMp"));
        gridLayout_38 = new QGridLayout(tabCurveMp);
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        graphicsCurveMP = new QGraphicsView(tabCurveMp);
        graphicsCurveMP->setObjectName(QStringLiteral("graphicsCurveMP"));
        sizePolicy2.setHeightForWidth(graphicsCurveMP->sizePolicy().hasHeightForWidth());
        graphicsCurveMP->setSizePolicy(sizePolicy2);

        gridLayout_38->addWidget(graphicsCurveMP, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveMp, QString());
        tabCurveAttack = new QWidget();
        tabCurveAttack->setObjectName(QStringLiteral("tabCurveAttack"));
        gridLayout_39 = new QGridLayout(tabCurveAttack);
        gridLayout_39->setObjectName(QStringLiteral("gridLayout_39"));
        graphicsCurveAttack = new QGraphicsView(tabCurveAttack);
        graphicsCurveAttack->setObjectName(QStringLiteral("graphicsCurveAttack"));
        sizePolicy2.setHeightForWidth(graphicsCurveAttack->sizePolicy().hasHeightForWidth());
        graphicsCurveAttack->setSizePolicy(sizePolicy2);

        gridLayout_39->addWidget(graphicsCurveAttack, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveAttack, QString());
        tabCurveDefense = new QWidget();
        tabCurveDefense->setObjectName(QStringLiteral("tabCurveDefense"));
        gridLayout_40 = new QGridLayout(tabCurveDefense);
        gridLayout_40->setObjectName(QStringLiteral("gridLayout_40"));
        graphicsCurveDefense = new QGraphicsView(tabCurveDefense);
        graphicsCurveDefense->setObjectName(QStringLiteral("graphicsCurveDefense"));
        sizePolicy2.setHeightForWidth(graphicsCurveDefense->sizePolicy().hasHeightForWidth());
        graphicsCurveDefense->setSizePolicy(sizePolicy2);

        gridLayout_40->addWidget(graphicsCurveDefense, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveDefense, QString());
        tabCurveMind = new QWidget();
        tabCurveMind->setObjectName(QStringLiteral("tabCurveMind"));
        gridLayout_41 = new QGridLayout(tabCurveMind);
        gridLayout_41->setObjectName(QStringLiteral("gridLayout_41"));
        graphicsCurveMind = new QGraphicsView(tabCurveMind);
        graphicsCurveMind->setObjectName(QStringLiteral("graphicsCurveMind"));
        sizePolicy2.setHeightForWidth(graphicsCurveMind->sizePolicy().hasHeightForWidth());
        graphicsCurveMind->setSizePolicy(sizePolicy2);

        gridLayout_41->addWidget(graphicsCurveMind, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveMind, QString());
        tabCurveAgility = new QWidget();
        tabCurveAgility->setObjectName(QStringLiteral("tabCurveAgility"));
        gridLayout_42 = new QGridLayout(tabCurveAgility);
        gridLayout_42->setObjectName(QStringLiteral("gridLayout_42"));
        graphicsCurveAgility = new QGraphicsView(tabCurveAgility);
        graphicsCurveAgility->setObjectName(QStringLiteral("graphicsCurveAgility"));
        sizePolicy2.setHeightForWidth(graphicsCurveAgility->sizePolicy().hasHeightForWidth());
        graphicsCurveAgility->setSizePolicy(sizePolicy2);

        gridLayout_42->addWidget(graphicsCurveAgility, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveAgility, QString());
        tabCurveExp = new QWidget();
        tabCurveExp->setObjectName(QStringLiteral("tabCurveExp"));
        gridLayout_43 = new QGridLayout(tabCurveExp);
        gridLayout_43->setObjectName(QStringLiteral("gridLayout_43"));
        graphicsCurveExp = new QGraphicsView(tabCurveExp);
        graphicsCurveExp->setObjectName(QStringLiteral("graphicsCurveExp"));
        sizePolicy2.setHeightForWidth(graphicsCurveExp->sizePolicy().hasHeightForWidth());
        graphicsCurveExp->setSizePolicy(sizePolicy2);

        gridLayout_43->addWidget(graphicsCurveExp, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveExp, QString());

        gridLayout_4->addWidget(tabCurve, 2, 0, 1, 2);

        groupCurveLvl = new QGroupBox(scrollCharacterPropertiesContents_2);
        groupCurveLvl->setObjectName(QStringLiteral("groupCurveLvl"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupCurveLvl->sizePolicy().hasHeightForWidth());
        groupCurveLvl->setSizePolicy(sizePolicy3);
        groupCurveLvl->setMinimumSize(QSize(0, 55));
        groupCurveLvl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_44 = new QGridLayout(groupCurveLvl);
        gridLayout_44->setObjectName(QStringLiteral("gridLayout_44"));
        spinCurveLvl = new QSpinBox(groupCurveLvl);
        spinCurveLvl->setObjectName(QStringLiteral("spinCurveLvl"));
        spinCurveLvl->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinCurveLvl->setAccelerated(false);
        spinCurveLvl->setMinimum(1);

        gridLayout_44->addWidget(spinCurveLvl, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupCurveLvl, 3, 0, 1, 1);

        groupCurveValue = new QGroupBox(scrollCharacterPropertiesContents_2);
        groupCurveValue->setObjectName(QStringLiteral("groupCurveValue"));
        sizePolicy3.setHeightForWidth(groupCurveValue->sizePolicy().hasHeightForWidth());
        groupCurveValue->setSizePolicy(sizePolicy3);
        groupCurveValue->setMinimumSize(QSize(0, 55));
        groupCurveValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_45 = new QGridLayout(groupCurveValue);
        gridLayout_45->setObjectName(QStringLiteral("gridLayout_45"));
        spinCurveValue = new QSpinBox(groupCurveValue);
        spinCurveValue->setObjectName(QStringLiteral("spinCurveValue"));
        spinCurveValue->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinCurveValue->setAccelerated(false);
        spinCurveValue->setMinimum(1);

        gridLayout_45->addWidget(spinCurveValue, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupCurveValue, 3, 1, 1, 1);

        groupCurveCreation = new QGroupBox(scrollCharacterPropertiesContents_2);
        groupCurveCreation->setObjectName(QStringLiteral("groupCurveCreation"));
        sizePolicy.setHeightForWidth(groupCurveCreation->sizePolicy().hasHeightForWidth());
        groupCurveCreation->setSizePolicy(sizePolicy);
        groupCurveCreation->setMinimumSize(QSize(40, 0));
        gridLayout_46 = new QGridLayout(groupCurveCreation);
        gridLayout_46->setObjectName(QStringLiteral("gridLayout_46"));
        pushCustomeCurve = new QPushButton(groupCurveCreation);
        pushCustomeCurve->setObjectName(QStringLiteral("pushCustomeCurve"));

        gridLayout_46->addWidget(pushCustomeCurve, 0, 0, 1, 2);

        pushCurveLow = new QPushButton(groupCurveCreation);
        pushCurveLow->setObjectName(QStringLiteral("pushCurveLow"));

        gridLayout_46->addWidget(pushCurveLow, 1, 0, 1, 1);

        pushNormalCurve = new QPushButton(groupCurveCreation);
        pushNormalCurve->setObjectName(QStringLiteral("pushNormalCurve"));

        gridLayout_46->addWidget(pushNormalCurve, 1, 1, 1, 1);

        pushExcellentCurve = new QPushButton(groupCurveCreation);
        pushExcellentCurve->setObjectName(QStringLiteral("pushExcellentCurve"));

        gridLayout_46->addWidget(pushExcellentCurve, 2, 0, 1, 1);

        pushGeniusCurve = new QPushButton(groupCurveCreation);
        pushGeniusCurve->setObjectName(QStringLiteral("pushGeniusCurve"));

        gridLayout_46->addWidget(pushGeniusCurve, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupCurveCreation, 4, 0, 1, 2);

        scrollCurveProperties->setWidget(scrollCharacterPropertiesContents_2);

        gridLayout->addWidget(scrollCurveProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCurve);
        pageCharaSet = new QWidget();
        pageCharaSet->setObjectName(QStringLiteral("pageCharaSet"));
        gridLayout_60 = new QGridLayout(pageCharaSet);
        gridLayout_60->setObjectName(QStringLiteral("gridLayout_60"));
        gridLayout_60->setContentsMargins(9, 9, 9, 9);
        gridCharaSetList = new QFrame(pageCharaSet);
        gridCharaSetList->setObjectName(QStringLiteral("gridCharaSetList"));
        gridCharaSetList->setMinimumSize(QSize(180, 0));
        gridCharaSetList->setMaximumSize(QSize(180, 16777215));
        gridLayout_48 = new QGridLayout(gridCharaSetList);
        gridLayout_48->setObjectName(QStringLiteral("gridLayout_48"));
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
        scrollCharaSetProperties->setMaximumSize(QSize(520, 16777215));
        scrollCharaSetProperties->setWidgetResizable(true);
        scrollCharaSetProperties->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollCharacterPropertiesContents_3 = new QWidget();
        scrollCharacterPropertiesContents_3->setObjectName(QStringLiteral("scrollCharacterPropertiesContents_3"));
        scrollCharacterPropertiesContents_3->setGeometry(QRect(0, 0, 518, 404));
        gridLayout_22 = new QGridLayout(scrollCharacterPropertiesContents_3);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        groupCharaSetName = new QGroupBox(scrollCharacterPropertiesContents_3);
        groupCharaSetName->setObjectName(QStringLiteral("groupCharaSetName"));
        groupCharaSetName->setEnabled(true);
        sizePolicy.setHeightForWidth(groupCharaSetName->sizePolicy().hasHeightForWidth());
        groupCharaSetName->setSizePolicy(sizePolicy);
        groupCharaSetName->setMinimumSize(QSize(0, 50));
        groupCharaSetName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_49 = new QGridLayout(groupCharaSetName);
        gridLayout_49->setObjectName(QStringLiteral("gridLayout_49"));
        lineCharaSetName = new QLineEdit(groupCharaSetName);
        lineCharaSetName->setObjectName(QStringLiteral("lineCharaSetName"));
        sizePolicy1.setHeightForWidth(lineCharaSetName->sizePolicy().hasHeightForWidth());
        lineCharaSetName->setSizePolicy(sizePolicy1);
        lineCharaSetName->setMinimumSize(QSize(0, 0));

        gridLayout_49->addWidget(lineCharaSetName, 0, 0, 1, 1);


        gridLayout_22->addWidget(groupCharaSetName, 0, 0, 1, 2);

        groupCharaSetAction = new QGroupBox(scrollCharacterPropertiesContents_3);
        groupCharaSetAction->setObjectName(QStringLiteral("groupCharaSetAction"));
        groupCharaSetAction->setMinimumSize(QSize(180, 0));
        groupCharaSetAction->setMaximumSize(QSize(180, 800));
        gridLayout_50 = new QGridLayout(groupCharaSetAction);
        gridLayout_50->setObjectName(QStringLiteral("gridLayout_50"));
        listCharaSetAction = new QListWidget(groupCharaSetAction);
        new QListWidgetItem(listCharaSetAction);
        new QListWidgetItem(listCharaSetAction);
        new QListWidgetItem(listCharaSetAction);
        new QListWidgetItem(listCharaSetAction);
        new QListWidgetItem(listCharaSetAction);
        listCharaSetAction->setObjectName(QStringLiteral("listCharaSetAction"));
        listCharaSetAction->setMinimumSize(QSize(162, 0));
        listCharaSetAction->setMaximumSize(QSize(162, 16777215));

        gridLayout_50->addWidget(listCharaSetAction, 0, 0, 1, 1);


        gridLayout_22->addWidget(groupCharaSetAction, 1, 0, 1, 1);

        groupCharaSetGraphic = new QGroupBox(scrollCharacterPropertiesContents_3);
        groupCharaSetGraphic->setObjectName(QStringLiteral("groupCharaSetGraphic"));
        groupCharaSetGraphic->setMaximumSize(QSize(16777215, 800));
        gridLayout_52 = new QGridLayout(groupCharaSetGraphic);
        gridLayout_52->setObjectName(QStringLiteral("gridLayout_52"));
        graphicsCharaSet = new QGraphicsView(groupCharaSetGraphic);
        graphicsCharaSet->setObjectName(QStringLiteral("graphicsCharaSet"));
        graphicsCharaSet->setMinimumSize(QSize(180, 160));
        graphicsCharaSet->setMaximumSize(QSize(180, 160));

        gridLayout_52->addWidget(graphicsCharaSet, 0, 1, 1, 1);

        pushCharaSetChange = new QPushButton(groupCharaSetGraphic);
        pushCharaSetChange->setObjectName(QStringLiteral("pushCharaSetChange"));

        gridLayout_52->addWidget(pushCharaSetChange, 1, 1, 1, 1);


        gridLayout_22->addWidget(groupCharaSetGraphic, 1, 1, 1, 1);

        scrollCharaSetProperties->setWidget(scrollCharacterPropertiesContents_3);

        gridLayout_60->addWidget(scrollCharaSetProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageCharaSet);
        pageSkill = new QWidget();
        pageSkill->setObjectName(QStringLiteral("pageSkill"));
        gridLayout_62 = new QGridLayout(pageSkill);
        gridLayout_62->setObjectName(QStringLiteral("gridLayout_62"));
        gridLayout_62->setContentsMargins(9, 9, 9, 9);
        gridSkillList = new QFrame(pageSkill);
        gridSkillList->setObjectName(QStringLiteral("gridSkillList"));
        gridSkillList->setMinimumSize(QSize(180, 0));
        gridSkillList->setMaximumSize(QSize(180, 16777215));
        gridLayout_51 = new QGridLayout(gridSkillList);
        gridLayout_51->setObjectName(QStringLiteral("gridLayout_51"));
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
        scrollSkillProperties->setMaximumSize(QSize(520, 16777215));
        scrollSkillProperties->setWidgetResizable(true);
        scrollSkillPropertiesContents = new QWidget();
        scrollSkillPropertiesContents->setObjectName(QStringLiteral("scrollSkillPropertiesContents"));
        scrollSkillPropertiesContents->setGeometry(QRect(0, 0, 501, 1015));
        scrollSkillPropertiesContents->setMaximumSize(QSize(16777215, 1019));
        gridLayout_55 = new QGridLayout(scrollSkillPropertiesContents);
        gridLayout_55->setObjectName(QStringLiteral("gridLayout_55"));
        gridLayout_55->setSizeConstraint(QLayout::SetNoConstraint);
        groupSkilltName = new QGroupBox(scrollSkillPropertiesContents);
        groupSkilltName->setObjectName(QStringLiteral("groupSkilltName"));
        groupSkilltName->setEnabled(true);
        sizePolicy.setHeightForWidth(groupSkilltName->sizePolicy().hasHeightForWidth());
        groupSkilltName->setSizePolicy(sizePolicy);
        groupSkilltName->setMinimumSize(QSize(0, 50));
        groupSkilltName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_56 = new QGridLayout(groupSkilltName);
        gridLayout_56->setObjectName(QStringLiteral("gridLayout_56"));
        lineSkillName = new QLineEdit(groupSkilltName);
        lineSkillName->setObjectName(QStringLiteral("lineSkillName"));
        sizePolicy1.setHeightForWidth(lineSkillName->sizePolicy().hasHeightForWidth());
        lineSkillName->setSizePolicy(sizePolicy1);
        lineSkillName->setMinimumSize(QSize(0, 0));

        gridLayout_56->addWidget(lineSkillName, 0, 0, 1, 1);


        gridLayout_55->addWidget(groupSkilltName, 0, 0, 1, 2);

        groupSkillCost = new QGroupBox(scrollSkillPropertiesContents);
        groupSkillCost->setObjectName(QStringLiteral("groupSkillCost"));
        gridLayout_54 = new QGridLayout(groupSkillCost);
        gridLayout_54->setObjectName(QStringLiteral("gridLayout_54"));
        radioSkillFixedCost = new QRadioButton(groupSkillCost);
        radioSkillFixedCost->setObjectName(QStringLiteral("radioSkillFixedCost"));
        radioSkillFixedCost->setChecked(true);

        gridLayout_54->addWidget(radioSkillFixedCost, 0, 0, 1, 1);

        spinSkillFixedCost = new QSpinBox(groupSkillCost);
        spinSkillFixedCost->setObjectName(QStringLiteral("spinSkillFixedCost"));

        gridLayout_54->addWidget(spinSkillFixedCost, 0, 1, 1, 1);

        radioSkillPercentCost = new QRadioButton(groupSkillCost);
        radioSkillPercentCost->setObjectName(QStringLiteral("radioSkillPercentCost"));

        gridLayout_54->addWidget(radioSkillPercentCost, 0, 3, 1, 1);

        spinSkillPercentCost = new QSpinBox(groupSkillCost);
        spinSkillPercentCost->setObjectName(QStringLiteral("spinSkillPercentCost"));
        spinSkillPercentCost->setEnabled(false);
        spinSkillPercentCost->setMaximum(100);

        gridLayout_54->addWidget(spinSkillPercentCost, 0, 4, 1, 1);

        line = new QFrame(groupSkillCost);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_54->addWidget(line, 0, 2, 1, 1);


        gridLayout_55->addWidget(groupSkillCost, 1, 0, 1, 2);

        groupSkillDesc = new QGroupBox(scrollSkillPropertiesContents);
        groupSkillDesc->setObjectName(QStringLiteral("groupSkillDesc"));
        gridLayout_57 = new QGridLayout(groupSkillDesc);
        gridLayout_57->setObjectName(QStringLiteral("gridLayout_57"));
        lineSkillDesc = new QLineEdit(groupSkillDesc);
        lineSkillDesc->setObjectName(QStringLiteral("lineSkillDesc"));

        gridLayout_57->addWidget(lineSkillDesc, 0, 0, 1, 1);


        gridLayout_55->addWidget(groupSkillDesc, 2, 0, 1, 1);

        groupSkillType = new QGroupBox(scrollSkillPropertiesContents);
        groupSkillType->setObjectName(QStringLiteral("groupSkillType"));
        groupSkillType->setMinimumSize(QSize(200, 0));
        groupSkillType->setMaximumSize(QSize(16777215, 55));
        gridLayout_53 = new QGridLayout(groupSkillType);
        gridLayout_53->setObjectName(QStringLiteral("gridLayout_53"));
        comboSkillType = new QComboBox(groupSkillType);
        comboSkillType->setObjectName(QStringLiteral("comboSkillType"));

        gridLayout_53->addWidget(comboSkillType, 0, 0, 1, 1);


        gridLayout_55->addWidget(groupSkillType, 2, 1, 1, 1);

        stackedSkill = new QStackedWidget(scrollSkillPropertiesContents);
        stackedSkill->setObjectName(QStringLiteral("stackedSkill"));
        pageSkillNormal = new QWidget();
        pageSkillNormal->setObjectName(QStringLiteral("pageSkillNormal"));
        gridLayout_61 = new QGridLayout(pageSkillNormal);
        gridLayout_61->setObjectName(QStringLiteral("gridLayout_61"));
        gridLayout_61->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_61->setContentsMargins(0, 0, 0, 0);
        groupSkillDamage = new QGroupBox(pageSkillNormal);
        groupSkillDamage->setObjectName(QStringLiteral("groupSkillDamage"));
        gridLayout_58 = new QGridLayout(groupSkillDamage);
        gridLayout_58->setObjectName(QStringLiteral("gridLayout_58"));
        spinSkillDamage = new QSpinBox(groupSkillDamage);
        spinSkillDamage->setObjectName(QStringLiteral("spinSkillDamage"));
        spinSkillDamage->setMaximum(9999);

        gridLayout_58->addWidget(spinSkillDamage, 0, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillDamage, 0, 0, 1, 1);

        groupSkillReduce = new QGroupBox(pageSkillNormal);
        groupSkillReduce->setObjectName(QStringLiteral("groupSkillReduce"));
        gridLayout_63 = new QGridLayout(groupSkillReduce);
        gridLayout_63->setObjectName(QStringLiteral("gridLayout_63"));
        checkSkillReduceHp = new QCheckBox(groupSkillReduce);
        checkSkillReduceHp->setObjectName(QStringLiteral("checkSkillReduceHp"));

        gridLayout_63->addWidget(checkSkillReduceHp, 0, 0, 1, 1);

        checkSkillReduceMind = new QCheckBox(groupSkillReduce);
        checkSkillReduceMind->setObjectName(QStringLiteral("checkSkillReduceMind"));

        gridLayout_63->addWidget(checkSkillReduceMind, 0, 1, 1, 1);

        checkSkillReduceMp = new QCheckBox(groupSkillReduce);
        checkSkillReduceMp->setObjectName(QStringLiteral("checkSkillReduceMp"));

        gridLayout_63->addWidget(checkSkillReduceMp, 1, 0, 1, 1);

        checkSkillReduceAgility = new QCheckBox(groupSkillReduce);
        checkSkillReduceAgility->setObjectName(QStringLiteral("checkSkillReduceAgility"));

        gridLayout_63->addWidget(checkSkillReduceAgility, 1, 1, 1, 1);

        checkSkillReduceAttack = new QCheckBox(groupSkillReduce);
        checkSkillReduceAttack->setObjectName(QStringLiteral("checkSkillReduceAttack"));

        gridLayout_63->addWidget(checkSkillReduceAttack, 2, 0, 1, 1);

        checkSkillAbsorbs = new QCheckBox(groupSkillReduce);
        checkSkillAbsorbs->setObjectName(QStringLiteral("checkSkillAbsorbs"));

        gridLayout_63->addWidget(checkSkillAbsorbs, 2, 1, 1, 1);

        checkSkillReduceDefense = new QCheckBox(groupSkillReduce);
        checkSkillReduceDefense->setObjectName(QStringLiteral("checkSkillReduceDefense"));

        gridLayout_63->addWidget(checkSkillReduceDefense, 3, 0, 1, 1);

        checkSkillIgnoreDefense = new QCheckBox(groupSkillReduce);
        checkSkillIgnoreDefense->setObjectName(QStringLiteral("checkSkillIgnoreDefense"));

        gridLayout_63->addWidget(checkSkillIgnoreDefense, 3, 1, 1, 1);


        gridLayout_61->addWidget(groupSkillReduce, 0, 1, 2, 1);

        groupSkillSuccessRate = new QGroupBox(pageSkillNormal);
        groupSkillSuccessRate->setObjectName(QStringLiteral("groupSkillSuccessRate"));
        gridLayout_59 = new QGridLayout(groupSkillSuccessRate);
        gridLayout_59->setObjectName(QStringLiteral("gridLayout_59"));
        spinSkillSuccessRate = new QSpinBox(groupSkillSuccessRate);
        spinSkillSuccessRate->setObjectName(QStringLiteral("spinSkillSuccessRate"));
        spinSkillSuccessRate->setMaximum(100);

        gridLayout_59->addWidget(spinSkillSuccessRate, 0, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillSuccessRate, 1, 0, 1, 1);

        groupSkillMindChance = new QGroupBox(pageSkillNormal);
        groupSkillMindChance->setObjectName(QStringLiteral("groupSkillMindChance"));
        groupSkillMindChance->setMaximumSize(QSize(16777215, 90));
        gridLayout_64 = new QGridLayout(groupSkillMindChance);
        gridLayout_64->setObjectName(QStringLiteral("gridLayout_64"));
        verticalSliderSkillHitChance = new QVBoxLayout();
        verticalSliderSkillHitChance->setObjectName(QStringLiteral("verticalSliderSkillHitChance"));
        verticalSliderSkillHitChance->setContentsMargins(10, -1, 16, -1);
        sliderSkillHitChange = new QSlider(groupSkillMindChance);
        sliderSkillHitChange->setObjectName(QStringLiteral("sliderSkillHitChange"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(15);
        sizePolicy4.setHeightForWidth(sliderSkillHitChange->sizePolicy().hasHeightForWidth());
        sliderSkillHitChange->setSizePolicy(sizePolicy4);
        sliderSkillHitChange->setMinimumSize(QSize(330, 0));
        sliderSkillHitChange->setMaximumSize(QSize(330, 16777215));
        sliderSkillHitChange->setLayoutDirection(Qt::LeftToRight);
        sliderSkillHitChange->setMaximum(10);
        sliderSkillHitChange->setPageStep(1);
        sliderSkillHitChange->setValue(0);
        sliderSkillHitChange->setOrientation(Qt::Horizontal);
        sliderSkillHitChange->setTickPosition(QSlider::TicksBelow);

        verticalSliderSkillHitChance->addWidget(sliderSkillHitChange);


        gridLayout_64->addLayout(verticalSliderSkillHitChance, 0, 0, 1, 1);

        lcdSkillHitChance = new QLCDNumber(groupSkillMindChance);
        lcdSkillHitChance->setObjectName(QStringLiteral("lcdSkillHitChance"));
        QPalette palette4;
        QBrush brush3(QColor(0, 170, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(0, 127, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(0, 106, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(0, 42, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(0, 56, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        lcdSkillHitChance->setPalette(palette4);
        lcdSkillHitChance->setAutoFillBackground(true);
        lcdSkillHitChance->setFrameShape(QFrame::Box);
        lcdSkillHitChance->setFrameShadow(QFrame::Raised);
        lcdSkillHitChance->setLineWidth(1);
        lcdSkillHitChance->setSmallDecimalPoint(false);
        lcdSkillHitChance->setDigitCount(2);
        lcdSkillHitChance->setProperty("value", QVariant(0));

        gridLayout_64->addWidget(lcdSkillHitChance, 0, 1, 2, 1);

        tableSkillA = new QTableWidget(groupSkillMindChance);
        if (tableSkillA->columnCount() < 11)
            tableSkillA->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableSkillA->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (tableSkillA->rowCount() < 1)
            tableSkillA->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableSkillA->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 7, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 8, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 9, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillA->setItem(0, 10, __qtablewidgetitem22);
        tableSkillA->setObjectName(QStringLiteral("tableSkillA"));
        tableSkillA->setMinimumSize(QSize(350, 0));
        tableSkillA->setMaximumSize(QSize(350, 14));
        tableSkillA->setFrameShape(QFrame::NoFrame);
        tableSkillA->setLineWidth(0);
        tableSkillA->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableSkillA->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableSkillA->setAutoScroll(false);
        tableSkillA->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableSkillA->setTabKeyNavigation(false);
        tableSkillA->setProperty("showDropIndicator", QVariant(false));
        tableSkillA->setDragDropOverwriteMode(false);
        tableSkillA->setSelectionMode(QAbstractItemView::NoSelection);
        tableSkillA->setTextElideMode(Qt::ElideRight);
        tableSkillA->setGridStyle(Qt::SolidLine);
        tableSkillA->setWordWrap(false);
        tableSkillA->setCornerButtonEnabled(false);
        tableSkillA->setRowCount(1);
        tableSkillA->horizontalHeader()->setVisible(false);
        tableSkillA->horizontalHeader()->setDefaultSectionSize(32);
        tableSkillA->verticalHeader()->setVisible(false);
        tableSkillA->verticalHeader()->setDefaultSectionSize(16);

        gridLayout_64->addWidget(tableSkillA, 1, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillMindChance, 2, 0, 1, 2);

        groupSkillMindChance_2 = new QGroupBox(pageSkillNormal);
        groupSkillMindChance_2->setObjectName(QStringLiteral("groupSkillMindChance_2"));
        groupSkillMindChance_2->setMaximumSize(QSize(16777215, 90));
        gridLayout_65 = new QGridLayout(groupSkillMindChance_2);
        gridLayout_65->setObjectName(QStringLiteral("gridLayout_65"));
        verticalSliderSkillMindChance = new QVBoxLayout();
        verticalSliderSkillMindChance->setObjectName(QStringLiteral("verticalSliderSkillMindChance"));
        verticalSliderSkillMindChance->setContentsMargins(10, -1, 16, -1);
        sliderSkillMindChange = new QSlider(groupSkillMindChance_2);
        sliderSkillMindChange->setObjectName(QStringLiteral("sliderSkillMindChange"));
        sizePolicy4.setHeightForWidth(sliderSkillMindChange->sizePolicy().hasHeightForWidth());
        sliderSkillMindChange->setSizePolicy(sizePolicy4);
        sliderSkillMindChange->setMinimumSize(QSize(330, 0));
        sliderSkillMindChange->setMaximumSize(QSize(330, 16777215));
        sliderSkillMindChange->setLayoutDirection(Qt::LeftToRight);
        sliderSkillMindChange->setMaximum(10);
        sliderSkillMindChange->setPageStep(1);
        sliderSkillMindChange->setValue(0);
        sliderSkillMindChange->setOrientation(Qt::Horizontal);
        sliderSkillMindChange->setTickPosition(QSlider::TicksBelow);

        verticalSliderSkillMindChance->addWidget(sliderSkillMindChange);


        gridLayout_65->addLayout(verticalSliderSkillMindChance, 0, 0, 1, 1);

        lcdSkillMindChance = new QLCDNumber(groupSkillMindChance_2);
        lcdSkillMindChance->setObjectName(QStringLiteral("lcdSkillMindChance"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        lcdSkillMindChance->setPalette(palette5);
        lcdSkillMindChance->setAutoFillBackground(true);
        lcdSkillMindChance->setFrameShape(QFrame::Box);
        lcdSkillMindChance->setFrameShadow(QFrame::Raised);
        lcdSkillMindChance->setLineWidth(1);
        lcdSkillMindChance->setSmallDecimalPoint(false);
        lcdSkillMindChance->setDigitCount(2);
        lcdSkillMindChance->setProperty("value", QVariant(0));

        gridLayout_65->addWidget(lcdSkillMindChance, 0, 1, 2, 1);

        tableSkillB = new QTableWidget(groupSkillMindChance_2);
        if (tableSkillB->columnCount() < 11)
            tableSkillB->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(6, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(7, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(8, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(9, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableSkillB->setHorizontalHeaderItem(10, __qtablewidgetitem33);
        if (tableSkillB->rowCount() < 1)
            tableSkillB->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableSkillB->setVerticalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 3, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 4, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 5, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 6, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 7, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 8, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 9, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillB->setItem(0, 10, __qtablewidgetitem45);
        tableSkillB->setObjectName(QStringLiteral("tableSkillB"));
        tableSkillB->setMinimumSize(QSize(350, 0));
        tableSkillB->setMaximumSize(QSize(350, 14));
        tableSkillB->setFrameShape(QFrame::NoFrame);
        tableSkillB->setLineWidth(0);
        tableSkillB->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableSkillB->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableSkillB->setAutoScroll(false);
        tableSkillB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableSkillB->setTabKeyNavigation(false);
        tableSkillB->setProperty("showDropIndicator", QVariant(false));
        tableSkillB->setDragDropOverwriteMode(false);
        tableSkillB->setSelectionMode(QAbstractItemView::NoSelection);
        tableSkillB->setTextElideMode(Qt::ElideRight);
        tableSkillB->setGridStyle(Qt::SolidLine);
        tableSkillB->setWordWrap(false);
        tableSkillB->setCornerButtonEnabled(false);
        tableSkillB->setRowCount(1);
        tableSkillB->horizontalHeader()->setVisible(false);
        tableSkillB->horizontalHeader()->setDefaultSectionSize(32);
        tableSkillB->verticalHeader()->setVisible(false);
        tableSkillB->verticalHeader()->setDefaultSectionSize(16);

        gridLayout_65->addWidget(tableSkillB, 1, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillMindChance_2, 3, 0, 1, 2);

        groupSkillVariance = new QGroupBox(pageSkillNormal);
        groupSkillVariance->setObjectName(QStringLiteral("groupSkillVariance"));
        groupSkillVariance->setMaximumSize(QSize(16777215, 90));
        gridLayout_66 = new QGridLayout(groupSkillVariance);
        gridLayout_66->setObjectName(QStringLiteral("gridLayout_66"));
        verticalSliderSkillVariance = new QVBoxLayout();
        verticalSliderSkillVariance->setObjectName(QStringLiteral("verticalSliderSkillVariance"));
        verticalSliderSkillVariance->setContentsMargins(10, -1, 16, -1);
        sliderSkillVariance = new QSlider(groupSkillVariance);
        sliderSkillVariance->setObjectName(QStringLiteral("sliderSkillVariance"));
        sizePolicy4.setHeightForWidth(sliderSkillVariance->sizePolicy().hasHeightForWidth());
        sliderSkillVariance->setSizePolicy(sizePolicy4);
        sliderSkillVariance->setMinimumSize(QSize(330, 0));
        sliderSkillVariance->setMaximumSize(QSize(330, 16777215));
        sliderSkillVariance->setLayoutDirection(Qt::LeftToRight);
        sliderSkillVariance->setMaximum(10);
        sliderSkillVariance->setPageStep(1);
        sliderSkillVariance->setValue(0);
        sliderSkillVariance->setOrientation(Qt::Horizontal);
        sliderSkillVariance->setTickPosition(QSlider::TicksBelow);

        verticalSliderSkillVariance->addWidget(sliderSkillVariance);


        gridLayout_66->addLayout(verticalSliderSkillVariance, 0, 0, 1, 1);

        lcdSkillVariance = new QLCDNumber(groupSkillVariance);
        lcdSkillVariance->setObjectName(QStringLiteral("lcdSkillVariance"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        lcdSkillVariance->setPalette(palette6);
        lcdSkillVariance->setAutoFillBackground(true);
        lcdSkillVariance->setFrameShape(QFrame::Box);
        lcdSkillVariance->setFrameShadow(QFrame::Raised);
        lcdSkillVariance->setLineWidth(1);
        lcdSkillVariance->setSmallDecimalPoint(false);
        lcdSkillVariance->setDigitCount(2);
        lcdSkillVariance->setProperty("value", QVariant(0));

        gridLayout_66->addWidget(lcdSkillVariance, 0, 1, 2, 1);

        tableSkillC = new QTableWidget(groupSkillVariance);
        if (tableSkillC->columnCount() < 11)
            tableSkillC->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(2, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(3, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(4, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(5, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(6, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(7, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(8, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(9, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableSkillC->setHorizontalHeaderItem(10, __qtablewidgetitem56);
        if (tableSkillC->rowCount() < 1)
            tableSkillC->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableSkillC->setVerticalHeaderItem(0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 4, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 5, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 6, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 7, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 8, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 9, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableSkillC->setItem(0, 10, __qtablewidgetitem68);
        tableSkillC->setObjectName(QStringLiteral("tableSkillC"));
        tableSkillC->setMinimumSize(QSize(350, 0));
        tableSkillC->setMaximumSize(QSize(350, 14));
        tableSkillC->setFrameShape(QFrame::NoFrame);
        tableSkillC->setLineWidth(0);
        tableSkillC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableSkillC->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableSkillC->setAutoScroll(false);
        tableSkillC->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableSkillC->setTabKeyNavigation(false);
        tableSkillC->setProperty("showDropIndicator", QVariant(false));
        tableSkillC->setDragDropOverwriteMode(false);
        tableSkillC->setSelectionMode(QAbstractItemView::NoSelection);
        tableSkillC->setTextElideMode(Qt::ElideRight);
        tableSkillC->setGridStyle(Qt::SolidLine);
        tableSkillC->setWordWrap(false);
        tableSkillC->setCornerButtonEnabled(false);
        tableSkillC->setRowCount(1);
        tableSkillC->horizontalHeader()->setVisible(false);
        tableSkillC->horizontalHeader()->setDefaultSectionSize(32);
        tableSkillC->verticalHeader()->setVisible(false);
        tableSkillC->verticalHeader()->setDefaultSectionSize(16);

        gridLayout_66->addWidget(tableSkillC, 1, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillVariance, 4, 0, 1, 2);

        groupSkillConditionEffect = new QGroupBox(pageSkillNormal);
        groupSkillConditionEffect->setObjectName(QStringLiteral("groupSkillConditionEffect"));
        gridLayout_67 = new QGridLayout(groupSkillConditionEffect);
        gridLayout_67->setObjectName(QStringLiteral("gridLayout_67"));
        radioSkillCausesCondition = new QRadioButton(groupSkillConditionEffect);
        radioSkillCausesCondition->setObjectName(QStringLiteral("radioSkillCausesCondition"));
        radioSkillCausesCondition->setChecked(true);

        gridLayout_67->addWidget(radioSkillCausesCondition, 0, 0, 1, 1);

        radioSkillCuresCondition = new QRadioButton(groupSkillConditionEffect);
        radioSkillCuresCondition->setObjectName(QStringLiteral("radioSkillCuresCondition"));

        gridLayout_67->addWidget(radioSkillCuresCondition, 0, 1, 1, 1);

        listSkillConditionEffect = new QListWidget(groupSkillConditionEffect);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listSkillConditionEffect);
        __qlistwidgetitem->setCheckState(Qt::Unchecked);
        listSkillConditionEffect->setObjectName(QStringLiteral("listSkillConditionEffect"));
        listSkillConditionEffect->setMinimumSize(QSize(0, 160));
        listSkillConditionEffect->setMaximumSize(QSize(16777215, 160));
        listSkillConditionEffect->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listSkillConditionEffect->setProperty("showDropIndicator", QVariant(false));
        listSkillConditionEffect->setResizeMode(QListView::Fixed);

        gridLayout_67->addWidget(listSkillConditionEffect, 1, 0, 1, 2);


        gridLayout_61->addWidget(groupSkillConditionEffect, 5, 0, 1, 1);

        groupSkillAttribute = new QGroupBox(pageSkillNormal);
        groupSkillAttribute->setObjectName(QStringLiteral("groupSkillAttribute"));
        gridLayout_68 = new QGridLayout(groupSkillAttribute);
        gridLayout_68->setObjectName(QStringLiteral("gridLayout_68"));
        checkSkillReduceAttributeDefense = new QCheckBox(groupSkillAttribute);
        checkSkillReduceAttributeDefense->setObjectName(QStringLiteral("checkSkillReduceAttributeDefense"));

        gridLayout_68->addWidget(checkSkillReduceAttributeDefense, 0, 0, 1, 1);

        listSkillAttribute = new QListWidget(groupSkillAttribute);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listSkillAttribute);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listSkillAttribute->setObjectName(QStringLiteral("listSkillAttribute"));
        listSkillAttribute->setMinimumSize(QSize(0, 160));
        listSkillAttribute->setMaximumSize(QSize(16777215, 160));

        gridLayout_68->addWidget(listSkillAttribute, 1, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillAttribute, 5, 1, 1, 1);

        groupSkillBatleAnimation = new QGroupBox(pageSkillNormal);
        groupSkillBatleAnimation->setObjectName(QStringLiteral("groupSkillBatleAnimation"));
        gridLayout_69 = new QGridLayout(groupSkillBatleAnimation);
        gridLayout_69->setObjectName(QStringLiteral("gridLayout_69"));
        comboSkillBattleAnimation = new QComboBox(groupSkillBatleAnimation);
        comboSkillBattleAnimation->setObjectName(QStringLiteral("comboSkillBattleAnimation"));

        gridLayout_69->addWidget(comboSkillBattleAnimation, 1, 0, 1, 1);

        graphicsSkillBattleAnimation = new QGraphicsView(groupSkillBatleAnimation);
        graphicsSkillBattleAnimation->setObjectName(QStringLiteral("graphicsSkillBattleAnimation"));
        graphicsSkillBattleAnimation->setMinimumSize(QSize(0, 160));

        gridLayout_69->addWidget(graphicsSkillBattleAnimation, 0, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillBatleAnimation, 6, 0, 1, 1);

        groupSkillCharacterAnimation = new QGroupBox(pageSkillNormal);
        groupSkillCharacterAnimation->setObjectName(QStringLiteral("groupSkillCharacterAnimation"));
        gridLayout_70 = new QGridLayout(groupSkillCharacterAnimation);
        gridLayout_70->setObjectName(QStringLiteral("gridLayout_70"));
        graphicsSkillCharacterAnimation = new QGraphicsView(groupSkillCharacterAnimation);
        graphicsSkillCharacterAnimation->setObjectName(QStringLiteral("graphicsSkillCharacterAnimation"));

        gridLayout_70->addWidget(graphicsSkillCharacterAnimation, 0, 0, 1, 1);

        pushSkillCharacterAnimation = new QPushButton(groupSkillCharacterAnimation);
        pushSkillCharacterAnimation->setObjectName(QStringLiteral("pushSkillCharacterAnimation"));

        gridLayout_70->addWidget(pushSkillCharacterAnimation, 1, 0, 1, 1);


        gridLayout_61->addWidget(groupSkillCharacterAnimation, 6, 1, 1, 1);

        stackedSkill->addWidget(pageSkillNormal);
        pageSkillTeleport = new QWidget();
        pageSkillTeleport->setObjectName(QStringLiteral("pageSkillTeleport"));
        pageSkillTeleport->setMaximumSize(QSize(16777215, 53));
        gridLayout_72 = new QGridLayout(pageSkillTeleport);
        gridLayout_72->setObjectName(QStringLiteral("gridLayout_72"));
        gridLayout_72->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_72->setContentsMargins(0, 0, 0, 0);
        groupSkillTeleportSoundEffect = new QGroupBox(pageSkillTeleport);
        groupSkillTeleportSoundEffect->setObjectName(QStringLiteral("groupSkillTeleportSoundEffect"));
        groupSkillTeleportSoundEffect->setMaximumSize(QSize(16777215, 55));
        gridLayout_71 = new QGridLayout(groupSkillTeleportSoundEffect);
        gridLayout_71->setObjectName(QStringLiteral("gridLayout_71"));
        lineSkillTeleportSoundEffect = new QLineEdit(groupSkillTeleportSoundEffect);
        lineSkillTeleportSoundEffect->setObjectName(QStringLiteral("lineSkillTeleportSoundEffect"));
        lineSkillTeleportSoundEffect->setReadOnly(true);

        gridLayout_71->addWidget(lineSkillTeleportSoundEffect, 0, 0, 1, 1);

        toolSkillTeleportSelectSound = new QToolButton(groupSkillTeleportSoundEffect);
        toolSkillTeleportSelectSound->setObjectName(QStringLiteral("toolSkillTeleportSelectSound"));

        gridLayout_71->addWidget(toolSkillTeleportSelectSound, 0, 1, 1, 1);


        gridLayout_72->addWidget(groupSkillTeleportSoundEffect, 0, 0, 1, 1);

        stackedSkill->addWidget(pageSkillTeleport);
        pageSkillEscape = new QWidget();
        pageSkillEscape->setObjectName(QStringLiteral("pageSkillEscape"));
        pageSkillEscape->setMinimumSize(QSize(0, 0));
        pageSkillEscape->setMaximumSize(QSize(16777215, 53));
        gridLayout_74 = new QGridLayout(pageSkillEscape);
        gridLayout_74->setObjectName(QStringLiteral("gridLayout_74"));
        gridLayout_74->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_74->setContentsMargins(0, 0, 0, 0);
        groupSkillEscapeSoundEffect = new QGroupBox(pageSkillEscape);
        groupSkillEscapeSoundEffect->setObjectName(QStringLiteral("groupSkillEscapeSoundEffect"));
        groupSkillEscapeSoundEffect->setMaximumSize(QSize(16777215, 55));
        gridLayout_73 = new QGridLayout(groupSkillEscapeSoundEffect);
        gridLayout_73->setObjectName(QStringLiteral("gridLayout_73"));
        lineSkillEscapeSoundEffect = new QLineEdit(groupSkillEscapeSoundEffect);
        lineSkillEscapeSoundEffect->setObjectName(QStringLiteral("lineSkillEscapeSoundEffect"));
        lineSkillEscapeSoundEffect->setReadOnly(true);

        gridLayout_73->addWidget(lineSkillEscapeSoundEffect, 0, 0, 1, 1);

        toolSkillEscapeSelectSound = new QToolButton(groupSkillEscapeSoundEffect);
        toolSkillEscapeSelectSound->setObjectName(QStringLiteral("toolSkillEscapeSelectSound"));

        gridLayout_73->addWidget(toolSkillEscapeSelectSound, 0, 1, 1, 1);


        gridLayout_74->addWidget(groupSkillEscapeSoundEffect, 0, 0, 1, 1);

        stackedSkill->addWidget(pageSkillEscape);
        pageSkillVariable = new QWidget();
        pageSkillVariable->setObjectName(QStringLiteral("pageSkillVariable"));
        pageSkillVariable->setMaximumSize(QSize(16777215, 227));
        gridLayout_79 = new QGridLayout(pageSkillVariable);
        gridLayout_79->setObjectName(QStringLiteral("gridLayout_79"));
        gridLayout_79->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_79->setContentsMargins(0, 0, 0, 0);
        groupSkillVariableSoundEffect = new QGroupBox(pageSkillVariable);
        groupSkillVariableSoundEffect->setObjectName(QStringLiteral("groupSkillVariableSoundEffect"));
        groupSkillVariableSoundEffect->setMaximumSize(QSize(16777215, 55));
        gridLayout_75 = new QGridLayout(groupSkillVariableSoundEffect);
        gridLayout_75->setObjectName(QStringLiteral("gridLayout_75"));
        lineSkillVariableSoundEffect = new QLineEdit(groupSkillVariableSoundEffect);
        lineSkillVariableSoundEffect->setObjectName(QStringLiteral("lineSkillVariableSoundEffect"));
        lineSkillVariableSoundEffect->setReadOnly(true);

        gridLayout_75->addWidget(lineSkillVariableSoundEffect, 0, 0, 1, 1);

        toolSkillVariableSelectSound = new QToolButton(groupSkillVariableSoundEffect);
        toolSkillVariableSelectSound->setObjectName(QStringLiteral("toolSkillVariableSelectSound"));

        gridLayout_75->addWidget(toolSkillVariableSelectSound, 0, 1, 1, 1);


        gridLayout_79->addWidget(groupSkillVariableSoundEffect, 0, 0, 1, 1);

        groupSkillVariable = new QGroupBox(pageSkillVariable);
        groupSkillVariable->setObjectName(QStringLiteral("groupSkillVariable"));
        gridLayout_76 = new QGridLayout(groupSkillVariable);
        gridLayout_76->setObjectName(QStringLiteral("gridLayout_76"));
        lineSkillVariableVar = new QLineEdit(groupSkillVariable);
        lineSkillVariableVar->setObjectName(QStringLiteral("lineSkillVariableVar"));
        lineSkillVariableVar->setReadOnly(true);

        gridLayout_76->addWidget(lineSkillVariableVar, 0, 0, 1, 1);

        toolSkillVariableSelectVar = new QToolButton(groupSkillVariable);
        toolSkillVariableSelectVar->setObjectName(QStringLiteral("toolSkillVariableSelectVar"));

        gridLayout_76->addWidget(toolSkillVariableSelectVar, 0, 1, 1, 1);


        gridLayout_79->addWidget(groupSkillVariable, 1, 0, 1, 1);

        groupSkillVariableValue = new QGroupBox(pageSkillVariable);
        groupSkillVariableValue->setObjectName(QStringLiteral("groupSkillVariableValue"));
        gridLayout_77 = new QGridLayout(groupSkillVariableValue);
        gridLayout_77->setObjectName(QStringLiteral("gridLayout_77"));
        lineSkillVariableValue = new QLineEdit(groupSkillVariableValue);
        lineSkillVariableValue->setObjectName(QStringLiteral("lineSkillVariableValue"));
        lineSkillVariableValue->setReadOnly(true);

        gridLayout_77->addWidget(lineSkillVariableValue, 0, 0, 1, 1);

        toolSkillVariableSelectValue = new QToolButton(groupSkillVariableValue);
        toolSkillVariableSelectValue->setObjectName(QStringLiteral("toolSkillVariableSelectValue"));

        gridLayout_77->addWidget(toolSkillVariableSelectValue, 0, 1, 1, 1);


        gridLayout_79->addWidget(groupSkillVariableValue, 2, 0, 1, 1);

        groupSkillVariableAt = new QGroupBox(pageSkillVariable);
        groupSkillVariableAt->setObjectName(QStringLiteral("groupSkillVariableAt"));
        gridLayout_78 = new QGridLayout(groupSkillVariableAt);
        gridLayout_78->setObjectName(QStringLiteral("gridLayout_78"));
        checkSkillVariableAtMap = new QCheckBox(groupSkillVariableAt);
        checkSkillVariableAtMap->setObjectName(QStringLiteral("checkSkillVariableAtMap"));

        gridLayout_78->addWidget(checkSkillVariableAtMap, 0, 0, 1, 1);

        checkSkillVariableAtBattle = new QCheckBox(groupSkillVariableAt);
        checkSkillVariableAtBattle->setObjectName(QStringLiteral("checkSkillVariableAtBattle"));

        gridLayout_78->addWidget(checkSkillVariableAtBattle, 0, 1, 1, 1);


        gridLayout_79->addWidget(groupSkillVariableAt, 3, 0, 1, 1);

        stackedSkill->addWidget(pageSkillVariable);
        pageSkillCommonEvent = new QWidget();
        pageSkillCommonEvent->setObjectName(QStringLiteral("pageSkillCommonEvent"));
        pageSkillCommonEvent->setMinimumSize(QSize(0, 0));
        pageSkillCommonEvent->setMaximumSize(QSize(16777215, 169));
        gridLayout_82 = new QGridLayout(pageSkillCommonEvent);
        gridLayout_82->setObjectName(QStringLiteral("gridLayout_82"));
        gridLayout_82->setContentsMargins(0, 0, 0, 0);
        groupSkillCommonEventSoundEffect = new QGroupBox(pageSkillCommonEvent);
        groupSkillCommonEventSoundEffect->setObjectName(QStringLiteral("groupSkillCommonEventSoundEffect"));
        groupSkillCommonEventSoundEffect->setMaximumSize(QSize(16777215, 55));
        gridLayout_80 = new QGridLayout(groupSkillCommonEventSoundEffect);
        gridLayout_80->setObjectName(QStringLiteral("gridLayout_80"));
        lineSkillCommonEventSoundEffect = new QLineEdit(groupSkillCommonEventSoundEffect);
        lineSkillCommonEventSoundEffect->setObjectName(QStringLiteral("lineSkillCommonEventSoundEffect"));
        lineSkillCommonEventSoundEffect->setReadOnly(true);

        gridLayout_80->addWidget(lineSkillCommonEventSoundEffect, 0, 0, 1, 1);

        toolSkillCommonEventSelectSound = new QToolButton(groupSkillCommonEventSoundEffect);
        toolSkillCommonEventSelectSound->setObjectName(QStringLiteral("toolSkillCommonEventSelectSound"));

        gridLayout_80->addWidget(toolSkillCommonEventSelectSound, 0, 1, 1, 1);


        gridLayout_82->addWidget(groupSkillCommonEventSoundEffect, 0, 0, 1, 1);

        groupSkillSelectCommonEvent = new QGroupBox(pageSkillCommonEvent);
        groupSkillSelectCommonEvent->setObjectName(QStringLiteral("groupSkillSelectCommonEvent"));
        groupSkillSelectCommonEvent->setMaximumSize(QSize(16777215, 55));
        gridLayout_81 = new QGridLayout(groupSkillSelectCommonEvent);
        gridLayout_81->setObjectName(QStringLiteral("gridLayout_81"));
        comboSkillCommonEvent = new QComboBox(groupSkillSelectCommonEvent);
        comboSkillCommonEvent->setObjectName(QStringLiteral("comboSkillCommonEvent"));

        gridLayout_81->addWidget(comboSkillCommonEvent, 0, 0, 1, 1);


        gridLayout_82->addWidget(groupSkillSelectCommonEvent, 2, 0, 1, 1);

        groupSkillCommonEventAt = new QGroupBox(pageSkillCommonEvent);
        groupSkillCommonEventAt->setObjectName(QStringLiteral("groupSkillCommonEventAt"));
        gridLayout_83 = new QGridLayout(groupSkillCommonEventAt);
        gridLayout_83->setObjectName(QStringLiteral("gridLayout_83"));
        checkSkillCommonEventAtMap = new QCheckBox(groupSkillCommonEventAt);
        checkSkillCommonEventAtMap->setObjectName(QStringLiteral("checkSkillCommonEventAtMap"));

        gridLayout_83->addWidget(checkSkillCommonEventAtMap, 0, 0, 1, 1);

        checkSkillCommonEventAtBattle = new QCheckBox(groupSkillCommonEventAt);
        checkSkillCommonEventAtBattle->setObjectName(QStringLiteral("checkSkillCommonEventAtBattle"));

        gridLayout_83->addWidget(checkSkillCommonEventAtBattle, 0, 1, 1, 1);


        gridLayout_82->addWidget(groupSkillCommonEventAt, 3, 0, 1, 1);

        stackedSkill->addWidget(pageSkillCommonEvent);

        gridLayout_55->addWidget(stackedSkill, 3, 0, 1, 2);

        scrollSkillProperties->setWidget(scrollSkillPropertiesContents);

        gridLayout_62->addWidget(scrollSkillProperties, 0, 1, 1, 1);

        stackedDatabase->addWidget(pageSkill);
        pageActions = new QWidget();
        pageActions->setObjectName(QStringLiteral("pageActions"));
        gridLayout_114 = new QGridLayout(pageActions);
        gridLayout_114->setObjectName(QStringLiteral("gridLayout_114"));
        scrollActionsProperties = new QScrollArea(pageActions);
        scrollActionsProperties->setObjectName(QStringLiteral("scrollActionsProperties"));
        scrollActionsProperties->setMaximumSize(QSize(520, 16777215));
        scrollActionsProperties->setWidgetResizable(true);
        scrollActionsPropertiesContents = new QWidget();
        scrollActionsPropertiesContents->setObjectName(QStringLiteral("scrollActionsPropertiesContents"));
        scrollActionsPropertiesContents->setGeometry(QRect(0, 0, 518, 404));
        scrollActionsPropertiesContents->setMaximumSize(QSize(16777215, 1019));
        gridLayout_85 = new QGridLayout(scrollActionsPropertiesContents);
        gridLayout_85->setObjectName(QStringLiteral("gridLayout_85"));
        gridLayout_85->setSizeConstraint(QLayout::SetNoConstraint);
        groupActionsName = new QGroupBox(scrollActionsPropertiesContents);
        groupActionsName->setObjectName(QStringLiteral("groupActionsName"));
        groupActionsName->setEnabled(true);
        sizePolicy.setHeightForWidth(groupActionsName->sizePolicy().hasHeightForWidth());
        groupActionsName->setSizePolicy(sizePolicy);
        groupActionsName->setMinimumSize(QSize(0, 50));
        groupActionsName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_86 = new QGridLayout(groupActionsName);
        gridLayout_86->setObjectName(QStringLiteral("gridLayout_86"));
        lineActionsName = new QLineEdit(groupActionsName);
        lineActionsName->setObjectName(QStringLiteral("lineActionsName"));
        sizePolicy1.setHeightForWidth(lineActionsName->sizePolicy().hasHeightForWidth());
        lineActionsName->setSizePolicy(sizePolicy1);
        lineActionsName->setMinimumSize(QSize(0, 0));

        gridLayout_86->addWidget(lineActionsName, 0, 0, 1, 1);


        gridLayout_85->addWidget(groupActionsName, 0, 0, 1, 1);

        groupActionsConditions = new QGroupBox(scrollActionsPropertiesContents);
        groupActionsConditions->setObjectName(QStringLiteral("groupActionsConditions"));
        groupActionsConditions->setMaximumSize(QSize(16777215, 180));
        gridLayout_87 = new QGridLayout(groupActionsConditions);
        gridLayout_87->setObjectName(QStringLiteral("gridLayout_87"));
        listActionsConditions = new QListWidget(groupActionsConditions);
        new QListWidgetItem(listActionsConditions);
        listActionsConditions->setObjectName(QStringLiteral("listActionsConditions"));
        listActionsConditions->setSelectionRectVisible(true);

        gridLayout_87->addWidget(listActionsConditions, 0, 0, 1, 1);


        gridLayout_85->addWidget(groupActionsConditions, 2, 0, 1, 1);

        groupActionsFinalEvent = new QGroupBox(scrollActionsPropertiesContents);
        groupActionsFinalEvent->setObjectName(QStringLiteral("groupActionsFinalEvent"));
        gridLayout_88 = new QGridLayout(groupActionsFinalEvent);
        gridLayout_88->setObjectName(QStringLiteral("gridLayout_88"));
        comboActionsFinalEvent = new QComboBox(groupActionsFinalEvent);
        comboActionsFinalEvent->setObjectName(QStringLiteral("comboActionsFinalEvent"));

        gridLayout_88->addWidget(comboActionsFinalEvent, 0, 0, 1, 1);


        gridLayout_85->addWidget(groupActionsFinalEvent, 4, 0, 1, 1);

        groupActionsInitialEvent = new QGroupBox(scrollActionsPropertiesContents);
        groupActionsInitialEvent->setObjectName(QStringLiteral("groupActionsInitialEvent"));
        gridLayout_89 = new QGridLayout(groupActionsInitialEvent);
        gridLayout_89->setObjectName(QStringLiteral("gridLayout_89"));
        comboActionsInitialEvent = new QComboBox(groupActionsInitialEvent);
        comboActionsInitialEvent->setObjectName(QStringLiteral("comboActionsInitialEvent"));

        gridLayout_89->addWidget(comboActionsInitialEvent, 0, 0, 1, 1);


        gridLayout_85->addWidget(groupActionsInitialEvent, 3, 0, 1, 1);

        groupActionsMovement = new QGroupBox(scrollActionsPropertiesContents);
        groupActionsMovement->setObjectName(QStringLiteral("groupActionsMovement"));
        groupActionsMovement->setCheckable(false);
        gridLayout_90 = new QGridLayout(groupActionsMovement);
        gridLayout_90->setObjectName(QStringLiteral("gridLayout_90"));
        checkActionsMoveUp = new QCheckBox(groupActionsMovement);
        checkActionsMoveUp->setObjectName(QStringLiteral("checkActionsMoveUp"));
        checkActionsMoveUp->setChecked(true);

        gridLayout_90->addWidget(checkActionsMoveUp, 0, 0, 1, 1);

        checkActionsMoveDown = new QCheckBox(groupActionsMovement);
        checkActionsMoveDown->setObjectName(QStringLiteral("checkActionsMoveDown"));
        checkActionsMoveDown->setChecked(true);

        gridLayout_90->addWidget(checkActionsMoveDown, 0, 1, 1, 1);

        checkActionsMoveLeft = new QCheckBox(groupActionsMovement);
        checkActionsMoveLeft->setObjectName(QStringLiteral("checkActionsMoveLeft"));
        checkActionsMoveLeft->setChecked(true);

        gridLayout_90->addWidget(checkActionsMoveLeft, 0, 2, 1, 1);

        checkActionsMoveRight = new QCheckBox(groupActionsMovement);
        checkActionsMoveRight->setObjectName(QStringLiteral("checkActionsMoveRight"));
        checkActionsMoveRight->setChecked(true);

        gridLayout_90->addWidget(checkActionsMoveRight, 0, 3, 1, 1);


        gridLayout_85->addWidget(groupActionsMovement, 1, 0, 1, 1);

        scrollActionsProperties->setWidget(scrollActionsPropertiesContents);

        gridLayout_114->addWidget(scrollActionsProperties, 0, 1, 2, 1);

        gridActionsList = new QFrame(pageActions);
        gridActionsList->setObjectName(QStringLiteral("gridActionsList"));
        gridActionsList->setMinimumSize(QSize(180, 0));
        gridActionsList->setMaximumSize(QSize(180, 16777215));
        gridLayout_84 = new QGridLayout(gridActionsList);
        gridLayout_84->setObjectName(QStringLiteral("gridLayout_84"));
        gridLayout_84->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(gridActionsList);
        label_22->setObjectName(QStringLiteral("label_22"));
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
        label_22->setPalette(palette7);
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
        gridLayout_24->setContentsMargins(9, 9, 9, 9);
        scrollItemProperties = new QScrollArea(pageItem);
        scrollItemProperties->setObjectName(QStringLiteral("scrollItemProperties"));
        scrollItemProperties->setMaximumSize(QSize(520, 16777215));
        scrollItemProperties->setWidgetResizable(true);
        scrollItemPropertiesContents = new QWidget();
        scrollItemPropertiesContents->setObjectName(QStringLiteral("scrollItemPropertiesContents"));
        scrollItemPropertiesContents->setGeometry(QRect(0, 0, 501, 1349));
        scrollItemPropertiesContents->setMaximumSize(QSize(16777215, 1609));
        gridLayout_92 = new QGridLayout(scrollItemPropertiesContents);
        gridLayout_92->setObjectName(QStringLiteral("gridLayout_92"));
        gridLayout_92->setSizeConstraint(QLayout::SetNoConstraint);
        groupItemsName = new QGroupBox(scrollItemPropertiesContents);
        groupItemsName->setObjectName(QStringLiteral("groupItemsName"));
        groupItemsName->setEnabled(true);
        sizePolicy.setHeightForWidth(groupItemsName->sizePolicy().hasHeightForWidth());
        groupItemsName->setSizePolicy(sizePolicy);
        groupItemsName->setMinimumSize(QSize(0, 50));
        groupItemsName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_93 = new QGridLayout(groupItemsName);
        gridLayout_93->setObjectName(QStringLiteral("gridLayout_93"));
        lineItemName = new QLineEdit(groupItemsName);
        lineItemName->setObjectName(QStringLiteral("lineItemName"));
        sizePolicy1.setHeightForWidth(lineItemName->sizePolicy().hasHeightForWidth());
        lineItemName->setSizePolicy(sizePolicy1);
        lineItemName->setMinimumSize(QSize(0, 0));

        gridLayout_93->addWidget(lineItemName, 0, 0, 1, 1);


        gridLayout_92->addWidget(groupItemsName, 0, 0, 1, 2);

        groupItemDesc = new QGroupBox(scrollItemPropertiesContents);
        groupItemDesc->setObjectName(QStringLiteral("groupItemDesc"));
        groupItemDesc->setMaximumSize(QSize(16777215, 50));
        gridLayout_94 = new QGridLayout(groupItemDesc);
        gridLayout_94->setObjectName(QStringLiteral("gridLayout_94"));
        lineItemDesc = new QLineEdit(groupItemDesc);
        lineItemDesc->setObjectName(QStringLiteral("lineItemDesc"));

        gridLayout_94->addWidget(lineItemDesc, 0, 0, 1, 1);


        gridLayout_92->addWidget(groupItemDesc, 1, 0, 1, 2);

        groupItemPrice = new QGroupBox(scrollItemPropertiesContents);
        groupItemPrice->setObjectName(QStringLiteral("groupItemPrice"));
        groupItemPrice->setMaximumSize(QSize(16777215, 55));
        gridLayout_95 = new QGridLayout(groupItemPrice);
        gridLayout_95->setObjectName(QStringLiteral("gridLayout_95"));
        spinItemPrice = new QSpinBox(groupItemPrice);
        spinItemPrice->setObjectName(QStringLiteral("spinItemPrice"));

        gridLayout_95->addWidget(spinItemPrice, 0, 0, 1, 1);


        gridLayout_92->addWidget(groupItemPrice, 2, 0, 1, 2);

        stackedItem = new QStackedWidget(scrollItemPropertiesContents);
        stackedItem->setObjectName(QStringLiteral("stackedItem"));
        stackedItem->setMaximumSize(QSize(16777215, 1500));
        pageItemKey = new QWidget();
        pageItemKey->setObjectName(QStringLiteral("pageItemKey"));
        gridLayout_107 = new QGridLayout(pageItemKey);
        gridLayout_107->setObjectName(QStringLiteral("gridLayout_107"));
        stackedItem->addWidget(pageItemKey);
        pageItemEquipment = new QWidget();
        pageItemEquipment->setObjectName(QStringLiteral("pageItemEquipment"));
        gridLayout_142 = new QGridLayout(pageItemEquipment);
        gridLayout_142->setObjectName(QStringLiteral("gridLayout_142"));
        gridLayout_142->setContentsMargins(0, 0, 0, 0);
        groupEquipmentSlotA = new QGroupBox(pageItemEquipment);
        groupEquipmentSlotA->setObjectName(QStringLiteral("groupEquipmentSlotA"));
        gridLayout_118 = new QGridLayout(groupEquipmentSlotA);
        gridLayout_118->setObjectName(QStringLiteral("gridLayout_118"));
        comboEquipmentSlotA = new QComboBox(groupEquipmentSlotA);
        comboEquipmentSlotA->setObjectName(QStringLiteral("comboEquipmentSlotA"));

        gridLayout_118->addWidget(comboEquipmentSlotA, 0, 0, 1, 1);


        gridLayout_142->addWidget(groupEquipmentSlotA, 0, 0, 1, 1);

        groupEquipmentUsableBy = new QGroupBox(pageItemEquipment);
        groupEquipmentUsableBy->setObjectName(QStringLiteral("groupEquipmentUsableBy"));
        gridLayout_120 = new QGridLayout(groupEquipmentUsableBy);
        gridLayout_120->setObjectName(QStringLiteral("gridLayout_120"));
        listEquipmentUsableBy = new QListWidget(groupEquipmentUsableBy);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem2->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem3->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem4->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem5->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem6->setCheckState(Qt::Checked);
        listEquipmentUsableBy->setObjectName(QStringLiteral("listEquipmentUsableBy"));

        gridLayout_120->addWidget(listEquipmentUsableBy, 0, 0, 1, 1);


        gridLayout_142->addWidget(groupEquipmentUsableBy, 2, 0, 1, 1);

        groupEquipmentValueChange = new QGroupBox(pageItemEquipment);
        groupEquipmentValueChange->setObjectName(QStringLiteral("groupEquipmentValueChange"));
        gridLayout_125 = new QGridLayout(groupEquipmentValueChange);
        gridLayout_125->setObjectName(QStringLiteral("gridLayout_125"));
        groupEquipmentAttack = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentAttack->setObjectName(QStringLiteral("groupEquipmentAttack"));
        groupEquipmentAttack->setFlat(true);
        gridLayout_121 = new QGridLayout(groupEquipmentAttack);
        gridLayout_121->setObjectName(QStringLiteral("gridLayout_121"));
        spinEquipmentAttack = new QSpinBox(groupEquipmentAttack);
        spinEquipmentAttack->setObjectName(QStringLiteral("spinEquipmentAttack"));

        gridLayout_121->addWidget(spinEquipmentAttack, 0, 0, 1, 1);


        gridLayout_125->addWidget(groupEquipmentAttack, 0, 0, 1, 1);

        groupEquipmentMind = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentMind->setObjectName(QStringLiteral("groupEquipmentMind"));
        groupEquipmentMind->setFlat(true);
        gridLayout_122 = new QGridLayout(groupEquipmentMind);
        gridLayout_122->setObjectName(QStringLiteral("gridLayout_122"));
        spinEquipmentMind = new QSpinBox(groupEquipmentMind);
        spinEquipmentMind->setObjectName(QStringLiteral("spinEquipmentMind"));

        gridLayout_122->addWidget(spinEquipmentMind, 0, 0, 1, 1);


        gridLayout_125->addWidget(groupEquipmentMind, 1, 0, 1, 1);

        groupEquipmentDefense = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentDefense->setObjectName(QStringLiteral("groupEquipmentDefense"));
        groupEquipmentDefense->setFlat(true);
        gridLayout_124 = new QGridLayout(groupEquipmentDefense);
        gridLayout_124->setObjectName(QStringLiteral("gridLayout_124"));
        spinEquipmentDefense = new QSpinBox(groupEquipmentDefense);
        spinEquipmentDefense->setObjectName(QStringLiteral("spinEquipmentDefense"));

        gridLayout_124->addWidget(spinEquipmentDefense, 0, 0, 1, 1);


        gridLayout_125->addWidget(groupEquipmentDefense, 2, 0, 1, 1);

        groupEquipmentAgility = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentAgility->setObjectName(QStringLiteral("groupEquipmentAgility"));
        groupEquipmentAgility->setFlat(true);
        gridLayout_123 = new QGridLayout(groupEquipmentAgility);
        gridLayout_123->setObjectName(QStringLiteral("gridLayout_123"));
        spinEquipmentAgility = new QSpinBox(groupEquipmentAgility);
        spinEquipmentAgility->setObjectName(QStringLiteral("spinEquipmentAgility"));

        gridLayout_123->addWidget(spinEquipmentAgility, 0, 0, 1, 1);


        gridLayout_125->addWidget(groupEquipmentAgility, 3, 0, 1, 1);


        gridLayout_142->addWidget(groupEquipmentValueChange, 2, 1, 1, 1);

        groupEquipmentAttibute = new QGroupBox(pageItemEquipment);
        groupEquipmentAttibute->setObjectName(QStringLiteral("groupEquipmentAttibute"));
        gridLayout_126 = new QGridLayout(groupEquipmentAttibute);
        gridLayout_126->setObjectName(QStringLiteral("gridLayout_126"));
        listEquipmentAttibute = new QListWidget(groupEquipmentAttibute);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listEquipmentAttibute);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        __qlistwidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listEquipmentAttibute->setObjectName(QStringLiteral("listEquipmentAttibute"));
        listEquipmentAttibute->setMinimumSize(QSize(0, 160));

        gridLayout_126->addWidget(listEquipmentAttibute, 0, 0, 1, 1);


        gridLayout_142->addWidget(groupEquipmentAttibute, 3, 0, 1, 1);

        groupEquipmentConditionEffect = new QGroupBox(pageItemEquipment);
        groupEquipmentConditionEffect->setObjectName(QStringLiteral("groupEquipmentConditionEffect"));
        gridLayout_127 = new QGridLayout(groupEquipmentConditionEffect);
        gridLayout_127->setObjectName(QStringLiteral("gridLayout_127"));
        radioEquipmentCausesCondition = new QRadioButton(groupEquipmentConditionEffect);
        radioEquipmentCausesCondition->setObjectName(QStringLiteral("radioEquipmentCausesCondition"));
        radioEquipmentCausesCondition->setChecked(true);

        gridLayout_127->addWidget(radioEquipmentCausesCondition, 0, 0, 1, 1);

        radioEquipmentCuresCondition = new QRadioButton(groupEquipmentConditionEffect);
        radioEquipmentCuresCondition->setObjectName(QStringLiteral("radioEquipmentCuresCondition"));

        gridLayout_127->addWidget(radioEquipmentCuresCondition, 0, 1, 1, 1);

        listEquipmentConditionEffect = new QListWidget(groupEquipmentConditionEffect);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listEquipmentConditionEffect);
        __qlistwidgetitem8->setCheckState(Qt::Unchecked);
        listEquipmentConditionEffect->setObjectName(QStringLiteral("listEquipmentConditionEffect"));
        listEquipmentConditionEffect->setMinimumSize(QSize(0, 125));
        listEquipmentConditionEffect->setMaximumSize(QSize(16777215, 160));
        listEquipmentConditionEffect->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listEquipmentConditionEffect->setProperty("showDropIndicator", QVariant(false));
        listEquipmentConditionEffect->setResizeMode(QListView::Fixed);

        gridLayout_127->addWidget(listEquipmentConditionEffect, 1, 0, 1, 2);

        groupEquipmentConditionChance = new QGroupBox(groupEquipmentConditionEffect);
        groupEquipmentConditionChance->setObjectName(QStringLiteral("groupEquipmentConditionChance"));
        groupEquipmentConditionChance->setFlat(true);
        gridLayout_128 = new QGridLayout(groupEquipmentConditionChance);
        gridLayout_128->setObjectName(QStringLiteral("gridLayout_128"));
        spinEquipmentConditionChance = new QSpinBox(groupEquipmentConditionChance);
        spinEquipmentConditionChance->setObjectName(QStringLiteral("spinEquipmentConditionChance"));

        gridLayout_128->addWidget(spinEquipmentConditionChance, 0, 0, 1, 1);


        gridLayout_127->addWidget(groupEquipmentConditionChance, 2, 0, 1, 2);


        gridLayout_142->addWidget(groupEquipmentConditionEffect, 3, 1, 1, 1);

        groupEquipmentSkill = new QGroupBox(pageItemEquipment);
        groupEquipmentSkill->setObjectName(QStringLiteral("groupEquipmentSkill"));
        groupEquipmentSkill->setCheckable(true);
        groupEquipmentSkill->setChecked(false);
        gridLayout_129 = new QGridLayout(groupEquipmentSkill);
        gridLayout_129->setObjectName(QStringLiteral("gridLayout_129"));
        comboEquipmentSkill = new QComboBox(groupEquipmentSkill);
        comboEquipmentSkill->setObjectName(QStringLiteral("comboEquipmentSkill"));

        gridLayout_129->addWidget(comboEquipmentSkill, 0, 0, 1, 1);


        gridLayout_142->addWidget(groupEquipmentSkill, 4, 0, 1, 2);

        stackedEquipmentOptions = new QStackedWidget(pageItemEquipment);
        stackedEquipmentOptions->setObjectName(QStringLiteral("stackedEquipmentOptions"));
        pageWeaponOptions = new QWidget();
        pageWeaponOptions->setObjectName(QStringLiteral("pageWeaponOptions"));
        gridLayout_130 = new QGridLayout(pageWeaponOptions);
        gridLayout_130->setObjectName(QStringLiteral("gridLayout_130"));
        gridLayout_130->setContentsMargins(0, 0, 0, 0);
        groupWeaponOptions = new QGroupBox(pageWeaponOptions);
        groupWeaponOptions->setObjectName(QStringLiteral("groupWeaponOptions"));
        groupWeaponOptions->setFlat(true);
        gridLayout_138 = new QGridLayout(groupWeaponOptions);
        gridLayout_138->setObjectName(QStringLiteral("gridLayout_138"));
        groupWeaponSecuence = new QGroupBox(groupWeaponOptions);
        groupWeaponSecuence->setObjectName(QStringLiteral("groupWeaponSecuence"));
        groupWeaponSecuence->setMinimumSize(QSize(0, 150));
        gridLayout_133 = new QGridLayout(groupWeaponSecuence);
        gridLayout_133->setObjectName(QStringLiteral("gridLayout_133"));
        graphicsWeaponActionSecuence = new QGraphicsView(groupWeaponSecuence);
        graphicsWeaponActionSecuence->setObjectName(QStringLiteral("graphicsWeaponActionSecuence"));

        gridLayout_133->addWidget(graphicsWeaponActionSecuence, 0, 0, 1, 1);

        pushWeaponSecuence = new QPushButton(groupWeaponSecuence);
        pushWeaponSecuence->setObjectName(QStringLiteral("pushWeaponSecuence"));

        gridLayout_133->addWidget(pushWeaponSecuence, 1, 0, 1, 1);


        gridLayout_138->addWidget(groupWeaponSecuence, 0, 0, 1, 1);

        groupWeaponDamageOptions = new QGroupBox(groupWeaponOptions);
        groupWeaponDamageOptions->setObjectName(QStringLiteral("groupWeaponDamageOptions"));
        gridLayout_137 = new QGridLayout(groupWeaponDamageOptions);
        gridLayout_137->setObjectName(QStringLiteral("gridLayout_137"));
        groupWeaponMpCost = new QGroupBox(groupWeaponDamageOptions);
        groupWeaponMpCost->setObjectName(QStringLiteral("groupWeaponMpCost"));
        groupWeaponMpCost->setFlat(true);
        gridLayout_134 = new QGridLayout(groupWeaponMpCost);
        gridLayout_134->setObjectName(QStringLiteral("gridLayout_134"));
        spinWeaponMpCost = new QSpinBox(groupWeaponMpCost);
        spinWeaponMpCost->setObjectName(QStringLiteral("spinWeaponMpCost"));

        gridLayout_134->addWidget(spinWeaponMpCost, 0, 0, 1, 1);


        gridLayout_137->addWidget(groupWeaponMpCost, 0, 0, 1, 1);

        groupWeaponBaseDamage = new QGroupBox(groupWeaponDamageOptions);
        groupWeaponBaseDamage->setObjectName(QStringLiteral("groupWeaponBaseDamage"));
        groupWeaponBaseDamage->setFlat(true);
        gridLayout_135 = new QGridLayout(groupWeaponBaseDamage);
        gridLayout_135->setObjectName(QStringLiteral("gridLayout_135"));
        spinWeaponBaseDamage = new QSpinBox(groupWeaponBaseDamage);
        spinWeaponBaseDamage->setObjectName(QStringLiteral("spinWeaponBaseDamage"));

        gridLayout_135->addWidget(spinWeaponBaseDamage, 0, 0, 1, 1);


        gridLayout_137->addWidget(groupWeaponBaseDamage, 0, 1, 1, 1);

        groupWeaponCriticalChance = new QGroupBox(groupWeaponDamageOptions);
        groupWeaponCriticalChance->setObjectName(QStringLiteral("groupWeaponCriticalChance"));
        groupWeaponCriticalChance->setFlat(true);
        gridLayout_136 = new QGridLayout(groupWeaponCriticalChance);
        gridLayout_136->setObjectName(QStringLiteral("gridLayout_136"));
        spinWeaponCriticalChance = new QSpinBox(groupWeaponCriticalChance);
        spinWeaponCriticalChance->setObjectName(QStringLiteral("spinWeaponCriticalChance"));

        gridLayout_136->addWidget(spinWeaponCriticalChance, 0, 0, 1, 1);


        gridLayout_137->addWidget(groupWeaponCriticalChance, 0, 2, 1, 1);


        gridLayout_138->addWidget(groupWeaponDamageOptions, 2, 0, 1, 1);

        groupWeaponTargetAnimation = new QGroupBox(groupWeaponOptions);
        groupWeaponTargetAnimation->setObjectName(QStringLiteral("groupWeaponTargetAnimation"));
        gridLayout_132 = new QGridLayout(groupWeaponTargetAnimation);
        gridLayout_132->setObjectName(QStringLiteral("gridLayout_132"));
        graphicsWeaponTargetAnimation = new QGraphicsView(groupWeaponTargetAnimation);
        graphicsWeaponTargetAnimation->setObjectName(QStringLiteral("graphicsWeaponTargetAnimation"));

        gridLayout_132->addWidget(graphicsWeaponTargetAnimation, 0, 0, 1, 1);

        comboWeaponTargetAnimation = new QComboBox(groupWeaponTargetAnimation);
        comboWeaponTargetAnimation->setObjectName(QStringLiteral("comboWeaponTargetAnimation"));

        gridLayout_132->addWidget(comboWeaponTargetAnimation, 1, 0, 1, 1);


        gridLayout_138->addWidget(groupWeaponTargetAnimation, 1, 0, 1, 1);

        groupWeaponOptions_2 = new QGroupBox(groupWeaponOptions);
        groupWeaponOptions_2->setObjectName(QStringLiteral("groupWeaponOptions_2"));
        gridLayout_139 = new QGridLayout(groupWeaponOptions_2);
        gridLayout_139->setObjectName(QStringLiteral("gridLayout_139"));
        checkWeaponPreventiveAttack = new QCheckBox(groupWeaponOptions_2);
        checkWeaponPreventiveAttack->setObjectName(QStringLiteral("checkWeaponPreventiveAttack"));

        gridLayout_139->addWidget(checkWeaponPreventiveAttack, 0, 0, 1, 1);

        checkWeaponAttackTwise = new QCheckBox(groupWeaponOptions_2);
        checkWeaponAttackTwise->setObjectName(QStringLiteral("checkWeaponAttackTwise"));

        gridLayout_139->addWidget(checkWeaponAttackTwise, 0, 1, 1, 1);

        checkWeaponIgnoreEvasion = new QCheckBox(groupWeaponOptions_2);
        checkWeaponIgnoreEvasion->setObjectName(QStringLiteral("checkWeaponIgnoreEvasion"));

        gridLayout_139->addWidget(checkWeaponIgnoreEvasion, 1, 0, 1, 1);

        checkWeaponCursed = new QCheckBox(groupWeaponOptions_2);
        checkWeaponCursed->setObjectName(QStringLiteral("checkWeaponCursed"));

        gridLayout_139->addWidget(checkWeaponCursed, 1, 1, 1, 1);

        checkWeaponAttackAllEnemies = new QCheckBox(groupWeaponOptions_2);
        checkWeaponAttackAllEnemies->setObjectName(QStringLiteral("checkWeaponAttackAllEnemies"));

        gridLayout_139->addWidget(checkWeaponAttackAllEnemies, 2, 0, 1, 1);


        gridLayout_138->addWidget(groupWeaponOptions_2, 3, 0, 1, 1);


        gridLayout_130->addWidget(groupWeaponOptions, 0, 0, 1, 1);

        stackedEquipmentOptions->addWidget(pageWeaponOptions);
        pageArmor = new QWidget();
        pageArmor->setObjectName(QStringLiteral("pageArmor"));
        gridLayout_131 = new QGridLayout(pageArmor);
        gridLayout_131->setObjectName(QStringLiteral("gridLayout_131"));
        gridLayout_131->setContentsMargins(0, 0, 0, 0);
        groupArmorOptions = new QGroupBox(pageArmor);
        groupArmorOptions->setObjectName(QStringLiteral("groupArmorOptions"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupArmorOptions->sizePolicy().hasHeightForWidth());
        groupArmorOptions->setSizePolicy(sizePolicy5);
        groupArmorOptions->setFlat(true);
        gridLayout_141 = new QGridLayout(groupArmorOptions);
        gridLayout_141->setObjectName(QStringLiteral("gridLayout_141"));
        groupArmorOptions_2 = new QGroupBox(groupArmorOptions);
        groupArmorOptions_2->setObjectName(QStringLiteral("groupArmorOptions_2"));
        gridLayout_140 = new QGridLayout(groupArmorOptions_2);
        gridLayout_140->setObjectName(QStringLiteral("gridLayout_140"));
        checkArmorPreventCritical = new QCheckBox(groupArmorOptions_2);
        checkArmorPreventCritical->setObjectName(QStringLiteral("checkArmorPreventCritical"));

        gridLayout_140->addWidget(checkArmorPreventCritical, 0, 0, 1, 1);

        checkArmorEvadeAttack = new QCheckBox(groupArmorOptions_2);
        checkArmorEvadeAttack->setObjectName(QStringLiteral("checkArmorEvadeAttack"));

        gridLayout_140->addWidget(checkArmorEvadeAttack, 1, 0, 1, 1);

        checkArmorConsumeHalfMp = new QCheckBox(groupArmorOptions_2);
        checkArmorConsumeHalfMp->setObjectName(QStringLiteral("checkArmorConsumeHalfMp"));

        gridLayout_140->addWidget(checkArmorConsumeHalfMp, 2, 0, 1, 1);

        checkArmorPreventsDmgOnField = new QCheckBox(groupArmorOptions_2);
        checkArmorPreventsDmgOnField->setObjectName(QStringLiteral("checkArmorPreventsDmgOnField"));

        gridLayout_140->addWidget(checkArmorPreventsDmgOnField, 3, 0, 1, 1);

        checkArmorCursed = new QCheckBox(groupArmorOptions_2);
        checkArmorCursed->setObjectName(QStringLiteral("checkArmorCursed"));

        gridLayout_140->addWidget(checkArmorCursed, 4, 0, 1, 1);


        gridLayout_141->addWidget(groupArmorOptions_2, 0, 0, 1, 1);


        gridLayout_131->addWidget(groupArmorOptions, 0, 0, 1, 1);

        stackedEquipmentOptions->addWidget(pageArmor);

        gridLayout_142->addWidget(stackedEquipmentOptions, 5, 0, 1, 2);

        groupEquipmentSlotB = new QGroupBox(pageItemEquipment);
        groupEquipmentSlotB->setObjectName(QStringLiteral("groupEquipmentSlotB"));
        groupEquipmentSlotB->setCheckable(true);
        groupEquipmentSlotB->setChecked(false);
        gridLayout_119 = new QGridLayout(groupEquipmentSlotB);
        gridLayout_119->setObjectName(QStringLiteral("gridLayout_119"));
        comboEquipmentSlotB = new QComboBox(groupEquipmentSlotB);
        comboEquipmentSlotB->setObjectName(QStringLiteral("comboEquipmentSlotB"));

        gridLayout_119->addWidget(comboEquipmentSlotB, 0, 0, 1, 1);


        gridLayout_142->addWidget(groupEquipmentSlotB, 0, 1, 1, 1);

        stackedItem->addWidget(pageItemEquipment);
        pageItemMedicine = new QWidget();
        pageItemMedicine->setObjectName(QStringLiteral("pageItemMedicine"));
        pageItemMedicine->setMinimumSize(QSize(0, 0));
        gridLayout_104 = new QGridLayout(pageItemMedicine);
        gridLayout_104->setObjectName(QStringLiteral("gridLayout_104"));
        gridLayout_104->setContentsMargins(0, 0, 0, 0);
        groupMedicineRecover = new QGroupBox(pageItemMedicine);
        groupMedicineRecover->setObjectName(QStringLiteral("groupMedicineRecover"));
        groupMedicineRecover->setMinimumSize(QSize(0, 79));
        gridLayout_102 = new QGridLayout(groupMedicineRecover);
        gridLayout_102->setObjectName(QStringLiteral("gridLayout_102"));
        gridLayout_102->setSizeConstraint(QLayout::SetNoConstraint);
        label_9 = new QLabel(groupMedicineRecover);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_102->addWidget(label_9, 0, 0, 1, 1);

        spinMedicineRecoverHp = new QSpinBox(groupMedicineRecover);
        spinMedicineRecoverHp->setObjectName(QStringLiteral("spinMedicineRecoverHp"));
        spinMedicineRecoverHp->setMaximum(9999);

        gridLayout_102->addWidget(spinMedicineRecoverHp, 0, 1, 1, 1);

        label_25 = new QLabel(groupMedicineRecover);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_102->addWidget(label_25, 0, 2, 1, 1);

        spinMedicineRecoverHpPercent = new QSpinBox(groupMedicineRecover);
        spinMedicineRecoverHpPercent->setObjectName(QStringLiteral("spinMedicineRecoverHpPercent"));
        spinMedicineRecoverHpPercent->setMaximum(100);

        gridLayout_102->addWidget(spinMedicineRecoverHpPercent, 0, 3, 1, 1);

        label_24 = new QLabel(groupMedicineRecover);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_102->addWidget(label_24, 1, 0, 1, 1);

        spinMedicineRecoverMp = new QSpinBox(groupMedicineRecover);
        spinMedicineRecoverMp->setObjectName(QStringLiteral("spinMedicineRecoverMp"));
        spinMedicineRecoverMp->setMaximum(9999);

        gridLayout_102->addWidget(spinMedicineRecoverMp, 1, 1, 1, 1);

        label_26 = new QLabel(groupMedicineRecover);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_102->addWidget(label_26, 1, 2, 1, 1);

        spinMedicineRecoverMpPercent = new QSpinBox(groupMedicineRecover);
        spinMedicineRecoverMpPercent->setObjectName(QStringLiteral("spinMedicineRecoverMpPercent"));
        spinMedicineRecoverMpPercent->setFrame(true);
        spinMedicineRecoverMpPercent->setMaximum(100);

        gridLayout_102->addWidget(spinMedicineRecoverMpPercent, 1, 3, 1, 1);


        gridLayout_104->addWidget(groupMedicineRecover, 1, 1, 1, 1);

        groupMedicineOptions = new QGroupBox(pageItemMedicine);
        groupMedicineOptions->setObjectName(QStringLiteral("groupMedicineOptions"));
        groupMedicineOptions->setMinimumSize(QSize(0, 79));
        gridLayout_100 = new QGridLayout(groupMedicineOptions);
        gridLayout_100->setObjectName(QStringLiteral("gridLayout_100"));
        checkMedicineOnlyOnField = new QCheckBox(groupMedicineOptions);
        checkMedicineOnlyOnField->setObjectName(QStringLiteral("checkMedicineOnlyOnField"));

        gridLayout_100->addWidget(checkMedicineOnlyOnField, 0, 0, 1, 1);

        checkMedicineOnlyOnFainted = new QCheckBox(groupMedicineOptions);
        checkMedicineOnlyOnFainted->setObjectName(QStringLiteral("checkMedicineOnlyOnFainted"));

        gridLayout_100->addWidget(checkMedicineOnlyOnFainted, 1, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineOptions, 1, 0, 1, 1);

        groupMedicineCausesCondition = new QGroupBox(pageItemMedicine);
        groupMedicineCausesCondition->setObjectName(QStringLiteral("groupMedicineCausesCondition"));
        groupMedicineCausesCondition->setMinimumSize(QSize(0, 150));
        gridLayout_103 = new QGridLayout(groupMedicineCausesCondition);
        gridLayout_103->setObjectName(QStringLiteral("gridLayout_103"));
        listMedicineCausesCondition = new QListWidget(groupMedicineCausesCondition);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem9->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem10->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem11->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem12->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem13->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem14->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem15->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem16->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem17->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem18->setCheckState(Qt::Unchecked);
        listMedicineCausesCondition->setObjectName(QStringLiteral("listMedicineCausesCondition"));

        gridLayout_103->addWidget(listMedicineCausesCondition, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineCausesCondition, 2, 1, 1, 1);

        groupMedicineUsableBy = new QGroupBox(pageItemMedicine);
        groupMedicineUsableBy->setObjectName(QStringLiteral("groupMedicineUsableBy"));
        gridLayout_101 = new QGridLayout(groupMedicineUsableBy);
        gridLayout_101->setObjectName(QStringLiteral("gridLayout_101"));
        listMedicineUsableBy = new QListWidget(groupMedicineUsableBy);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem19->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem20->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem21 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem21->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem22 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem22->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem23 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem23->setCheckState(Qt::Checked);
        listMedicineUsableBy->setObjectName(QStringLiteral("listMedicineUsableBy"));

        gridLayout_101->addWidget(listMedicineUsableBy, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineUsableBy, 2, 0, 1, 1);

        groupMedicineEffectRange = new QGroupBox(pageItemMedicine);
        groupMedicineEffectRange->setObjectName(QStringLiteral("groupMedicineEffectRange"));
        groupMedicineEffectRange->setMinimumSize(QSize(0, 55));
        gridLayout_99 = new QGridLayout(groupMedicineEffectRange);
        gridLayout_99->setObjectName(QStringLiteral("gridLayout_99"));
        comboMedicineEfectRange = new QComboBox(groupMedicineEffectRange);
        comboMedicineEfectRange->setObjectName(QStringLiteral("comboMedicineEfectRange"));

        gridLayout_99->addWidget(comboMedicineEfectRange, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineEffectRange, 0, 1, 1, 1);

        groupMedicineUseCount = new QGroupBox(pageItemMedicine);
        groupMedicineUseCount->setObjectName(QStringLiteral("groupMedicineUseCount"));
        gridLayout_96 = new QGridLayout(groupMedicineUseCount);
        gridLayout_96->setObjectName(QStringLiteral("gridLayout_96"));
        comboMedicineUseCount = new QComboBox(groupMedicineUseCount);
        comboMedicineUseCount->setObjectName(QStringLiteral("comboMedicineUseCount"));

        gridLayout_96->addWidget(comboMedicineUseCount, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineUseCount, 0, 0, 1, 1);

        stackedItem->addWidget(pageItemMedicine);
        pageItemBook = new QWidget();
        pageItemBook->setObjectName(QStringLiteral("pageItemBook"));
        gridLayout_98 = new QGridLayout(pageItemBook);
        gridLayout_98->setObjectName(QStringLiteral("gridLayout_98"));
        gridLayout_98->setContentsMargins(0, 0, 0, 0);
        groupBookUseCount = new QGroupBox(pageItemBook);
        groupBookUseCount->setObjectName(QStringLiteral("groupBookUseCount"));
        gridLayout_97 = new QGridLayout(groupBookUseCount);
        gridLayout_97->setObjectName(QStringLiteral("gridLayout_97"));
        comboBookUseCount = new QComboBox(groupBookUseCount);
        comboBookUseCount->setObjectName(QStringLiteral("comboBookUseCount"));

        gridLayout_97->addWidget(comboBookUseCount, 0, 0, 1, 1);


        gridLayout_98->addWidget(groupBookUseCount, 0, 0, 1, 1);

        groupBookSkill = new QGroupBox(pageItemBook);
        groupBookSkill->setObjectName(QStringLiteral("groupBookSkill"));
        groupBookSkill->setMinimumSize(QSize(0, 55));
        gridLayout_105 = new QGridLayout(groupBookSkill);
        gridLayout_105->setObjectName(QStringLiteral("gridLayout_105"));
        comboBookSkill = new QComboBox(groupBookSkill);
        comboBookSkill->setObjectName(QStringLiteral("comboBookSkill"));

        gridLayout_105->addWidget(comboBookSkill, 0, 0, 1, 1);


        gridLayout_98->addWidget(groupBookSkill, 0, 1, 1, 1);

        groupBookLearnedBy = new QGroupBox(pageItemBook);
        groupBookLearnedBy->setObjectName(QStringLiteral("groupBookLearnedBy"));
        groupBookLearnedBy->setMinimumSize(QSize(0, 150));
        gridLayout_106 = new QGridLayout(groupBookLearnedBy);
        gridLayout_106->setObjectName(QStringLiteral("gridLayout_106"));
        listBookLearnedBy = new QListWidget(groupBookLearnedBy);
        QListWidgetItem *__qlistwidgetitem24 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem24->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem25 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem25->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem26 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem26->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem27 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem27->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem28 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem28->setCheckState(Qt::Checked);
        listBookLearnedBy->setObjectName(QStringLiteral("listBookLearnedBy"));

        gridLayout_106->addWidget(listBookLearnedBy, 0, 0, 1, 1);


        gridLayout_98->addWidget(groupBookLearnedBy, 1, 0, 1, 2);

        stackedItem->addWidget(pageItemBook);
        pageItemMaterial = new QWidget();
        pageItemMaterial->setObjectName(QStringLiteral("pageItemMaterial"));
        gridLayout_117 = new QGridLayout(pageItemMaterial);
        gridLayout_117->setObjectName(QStringLiteral("gridLayout_117"));
        groupMaterialAbilityValue = new QGroupBox(pageItemMaterial);
        groupMaterialAbilityValue->setObjectName(QStringLiteral("groupMaterialAbilityValue"));
        groupMaterialAbilityValue->setMinimumSize(QSize(0, 145));
        groupMaterialAbilityValue->setMaximumSize(QSize(16777215, 145));
        gridLayout_116 = new QGridLayout(groupMaterialAbilityValue);
        gridLayout_116->setObjectName(QStringLiteral("gridLayout_116"));
        groupMaterialMaxHp = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialMaxHp->setObjectName(QStringLiteral("groupMaterialMaxHp"));
        groupMaterialMaxHp->setFlat(true);
        gridLayout_109 = new QGridLayout(groupMaterialMaxHp);
        gridLayout_109->setObjectName(QStringLiteral("gridLayout_109"));
        spinMaterialMaxHp = new QSpinBox(groupMaterialMaxHp);
        spinMaterialMaxHp->setObjectName(QStringLiteral("spinMaterialMaxHp"));

        gridLayout_109->addWidget(spinMaterialMaxHp, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialMaxHp, 0, 0, 1, 1);

        groupMaterialMaxMp = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialMaxMp->setObjectName(QStringLiteral("groupMaterialMaxMp"));
        groupMaterialMaxMp->setFlat(true);
        gridLayout_110 = new QGridLayout(groupMaterialMaxMp);
        gridLayout_110->setObjectName(QStringLiteral("gridLayout_110"));
        spinMaterialMaxMp = new QSpinBox(groupMaterialMaxMp);
        spinMaterialMaxMp->setObjectName(QStringLiteral("spinMaterialMaxMp"));

        gridLayout_110->addWidget(spinMaterialMaxMp, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialMaxMp, 0, 1, 1, 1);

        groupMaterialAgility = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialAgility->setObjectName(QStringLiteral("groupMaterialAgility"));
        groupMaterialAgility->setFlat(true);
        gridLayout_113 = new QGridLayout(groupMaterialAgility);
        gridLayout_113->setObjectName(QStringLiteral("gridLayout_113"));
        spinMaterialAgility = new QSpinBox(groupMaterialAgility);
        spinMaterialAgility->setObjectName(QStringLiteral("spinMaterialAgility"));

        gridLayout_113->addWidget(spinMaterialAgility, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialAgility, 1, 0, 1, 1);

        groupMaterialMind = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialMind->setObjectName(QStringLiteral("groupMaterialMind"));
        groupMaterialMind->setFlat(true);
        gridLayout_115 = new QGridLayout(groupMaterialMind);
        gridLayout_115->setObjectName(QStringLiteral("gridLayout_115"));
        spinMaterialMind = new QSpinBox(groupMaterialMind);
        spinMaterialMind->setObjectName(QStringLiteral("spinMaterialMind"));

        gridLayout_115->addWidget(spinMaterialMind, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialMind, 1, 1, 1, 1);

        groupMaterialDefense = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialDefense->setObjectName(QStringLiteral("groupMaterialDefense"));
        groupMaterialDefense->setFlat(true);
        gridLayout_112 = new QGridLayout(groupMaterialDefense);
        gridLayout_112->setObjectName(QStringLiteral("gridLayout_112"));
        spinMaterialDefense = new QSpinBox(groupMaterialDefense);
        spinMaterialDefense->setObjectName(QStringLiteral("spinMaterialDefense"));

        gridLayout_112->addWidget(spinMaterialDefense, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialDefense, 1, 2, 1, 1);

        groupMaterialAttack = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialAttack->setObjectName(QStringLiteral("groupMaterialAttack"));
        groupMaterialAttack->setFlat(true);
        gridLayout_111 = new QGridLayout(groupMaterialAttack);
        gridLayout_111->setObjectName(QStringLiteral("gridLayout_111"));
        spinMaterialAttack = new QSpinBox(groupMaterialAttack);
        spinMaterialAttack->setObjectName(QStringLiteral("spinMaterialAttack"));

        gridLayout_111->addWidget(spinMaterialAttack, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialAttack, 0, 2, 1, 1);


        gridLayout_117->addWidget(groupMaterialAbilityValue, 0, 0, 1, 1);

        groupMaterialUsableBy = new QGroupBox(pageItemMaterial);
        groupMaterialUsableBy->setObjectName(QStringLiteral("groupMaterialUsableBy"));
        groupMaterialUsableBy->setMinimumSize(QSize(0, 150));
        gridLayout_108 = new QGridLayout(groupMaterialUsableBy);
        gridLayout_108->setObjectName(QStringLiteral("gridLayout_108"));
        listMaterialUsableBy = new QListWidget(groupMaterialUsableBy);
        QListWidgetItem *__qlistwidgetitem29 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem29->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem30 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem30->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem31 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem31->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem32 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem32->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem33 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem33->setCheckState(Qt::Checked);
        listMaterialUsableBy->setObjectName(QStringLiteral("listMaterialUsableBy"));

        gridLayout_108->addWidget(listMaterialUsableBy, 0, 0, 1, 1);


        gridLayout_117->addWidget(groupMaterialUsableBy, 1, 0, 1, 1);

        stackedItem->addWidget(pageItemMaterial);
        pageItemInvokeSkill = new QWidget();
        pageItemInvokeSkill->setObjectName(QStringLiteral("pageItemInvokeSkill"));
        gridLayout_146 = new QGridLayout(pageItemInvokeSkill);
        gridLayout_146->setObjectName(QStringLiteral("gridLayout_146"));
        gridLayout_146->setContentsMargins(0, 0, 0, 0);
        groupMaterialUsableBy_2 = new QGroupBox(pageItemInvokeSkill);
        groupMaterialUsableBy_2->setObjectName(QStringLiteral("groupMaterialUsableBy_2"));
        groupMaterialUsableBy_2->setMinimumSize(QSize(0, 150));
        groupMaterialUsableBy_2->setMaximumSize(QSize(230, 16777215));
        gridLayout_144 = new QGridLayout(groupMaterialUsableBy_2);
        gridLayout_144->setObjectName(QStringLiteral("gridLayout_144"));
        listMaterialUsableBy_2 = new QListWidget(groupMaterialUsableBy_2);
        QListWidgetItem *__qlistwidgetitem34 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem34->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem35 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem35->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem36 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem36->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem37 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem37->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem38 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem38->setCheckState(Qt::Checked);
        listMaterialUsableBy_2->setObjectName(QStringLiteral("listMaterialUsableBy_2"));

        gridLayout_144->addWidget(listMaterialUsableBy_2, 0, 0, 1, 1);


        gridLayout_146->addWidget(groupMaterialUsableBy_2, 0, 0, 3, 1);

        groupBookSkill_2 = new QGroupBox(pageItemInvokeSkill);
        groupBookSkill_2->setObjectName(QStringLiteral("groupBookSkill_2"));
        groupBookSkill_2->setMinimumSize(QSize(0, 55));
        groupBookSkill_2->setMaximumSize(QSize(16777215, 60));
        gridLayout_145 = new QGridLayout(groupBookSkill_2);
        gridLayout_145->setObjectName(QStringLiteral("gridLayout_145"));
        comboBookSkill_2 = new QComboBox(groupBookSkill_2);
        comboBookSkill_2->setObjectName(QStringLiteral("comboBookSkill_2"));

        gridLayout_145->addWidget(comboBookSkill_2, 0, 0, 1, 1);


        gridLayout_146->addWidget(groupBookSkill_2, 0, 1, 1, 1);

        groupScrollMessage = new QGroupBox(pageItemInvokeSkill);
        groupScrollMessage->setObjectName(QStringLiteral("groupScrollMessage"));
        groupScrollMessage->setMinimumSize(QSize(300, 0));
        groupScrollMessage->setMaximumSize(QSize(16777215, 90));
        gridLayout_143 = new QGridLayout(groupScrollMessage);
        gridLayout_143->setObjectName(QStringLiteral("gridLayout_143"));
        radioScrollMessageItem = new QRadioButton(groupScrollMessage);
        radioScrollMessageItem->setObjectName(QStringLiteral("radioScrollMessageItem"));

        gridLayout_143->addWidget(radioScrollMessageItem, 0, 0, 1, 1);

        radioScrollMessageSkill = new QRadioButton(groupScrollMessage);
        radioScrollMessageSkill->setObjectName(QStringLiteral("radioScrollMessageSkill"));

        gridLayout_143->addWidget(radioScrollMessageSkill, 1, 0, 1, 1);


        gridLayout_146->addWidget(groupScrollMessage, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 577, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_146->addItem(verticalSpacer, 2, 1, 1, 1);

        stackedItem->addWidget(pageItemInvokeSkill);
        pageItemVariable = new QWidget();
        pageItemVariable->setObjectName(QStringLiteral("pageItemVariable"));
        gridLayout_149 = new QGridLayout(pageItemVariable);
        gridLayout_149->setObjectName(QStringLiteral("gridLayout_149"));
        gridLayout_149->setContentsMargins(0, 0, 0, 0);
        groupItemVarType = new QGroupBox(pageItemVariable);
        groupItemVarType->setObjectName(QStringLiteral("groupItemVarType"));
        gridLayout_148 = new QGridLayout(groupItemVarType);
        gridLayout_148->setObjectName(QStringLiteral("gridLayout_148"));
        comboItemVarType = new QComboBox(groupItemVarType);
        comboItemVarType->setObjectName(QStringLiteral("comboItemVarType"));

        gridLayout_148->addWidget(comboItemVarType, 0, 0, 1, 1);


        gridLayout_149->addWidget(groupItemVarType, 0, 0, 1, 1);

        pushItemVarEdit = new QPushButton(pageItemVariable);
        pushItemVarEdit->setObjectName(QStringLiteral("pushItemVarEdit"));

        gridLayout_149->addWidget(pushItemVarEdit, 4, 0, 1, 2);

        groupItemVarZone = new QGroupBox(pageItemVariable);
        groupItemVarZone->setObjectName(QStringLiteral("groupItemVarZone"));
        gridLayout_150 = new QGridLayout(groupItemVarZone);
        gridLayout_150->setObjectName(QStringLiteral("gridLayout_150"));
        comboItemVarZone = new QComboBox(groupItemVarZone);
        comboItemVarZone->setObjectName(QStringLiteral("comboItemVarZone"));

        gridLayout_150->addWidget(comboItemVarZone, 3, 0, 1, 1);


        gridLayout_149->addWidget(groupItemVarZone, 0, 1, 1, 1);

        treeItemVarLocation = new QTreeWidget(pageItemVariable);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem->setFont(0, font1);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem1->setFont(0, font1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem2->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem3->setFont(0, font1);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        treeItemVarLocation->setObjectName(QStringLiteral("treeItemVarLocation"));

        gridLayout_149->addWidget(treeItemVarLocation, 1, 0, 1, 1);

        groupItemVarIndex = new QGroupBox(pageItemVariable);
        groupItemVarIndex->setObjectName(QStringLiteral("groupItemVarIndex"));
        gridLayout_147 = new QGridLayout(groupItemVarIndex);
        gridLayout_147->setObjectName(QStringLiteral("gridLayout_147"));
        listItemVarIndex = new QListWidget(groupItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        listItemVarIndex->setObjectName(QStringLiteral("listItemVarIndex"));

        gridLayout_147->addWidget(listItemVarIndex, 0, 1, 1, 1);

        gridItemVarFilter = new QGridLayout();
        gridItemVarFilter->setObjectName(QStringLiteral("gridItemVarFilter"));
        labelItemVarFilter = new QLabel(groupItemVarIndex);
        labelItemVarFilter->setObjectName(QStringLiteral("labelItemVarFilter"));

        gridItemVarFilter->addWidget(labelItemVarFilter, 0, 0, 1, 1);

        lineItemVarFilter = new QLineEdit(groupItemVarIndex);
        lineItemVarFilter->setObjectName(QStringLiteral("lineItemVarFilter"));

        gridItemVarFilter->addWidget(lineItemVarFilter, 0, 1, 1, 1);


        gridLayout_147->addLayout(gridItemVarFilter, 1, 1, 1, 1);


        gridLayout_149->addWidget(groupItemVarIndex, 1, 1, 1, 1);

        stackedItem->addWidget(pageItemVariable);
        pageItemCommonEvent = new QWidget();
        pageItemCommonEvent->setObjectName(QStringLiteral("pageItemCommonEvent"));
        gridLayout_153 = new QGridLayout(pageItemCommonEvent);
        gridLayout_153->setObjectName(QStringLiteral("gridLayout_153"));
        groupItemEvEvent = new QGroupBox(pageItemCommonEvent);
        groupItemEvEvent->setObjectName(QStringLiteral("groupItemEvEvent"));
        gridLayout_152 = new QGridLayout(groupItemEvEvent);
        gridLayout_152->setObjectName(QStringLiteral("gridLayout_152"));
        comboItemEvEvent = new QComboBox(groupItemEvEvent);
        comboItemEvEvent->setObjectName(QStringLiteral("comboItemEvEvent"));

        gridLayout_152->addWidget(comboItemEvEvent, 3, 0, 1, 1);


        gridLayout_153->addWidget(groupItemEvEvent, 0, 0, 1, 1);

        groupItemEvZone = new QGroupBox(pageItemCommonEvent);
        groupItemEvZone->setObjectName(QStringLiteral("groupItemEvZone"));
        gridLayout_151 = new QGridLayout(groupItemEvZone);
        gridLayout_151->setObjectName(QStringLiteral("gridLayout_151"));
        comboItemEvZone = new QComboBox(groupItemEvZone);
        comboItemEvZone->setObjectName(QStringLiteral("comboItemEvZone"));

        gridLayout_151->addWidget(comboItemEvZone, 3, 0, 1, 1);


        gridLayout_153->addWidget(groupItemEvZone, 0, 1, 1, 1);

        stackedItem->addWidget(pageItemCommonEvent);

        gridLayout_92->addWidget(stackedItem, 3, 0, 1, 2);

        scrollItemProperties->setWidget(scrollItemPropertiesContents);

        gridLayout_24->addWidget(scrollItemProperties, 0, 1, 1, 1);

        gridItemList = new QFrame(pageItem);
        gridItemList->setObjectName(QStringLiteral("gridItemList"));
        gridItemList->setMinimumSize(QSize(180, 0));
        gridItemList->setMaximumSize(QSize(180, 16777215));
        gridLayout_91 = new QGridLayout(gridItemList);
        gridLayout_91->setObjectName(QStringLiteral("gridLayout_91"));
        gridLayout_91->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(gridItemList);
        label_23->setObjectName(QStringLiteral("label_23"));
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
        label_23->setPalette(palette8);
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
        gridLayout_25 = new QGridLayout(pageAttribute);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        gridLayout_25->setContentsMargins(9, 9, 9, 9);
        label_10 = new QLabel(pageAttribute);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_25->addWidget(label_10, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageAttribute);
        pageCondition = new QWidget();
        pageCondition->setObjectName(QStringLiteral("pageCondition"));
        gridLayout_26 = new QGridLayout(pageCondition);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setContentsMargins(9, 9, 9, 9);
        label_11 = new QLabel(pageCondition);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_26->addWidget(label_11, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageCondition);
        pageFaceSet = new QWidget();
        pageFaceSet->setObjectName(QStringLiteral("pageFaceSet"));
        gridLayout_27 = new QGridLayout(pageFaceSet);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        gridLayout_27->setContentsMargins(9, 9, 9, 9);
        label_12 = new QLabel(pageFaceSet);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_27->addWidget(label_12, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageFaceSet);
        pageAnimationSet = new QWidget();
        pageAnimationSet->setObjectName(QStringLiteral("pageAnimationSet"));
        gridLayout_28 = new QGridLayout(pageAnimationSet);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        gridLayout_28->setContentsMargins(9, 9, 9, 9);
        label_13 = new QLabel(pageAnimationSet);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_28->addWidget(label_13, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageAnimationSet);
        pageVocabulary = new QWidget();
        pageVocabulary->setObjectName(QStringLiteral("pageVocabulary"));
        gridLayout_29 = new QGridLayout(pageVocabulary);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        gridLayout_29->setContentsMargins(9, 9, 9, 9);
        label_14 = new QLabel(pageVocabulary);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_29->addWidget(label_14, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageVocabulary);
        pageSystem = new QWidget();
        pageSystem->setObjectName(QStringLiteral("pageSystem"));
        gridLayout_30 = new QGridLayout(pageSystem);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        gridLayout_30->setContentsMargins(9, 9, 9, 9);
        label_15 = new QLabel(pageSystem);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_30->addWidget(label_15, 0, 0, 1, 1);

        stackedDatabase->addWidget(pageSystem);
        pageCommonEvents = new QWidget();
        pageCommonEvents->setObjectName(QStringLiteral("pageCommonEvents"));
        gridLayout_31 = new QGridLayout(pageCommonEvents);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        gridLayout_31->setContentsMargins(9, 9, 9, 9);
        label_16 = new QLabel(pageCommonEvents);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_31->addWidget(label_16, 0, 0, 1, 1);

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
        menubar->setGeometry(QRect(0, 0, 961, 21));
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
        stackedDatabase->setCurrentIndex(0);
        tabCurve->setCurrentIndex(0);
        stackedSkill->setCurrentIndex(2);
        stackedItem->setCurrentIndex(1);
        stackedEquipmentOptions->setCurrentIndex(0);
        comboMedicineUseCount->setCurrentIndex(1);
        comboBookUseCount->setCurrentIndex(1);


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
        pushFaceSets->setText(QApplication::translate("MainWindow", "Face Sets", 0));
        pushVocabulary->setText(QApplication::translate("MainWindow", "Vocabulary", 0));
        pushSystem->setText(QApplication::translate("MainWindow", "System", 0));
        pushCommonEvents->setText(QApplication::translate("MainWindow", "Common Events", 0));
        pushAnimationSet->setText(QApplication::translate("MainWindow", "Animation Sets", 0));
        pushCharaSets->setText(QApplication::translate("MainWindow", "Chara Sets", 0));
        pushActions->setText(QApplication::translate("MainWindow", "Actions", 0));
        label_27->setText(QApplication::translate("MainWindow", "Characters", 0));
        label_8->setText(QApplication::translate("MainWindow", "Curve", 0));
        groupCurveName->setTitle(QApplication::translate("MainWindow", "Name", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveHp), QApplication::translate("MainWindow", "Max HP", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveMp), QApplication::translate("MainWindow", "Max Mp", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveAttack), QApplication::translate("MainWindow", "Attack", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveDefense), QApplication::translate("MainWindow", "Defense", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveMind), QApplication::translate("MainWindow", "Mind", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveAgility), QApplication::translate("MainWindow", "Agility", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveExp), QApplication::translate("MainWindow", "Experience", 0));
        groupCurveLvl->setTitle(QApplication::translate("MainWindow", " Level", 0));
        spinCurveLvl->setSpecialValueText(QString());
        spinCurveLvl->setPrefix(QApplication::translate("MainWindow", "Lvl ", 0));
        groupCurveValue->setTitle(QApplication::translate("MainWindow", "Value", 0));
        spinCurveValue->setSpecialValueText(QString());
        spinCurveValue->setPrefix(QString());
        groupCurveCreation->setTitle(QApplication::translate("MainWindow", "Curve Creation", 0));
        pushCustomeCurve->setText(QApplication::translate("MainWindow", "Custome Curve ...", 0));
        pushCurveLow->setText(QApplication::translate("MainWindow", "Low Curve", 0));
        pushNormalCurve->setText(QApplication::translate("MainWindow", "NormalCurve", 0));
        pushExcellentCurve->setText(QApplication::translate("MainWindow", "Execellent Curve", 0));
        pushGeniusCurve->setText(QApplication::translate("MainWindow", "Genius Curve", 0));
        label_20->setText(QApplication::translate("MainWindow", "Chara Set", 0));
        groupCharaSetName->setTitle(QApplication::translate("MainWindow", "Name", 0));
        groupCharaSetAction->setTitle(QApplication::translate("MainWindow", "Map Action", 0));

        const bool __sortingEnabled = listCharaSetAction->isSortingEnabled();
        listCharaSetAction->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listCharaSetAction->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "0001: Chara Zack", 0));
        QListWidgetItem *___qlistwidgetitem1 = listCharaSetAction->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "0002: Chara Elain", 0));
        QListWidgetItem *___qlistwidgetitem2 = listCharaSetAction->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "0003: Chara Horst", 0));
        QListWidgetItem *___qlistwidgetitem3 = listCharaSetAction->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "0004: Chara Eragon", 0));
        QListWidgetItem *___qlistwidgetitem4 = listCharaSetAction->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "0005: Chara Murtagh", 0));
        listCharaSetAction->setSortingEnabled(__sortingEnabled);

        groupCharaSetGraphic->setTitle(QApplication::translate("MainWindow", "Chara", 0));
        pushCharaSetChange->setText(QApplication::translate("MainWindow", "Change ...", 0));
        label_21->setText(QApplication::translate("MainWindow", "Skills", 0));
        groupSkilltName->setTitle(QApplication::translate("MainWindow", "Name", 0));
        groupSkillCost->setTitle(QApplication::translate("MainWindow", "Mp Cost", 0));
        radioSkillFixedCost->setText(QApplication::translate("MainWindow", "Fixed", 0));
        radioSkillPercentCost->setText(QApplication::translate("MainWindow", "Percent", 0));
        spinSkillPercentCost->setPrefix(QApplication::translate("MainWindow", "% ", 0));
        groupSkillDesc->setTitle(QApplication::translate("MainWindow", "Description", 0));
        groupSkillType->setTitle(QApplication::translate("MainWindow", "Skill Type", 0));
        comboSkillType->clear();
        comboSkillType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Normal", 0)
         << QApplication::translate("MainWindow", "Teleport", 0)
         << QApplication::translate("MainWindow", "Escape", 0)
         << QApplication::translate("MainWindow", "Variable", 0)
         << QApplication::translate("MainWindow", "Call Event", 0)
        );
        groupSkillDamage->setTitle(QApplication::translate("MainWindow", "Basic Damage", 0));
        groupSkillReduce->setTitle(QApplication::translate("MainWindow", "Reduce", 0));
        checkSkillReduceHp->setText(QApplication::translate("MainWindow", "Hp", 0));
        checkSkillReduceMind->setText(QApplication::translate("MainWindow", "Mind", 0));
        checkSkillReduceMp->setText(QApplication::translate("MainWindow", "Mp", 0));
        checkSkillReduceAgility->setText(QApplication::translate("MainWindow", "Agility", 0));
        checkSkillReduceAttack->setText(QApplication::translate("MainWindow", "Attack", 0));
        checkSkillAbsorbs->setText(QApplication::translate("MainWindow", "Absorbtion", 0));
        checkSkillReduceDefense->setText(QApplication::translate("MainWindow", "Defense", 0));
        checkSkillIgnoreDefense->setText(QApplication::translate("MainWindow", "Ignore Def.", 0));
        groupSkillSuccessRate->setTitle(QApplication::translate("MainWindow", "Success Rate", 0));
        spinSkillSuccessRate->setPrefix(QApplication::translate("MainWindow", "% ", 0));
        groupSkillMindChance->setTitle(QApplication::translate("MainWindow", "Min Chance", 0));
        QTableWidgetItem *___qtablewidgetitem = tableSkillA->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableSkillA->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableSkillA->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableSkillA->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableSkillA->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableSkillA->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableSkillA->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableSkillA->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableSkillA->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableSkillA->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableSkillA->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableSkillA->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "New Row", 0));

        const bool __sortingEnabled1 = tableSkillA->isSortingEnabled();
        tableSkillA->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableSkillA->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableSkillA->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableSkillA->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableSkillA->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableSkillA->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableSkillA->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableSkillA->item(0, 6);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableSkillA->item(0, 7);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableSkillA->item(0, 8);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableSkillA->item(0, 9);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableSkillA->item(0, 10);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "10", 0));
        tableSkillA->setSortingEnabled(__sortingEnabled1);

        groupSkillMindChance_2->setTitle(QApplication::translate("MainWindow", "Mind Chance", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableSkillB->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableSkillB->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableSkillB->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableSkillB->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableSkillB->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableSkillB->horizontalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableSkillB->horizontalHeaderItem(6);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableSkillB->horizontalHeaderItem(7);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableSkillB->horizontalHeaderItem(8);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableSkillB->horizontalHeaderItem(9);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableSkillB->horizontalHeaderItem(10);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableSkillB->verticalHeaderItem(0);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "New Row", 0));

        const bool __sortingEnabled2 = tableSkillB->isSortingEnabled();
        tableSkillB->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem35 = tableSkillB->item(0, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableSkillB->item(0, 1);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableSkillB->item(0, 2);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableSkillB->item(0, 3);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableSkillB->item(0, 4);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableSkillB->item(0, 5);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableSkillB->item(0, 6);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableSkillB->item(0, 7);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableSkillB->item(0, 8);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableSkillB->item(0, 9);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableSkillB->item(0, 10);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "10", 0));
        tableSkillB->setSortingEnabled(__sortingEnabled2);

        groupSkillVariance->setTitle(QApplication::translate("MainWindow", "Variance", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableSkillC->horizontalHeaderItem(0);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableSkillC->horizontalHeaderItem(1);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableSkillC->horizontalHeaderItem(2);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableSkillC->horizontalHeaderItem(3);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableSkillC->horizontalHeaderItem(4);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableSkillC->horizontalHeaderItem(5);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableSkillC->horizontalHeaderItem(6);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableSkillC->horizontalHeaderItem(7);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableSkillC->horizontalHeaderItem(8);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableSkillC->horizontalHeaderItem(9);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableSkillC->horizontalHeaderItem(10);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableSkillC->verticalHeaderItem(0);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "New Row", 0));

        const bool __sortingEnabled3 = tableSkillC->isSortingEnabled();
        tableSkillC->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem58 = tableSkillC->item(0, 0);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableSkillC->item(0, 1);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableSkillC->item(0, 2);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem61 = tableSkillC->item(0, 3);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableSkillC->item(0, 4);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableSkillC->item(0, 5);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableSkillC->item(0, 6);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableSkillC->item(0, 7);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableSkillC->item(0, 8);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableSkillC->item(0, 9);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem68 = tableSkillC->item(0, 10);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "10", 0));
        tableSkillC->setSortingEnabled(__sortingEnabled3);

        groupSkillConditionEffect->setTitle(QApplication::translate("MainWindow", "Condition Effect", 0));
        radioSkillCausesCondition->setText(QApplication::translate("MainWindow", "Causes", 0));
        radioSkillCuresCondition->setText(QApplication::translate("MainWindow", "Cures", 0));

        const bool __sortingEnabled4 = listSkillConditionEffect->isSortingEnabled();
        listSkillConditionEffect->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = listSkillConditionEffect->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Poison", 0));
        listSkillConditionEffect->setSortingEnabled(__sortingEnabled4);

        groupSkillAttribute->setTitle(QApplication::translate("MainWindow", "Attribute Defense", 0));
        checkSkillReduceAttributeDefense->setText(QApplication::translate("MainWindow", "Decrese Attribute Def", 0));

        const bool __sortingEnabled5 = listSkillAttribute->isSortingEnabled();
        listSkillAttribute->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = listSkillAttribute->item(0);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Fire", 0));
        listSkillAttribute->setSortingEnabled(__sortingEnabled5);

        groupSkillBatleAnimation->setTitle(QApplication::translate("MainWindow", "Battle Animation", 0));
        groupSkillCharacterAnimation->setTitle(QApplication::translate("MainWindow", "Character Animation", 0));
        pushSkillCharacterAnimation->setText(QApplication::translate("MainWindow", "Set...", 0));
        groupSkillTeleportSoundEffect->setTitle(QApplication::translate("MainWindow", "Sound Effect", 0));
        toolSkillTeleportSelectSound->setText(QApplication::translate("MainWindow", "...", 0));
        groupSkillEscapeSoundEffect->setTitle(QApplication::translate("MainWindow", "Sound Effect", 0));
        toolSkillEscapeSelectSound->setText(QApplication::translate("MainWindow", "...", 0));
        groupSkillVariableSoundEffect->setTitle(QApplication::translate("MainWindow", "Sound Effect", 0));
        toolSkillVariableSelectSound->setText(QApplication::translate("MainWindow", "...", 0));
        groupSkillVariable->setTitle(QApplication::translate("MainWindow", "Variable", 0));
        toolSkillVariableSelectVar->setText(QApplication::translate("MainWindow", "...", 0));
        groupSkillVariableValue->setTitle(QApplication::translate("MainWindow", "Value", 0));
        toolSkillVariableSelectValue->setText(QApplication::translate("MainWindow", "...", 0));
        groupSkillVariableAt->setTitle(QApplication::translate("MainWindow", "Avaible at", 0));
        checkSkillVariableAtMap->setText(QApplication::translate("MainWindow", "Map", 0));
        checkSkillVariableAtBattle->setText(QApplication::translate("MainWindow", "Battle", 0));
        groupSkillCommonEventSoundEffect->setTitle(QApplication::translate("MainWindow", "Sound Effect", 0));
        toolSkillCommonEventSelectSound->setText(QApplication::translate("MainWindow", "...", 0));
        groupSkillSelectCommonEvent->setTitle(QApplication::translate("MainWindow", "CommonEvent", 0));
        groupSkillCommonEventAt->setTitle(QApplication::translate("MainWindow", "Avaible at", 0));
        checkSkillCommonEventAtMap->setText(QApplication::translate("MainWindow", "Map", 0));
        checkSkillCommonEventAtBattle->setText(QApplication::translate("MainWindow", "Battle", 0));
        groupActionsName->setTitle(QApplication::translate("MainWindow", "Name", 0));
        groupActionsConditions->setTitle(QApplication::translate("MainWindow", "Conditions", 0));

        const bool __sortingEnabled6 = listActionsConditions->isSortingEnabled();
        listActionsConditions->setSortingEnabled(false);
        listActionsConditions->setSortingEnabled(__sortingEnabled6);

        groupActionsFinalEvent->setTitle(QApplication::translate("MainWindow", "Final Event", 0));
        groupActionsInitialEvent->setTitle(QApplication::translate("MainWindow", "Initial Event", 0));
        groupActionsMovement->setTitle(QApplication::translate("MainWindow", "AllowMovement", 0));
        checkActionsMoveUp->setText(QApplication::translate("MainWindow", "Up", 0));
        checkActionsMoveDown->setText(QApplication::translate("MainWindow", "Down", 0));
        checkActionsMoveLeft->setText(QApplication::translate("MainWindow", "Left", 0));
        checkActionsMoveRight->setText(QApplication::translate("MainWindow", "Right", 0));
        label_22->setText(QApplication::translate("MainWindow", "Actions", 0));
        comboActionType->clear();
        comboActionType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Map Actions", 0)
         << QApplication::translate("MainWindow", "Battle Actions", 0)
        );
        groupItemsName->setTitle(QApplication::translate("MainWindow", "Name", 0));
        groupItemDesc->setTitle(QApplication::translate("MainWindow", "Description", 0));
        groupItemPrice->setTitle(QApplication::translate("MainWindow", "Price", 0));
        groupEquipmentSlotA->setTitle(QApplication::translate("MainWindow", "First Equipment Slot", 0));
        comboEquipmentSlotA->clear();
        comboEquipmentSlotA->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Weapon", 0)
         << QApplication::translate("MainWindow", "Shield", 0)
         << QApplication::translate("MainWindow", "Armor", 0)
         << QApplication::translate("MainWindow", "Helmet", 0)
         << QApplication::translate("MainWindow", "Accesory", 0)
        );
        groupEquipmentUsableBy->setTitle(QApplication::translate("MainWindow", "Usable by:", 0));

        const bool __sortingEnabled7 = listEquipmentUsableBy->isSortingEnabled();
        listEquipmentUsableBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = listEquipmentUsableBy->item(0);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem8 = listEquipmentUsableBy->item(1);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem9 = listEquipmentUsableBy->item(2);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem10 = listEquipmentUsableBy->item(3);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem11 = listEquipmentUsableBy->item(4);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "Murtag", 0));
        listEquipmentUsableBy->setSortingEnabled(__sortingEnabled7);

        groupEquipmentValueChange->setTitle(QApplication::translate("MainWindow", "Value Change", 0));
        groupEquipmentAttack->setTitle(QApplication::translate("MainWindow", "Attack", 0));
        groupEquipmentMind->setTitle(QApplication::translate("MainWindow", "Mind", 0));
        groupEquipmentDefense->setTitle(QApplication::translate("MainWindow", "Defense", 0));
        groupEquipmentAgility->setTitle(QApplication::translate("MainWindow", "Agility", 0));
        groupEquipmentAttibute->setTitle(QApplication::translate("MainWindow", "Attribute:", 0));

        const bool __sortingEnabled8 = listEquipmentAttibute->isSortingEnabled();
        listEquipmentAttibute->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem12 = listEquipmentAttibute->item(0);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "Fire", 0));
        listEquipmentAttibute->setSortingEnabled(__sortingEnabled8);

        groupEquipmentConditionEffect->setTitle(QApplication::translate("MainWindow", "Condition Effect", 0));
        radioEquipmentCausesCondition->setText(QApplication::translate("MainWindow", "Causes", 0));
        radioEquipmentCuresCondition->setText(QApplication::translate("MainWindow", "Cures", 0));

        const bool __sortingEnabled9 = listEquipmentConditionEffect->isSortingEnabled();
        listEquipmentConditionEffect->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem13 = listEquipmentConditionEffect->item(0);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "Poison", 0));
        listEquipmentConditionEffect->setSortingEnabled(__sortingEnabled9);

        groupEquipmentConditionChance->setTitle(QApplication::translate("MainWindow", "GroupBox", 0));
        spinEquipmentConditionChance->setSuffix(QApplication::translate("MainWindow", " %", 0));
        groupEquipmentSkill->setTitle(QApplication::translate("MainWindow", "Adds Skill:", 0));
        groupWeaponOptions->setTitle(QApplication::translate("MainWindow", "Weapon only options:", 0));
        groupWeaponSecuence->setTitle(QApplication::translate("MainWindow", "Action Secuence", 0));
        pushWeaponSecuence->setText(QApplication::translate("MainWindow", "Edit ...", 0));
        groupWeaponDamageOptions->setTitle(QApplication::translate("MainWindow", "Damage", 0));
        groupWeaponMpCost->setTitle(QApplication::translate("MainWindow", "MP Cost", 0));
        groupWeaponBaseDamage->setTitle(QApplication::translate("MainWindow", "Base Damage", 0));
        groupWeaponCriticalChance->setTitle(QApplication::translate("MainWindow", "Critical Hit", 0));
        groupWeaponTargetAnimation->setTitle(QApplication::translate("MainWindow", "Target Animation", 0));
        groupWeaponOptions_2->setTitle(QApplication::translate("MainWindow", "Options", 0));
        checkWeaponPreventiveAttack->setText(QApplication::translate("MainWindow", "Preventive attack", 0));
        checkWeaponAttackTwise->setText(QApplication::translate("MainWindow", "Attack twise", 0));
        checkWeaponIgnoreEvasion->setText(QApplication::translate("MainWindow", "Ignore evasion", 0));
        checkWeaponCursed->setText(QApplication::translate("MainWindow", "Cursed", 0));
        checkWeaponAttackAllEnemies->setText(QApplication::translate("MainWindow", "Attack all enemies", 0));
        groupArmorOptions->setTitle(QApplication::translate("MainWindow", "Armor only options:", 0));
        groupArmorOptions_2->setTitle(QApplication::translate("MainWindow", "Options", 0));
        checkArmorPreventCritical->setText(QApplication::translate("MainWindow", "Prevents critical hit", 0));
        checkArmorEvadeAttack->setText(QApplication::translate("MainWindow", "Evade attack", 0));
        checkArmorConsumeHalfMp->setText(QApplication::translate("MainWindow", "Consumes half MP", 0));
        checkArmorPreventsDmgOnField->setText(QApplication::translate("MainWindow", "Prevents damage on field", 0));
        checkArmorCursed->setText(QApplication::translate("MainWindow", "Cursed", 0));
        groupEquipmentSlotB->setTitle(QApplication::translate("MainWindow", "Second Equipment Slot", 0));
        groupMedicineRecover->setTitle(QApplication::translate("MainWindow", "Recovers", 0));
        label_9->setText(QApplication::translate("MainWindow", "HP:", 0));
        label_25->setText(QApplication::translate("MainWindow", "+", 0));
        spinMedicineRecoverHpPercent->setPrefix(QApplication::translate("MainWindow", "% ", 0));
        label_24->setText(QApplication::translate("MainWindow", "MP", 0));
        label_26->setText(QApplication::translate("MainWindow", "+", 0));
        spinMedicineRecoverMpPercent->setPrefix(QApplication::translate("MainWindow", "% ", 0));
        groupMedicineOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
        checkMedicineOnlyOnField->setText(QApplication::translate("MainWindow", "Only usable on Field", 0));
        checkMedicineOnlyOnFainted->setText(QApplication::translate("MainWindow", "Only afect fainted characters", 0));
        groupMedicineCausesCondition->setTitle(QApplication::translate("MainWindow", "Change Condition to:", 0));

        const bool __sortingEnabled10 = listMedicineCausesCondition->isSortingEnabled();
        listMedicineCausesCondition->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem14 = listMedicineCausesCondition->item(0);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "Death", 0));
        QListWidgetItem *___qlistwidgetitem15 = listMedicineCausesCondition->item(1);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "Poison", 0));
        QListWidgetItem *___qlistwidgetitem16 = listMedicineCausesCondition->item(2);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "Darkness", 0));
        QListWidgetItem *___qlistwidgetitem17 = listMedicineCausesCondition->item(3);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "Silence", 0));
        QListWidgetItem *___qlistwidgetitem18 = listMedicineCausesCondition->item(4);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "Berserk", 0));
        QListWidgetItem *___qlistwidgetitem19 = listMedicineCausesCondition->item(5);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "Chaos", 0));
        QListWidgetItem *___qlistwidgetitem20 = listMedicineCausesCondition->item(6);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "Sleep", 0));
        QListWidgetItem *___qlistwidgetitem21 = listMedicineCausesCondition->item(7);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "Paralyze", 0));
        QListWidgetItem *___qlistwidgetitem22 = listMedicineCausesCondition->item(8);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "Stagger", 0));
        QListWidgetItem *___qlistwidgetitem23 = listMedicineCausesCondition->item(9);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "Surprise", 0));
        listMedicineCausesCondition->setSortingEnabled(__sortingEnabled10);

        groupMedicineUsableBy->setTitle(QApplication::translate("MainWindow", "Usable by:", 0));

        const bool __sortingEnabled11 = listMedicineUsableBy->isSortingEnabled();
        listMedicineUsableBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem24 = listMedicineUsableBy->item(0);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem25 = listMedicineUsableBy->item(1);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem26 = listMedicineUsableBy->item(2);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem27 = listMedicineUsableBy->item(3);
        ___qlistwidgetitem27->setText(QApplication::translate("MainWindow", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem28 = listMedicineUsableBy->item(4);
        ___qlistwidgetitem28->setText(QApplication::translate("MainWindow", "Murtag", 0));
        listMedicineUsableBy->setSortingEnabled(__sortingEnabled11);

        groupMedicineEffectRange->setTitle(QApplication::translate("MainWindow", "Effect Range", 0));
        comboMedicineEfectRange->clear();
        comboMedicineEfectRange->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Single target", 0)
         << QApplication::translate("MainWindow", "Multiple target", 0)
         << QApplication::translate("MainWindow", "group target", 0)
        );
        groupMedicineUseCount->setTitle(QApplication::translate("MainWindow", "Number of uses", 0));
        comboMedicineUseCount->clear();
        comboMedicineUseCount->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Unlimited", 0)
         << QApplication::translate("MainWindow", "1 Standard", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        groupBookUseCount->setTitle(QApplication::translate("MainWindow", "Number of uses", 0));
        comboBookUseCount->clear();
        comboBookUseCount->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Unlimited", 0)
         << QApplication::translate("MainWindow", "1 Standard", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        groupBookSkill->setTitle(QApplication::translate("MainWindow", "Skill to be learned", 0));
        comboBookSkill->clear();
        comboBookSkill->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Poison", 0)
         << QApplication::translate("MainWindow", "Heal", 0)
         << QApplication::translate("MainWindow", "Spark", 0)
         << QApplication::translate("MainWindow", "Warp", 0)
         << QApplication::translate("MainWindow", "Egress", 0)
        );
        groupBookLearnedBy->setTitle(QApplication::translate("MainWindow", "Learned by:", 0));

        const bool __sortingEnabled12 = listBookLearnedBy->isSortingEnabled();
        listBookLearnedBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem29 = listBookLearnedBy->item(0);
        ___qlistwidgetitem29->setText(QApplication::translate("MainWindow", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem30 = listBookLearnedBy->item(1);
        ___qlistwidgetitem30->setText(QApplication::translate("MainWindow", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem31 = listBookLearnedBy->item(2);
        ___qlistwidgetitem31->setText(QApplication::translate("MainWindow", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem32 = listBookLearnedBy->item(3);
        ___qlistwidgetitem32->setText(QApplication::translate("MainWindow", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem33 = listBookLearnedBy->item(4);
        ___qlistwidgetitem33->setText(QApplication::translate("MainWindow", "Murtag", 0));
        listBookLearnedBy->setSortingEnabled(__sortingEnabled12);

        groupMaterialAbilityValue->setTitle(QApplication::translate("MainWindow", "Change Ability Value", 0));
        groupMaterialMaxHp->setTitle(QApplication::translate("MainWindow", "Max Hp", 0));
        groupMaterialMaxMp->setTitle(QApplication::translate("MainWindow", "Max Mp", 0));
        groupMaterialAgility->setTitle(QApplication::translate("MainWindow", "Agility", 0));
        groupMaterialMind->setTitle(QApplication::translate("MainWindow", "Mind", 0));
        groupMaterialDefense->setTitle(QApplication::translate("MainWindow", "Defense", 0));
        groupMaterialAttack->setTitle(QApplication::translate("MainWindow", "Attack", 0));
        groupMaterialUsableBy->setTitle(QApplication::translate("MainWindow", "Usable by:", 0));

        const bool __sortingEnabled13 = listMaterialUsableBy->isSortingEnabled();
        listMaterialUsableBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem34 = listMaterialUsableBy->item(0);
        ___qlistwidgetitem34->setText(QApplication::translate("MainWindow", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem35 = listMaterialUsableBy->item(1);
        ___qlistwidgetitem35->setText(QApplication::translate("MainWindow", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem36 = listMaterialUsableBy->item(2);
        ___qlistwidgetitem36->setText(QApplication::translate("MainWindow", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem37 = listMaterialUsableBy->item(3);
        ___qlistwidgetitem37->setText(QApplication::translate("MainWindow", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem38 = listMaterialUsableBy->item(4);
        ___qlistwidgetitem38->setText(QApplication::translate("MainWindow", "Murtag", 0));
        listMaterialUsableBy->setSortingEnabled(__sortingEnabled13);

        groupMaterialUsableBy_2->setTitle(QApplication::translate("MainWindow", "Usable by:", 0));

        const bool __sortingEnabled14 = listMaterialUsableBy_2->isSortingEnabled();
        listMaterialUsableBy_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem39 = listMaterialUsableBy_2->item(0);
        ___qlistwidgetitem39->setText(QApplication::translate("MainWindow", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem40 = listMaterialUsableBy_2->item(1);
        ___qlistwidgetitem40->setText(QApplication::translate("MainWindow", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem41 = listMaterialUsableBy_2->item(2);
        ___qlistwidgetitem41->setText(QApplication::translate("MainWindow", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem42 = listMaterialUsableBy_2->item(3);
        ___qlistwidgetitem42->setText(QApplication::translate("MainWindow", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem43 = listMaterialUsableBy_2->item(4);
        ___qlistwidgetitem43->setText(QApplication::translate("MainWindow", "Murtag", 0));
        listMaterialUsableBy_2->setSortingEnabled(__sortingEnabled14);

        groupBookSkill_2->setTitle(QApplication::translate("MainWindow", "Skill to be used", 0));
        comboBookSkill_2->clear();
        comboBookSkill_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Poison", 0)
         << QApplication::translate("MainWindow", "Heal", 0)
         << QApplication::translate("MainWindow", "Spark", 0)
         << QApplication::translate("MainWindow", "Warp", 0)
         << QApplication::translate("MainWindow", "Egress", 0)
        );
        groupScrollMessage->setTitle(QApplication::translate("MainWindow", "Message", 0));
        radioScrollMessageItem->setText(QApplication::translate("MainWindow", "Item Message", 0));
        radioScrollMessageSkill->setText(QApplication::translate("MainWindow", "Skill Message", 0));
        groupItemVarType->setTitle(QApplication::translate("MainWindow", "Variable Type", 0));
        comboItemVarType->clear();
        comboItemVarType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Integer", 0)
         << QApplication::translate("MainWindow", "Switch", 0)
         << QApplication::translate("MainWindow", "String", 0)
         << QApplication::translate("MainWindow", "Image", 0)
         << QApplication::translate("MainWindow", "Resource", 0)
        );
        pushItemVarEdit->setText(QApplication::translate("MainWindow", "Edit Value ...", 0));
        groupItemVarZone->setTitle(QApplication::translate("MainWindow", "Usage Allowance", 0));
        comboItemVarZone->clear();
        comboItemVarZone->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Field", 0)
         << QApplication::translate("MainWindow", "Battle", 0)
         << QApplication::translate("MainWindow", "Both", 0)
        );
        QTreeWidgetItem *___qtreewidgetitem = treeItemVarLocation->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Location", 0));

        const bool __sortingEnabled15 = treeItemVarLocation->isSortingEnabled();
        treeItemVarLocation->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeItemVarLocation->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Global", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeItemVarLocation->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Common Events", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeItemVarLocation->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Items", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Item1", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Item2", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeItemVarLocation->topLevelItem(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Maps", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Map1", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "EV000", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem6->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Map2", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "EV000", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "EV001", 0));
        treeItemVarLocation->setSortingEnabled(__sortingEnabled15);

        groupItemVarIndex->setTitle(QApplication::translate("MainWindow", "Variable Index", 0));

        const bool __sortingEnabled16 = listItemVarIndex->isSortingEnabled();
        listItemVarIndex->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem44 = listItemVarIndex->item(0);
        ___qlistwidgetitem44->setText(QApplication::translate("MainWindow", "0001: A", 0));
        QListWidgetItem *___qlistwidgetitem45 = listItemVarIndex->item(1);
        ___qlistwidgetitem45->setText(QApplication::translate("MainWindow", "0002: B", 0));
        QListWidgetItem *___qlistwidgetitem46 = listItemVarIndex->item(2);
        ___qlistwidgetitem46->setText(QApplication::translate("MainWindow", "0003: C", 0));
        QListWidgetItem *___qlistwidgetitem47 = listItemVarIndex->item(3);
        ___qlistwidgetitem47->setText(QApplication::translate("MainWindow", "0004:", 0));
        QListWidgetItem *___qlistwidgetitem48 = listItemVarIndex->item(4);
        ___qlistwidgetitem48->setText(QApplication::translate("MainWindow", "0005:", 0));
        listItemVarIndex->setSortingEnabled(__sortingEnabled16);

        labelItemVarFilter->setText(QApplication::translate("MainWindow", "Filter: ", 0));
        groupItemEvEvent->setTitle(QApplication::translate("MainWindow", "Common Event", 0));
        comboItemEvEvent->clear();
        comboItemEvEvent->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "EV000", 0)
         << QApplication::translate("MainWindow", "EV001", 0)
         << QApplication::translate("MainWindow", "EV002", 0)
        );
        groupItemEvZone->setTitle(QApplication::translate("MainWindow", "Usage Allowance", 0));
        comboItemEvZone->clear();
        comboItemEvZone->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Field", 0)
         << QApplication::translate("MainWindow", "Battle", 0)
         << QApplication::translate("MainWindow", "Both", 0)
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
        label_10->setText(QApplication::translate("MainWindow", "Page Attibute", 0));
        label_11->setText(QApplication::translate("MainWindow", "Page Condittion", 0));
        label_12->setText(QApplication::translate("MainWindow", "Page FaceSet", 0));
        label_13->setText(QApplication::translate("MainWindow", "Page Animation Set", 0));
        label_14->setText(QApplication::translate("MainWindow", "Page Vocabulary", 0));
        label_15->setText(QApplication::translate("MainWindow", "Page System", 0));
        label_16->setText(QApplication::translate("MainWindow", "Page Common Events", 0));
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
