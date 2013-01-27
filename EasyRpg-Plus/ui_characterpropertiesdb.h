/********************************************************************************
** Form generated from reading UI file 'characterpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:40 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERPROPERTIESDB_H
#define UI_CHARACTERPROPERTIESDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterPropertiesDB
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupCharacterName;
    QGridLayout *gridLayout_6;
    QLineEdit *lineCharacterName;
    QGroupBox *groupCharacterTitle;
    QGridLayout *gridLayout_7;
    QLineEdit *lineCharacterTitle;
    QGroupBox *groupCharacterMinLvl;
    QGridLayout *gridLayout_12;
    QSpinBox *spinMinLvl;
    QGroupBox *groupCharacterMaxLvl;
    QGridLayout *gridLayout_13;
    QSpinBox *spinMaxLvl;
    QGroupBox *groupCharacterVar;
    QGridLayout *gridLayout_23;
    QPushButton *pushCharacterVar;
    QGroupBox *groupCharacterCritical;
    QGridLayout *gridLayout_14;
    QSpinBox *spinCritical;
    QGroupBox *groupCharacterCurve;
    QGridLayout *gridLayout_11;
    QComboBox *comboCharacterCurve;
    QGroupBox *groupCharacterChara;
    QGridLayout *gridLayout_15;
    QComboBox *comboChara;
    QGraphicsView *graphicsChara;
    QGroupBox *groupCharacterFaceSet;
    QGridLayout *gridLayout_17;
    QComboBox *comboFaceSet;
    QGraphicsView *graphicsFaceSet;
    QGroupBox *groupCharacterAnimationSet;
    QGridLayout *gridLayout_16;
    QComboBox *comboAnimationSet;
    QGraphicsView *graphicsAnimationSet;
    QGroupBox *groupCharacterOptions;
    QGridLayout *gridLayout_5;
    QCheckBox *checkDualSword;
    QCheckBox *checkAI;
    QCheckBox *checkFixedEquipment;
    QCheckBox *checkStrongDefense;
    QGroupBox *groupCharacterEquipment;
    QGridLayout *gridLayout_8;
    QLabel *label_2;
    QComboBox *comboWeapon;
    QLabel *label_3;
    QComboBox *comboShield;
    QLabel *label_4;
    QComboBox *comboArmor;
    QLabel *label_5;
    QComboBox *comboHelmet;
    QLabel *label_6;
    QComboBox *comboAccesory;
    QGroupBox *groupCharacterUnarmedAnimation;
    QGridLayout *gridLayout_20;
    QComboBox *comboUnarmedAnimation;
    QGroupBox *groupCharacterSkill;
    QGridLayout *gridLayout_10;
    QTableWidget *tableCharacterSkill;
    QGroupBox *groupCharacterConditionEffect;
    QGridLayout *gridLayout_18;
    QTableWidget *tableCharacterConditionEffect;
    QGroupBox *groupCharacterAfflictedCondition;
    QGridLayout *gridLayout_19;
    QTableWidget *tableAfflictedCondition;

    void setupUi(QWidget *CharacterPropertiesDB)
    {
        if (CharacterPropertiesDB->objectName().isEmpty())
            CharacterPropertiesDB->setObjectName(QStringLiteral("CharacterPropertiesDB"));
        CharacterPropertiesDB->resize(597, 1224);
        CharacterPropertiesDB->setMinimumSize(QSize(0, 1224));
        CharacterPropertiesDB->setMaximumSize(QSize(16777215, 1224));
        gridLayout = new QGridLayout(CharacterPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupCharacterName = new QGroupBox(CharacterPropertiesDB);
        groupCharacterName->setObjectName(QStringLiteral("groupCharacterName"));
        groupCharacterName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupCharacterName->sizePolicy().hasHeightForWidth());
        groupCharacterName->setSizePolicy(sizePolicy);
        groupCharacterName->setMinimumSize(QSize(0, 50));
        groupCharacterName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_6 = new QGridLayout(groupCharacterName);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lineCharacterName = new QLineEdit(groupCharacterName);
        lineCharacterName->setObjectName(QStringLiteral("lineCharacterName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineCharacterName->sizePolicy().hasHeightForWidth());
        lineCharacterName->setSizePolicy(sizePolicy1);
        lineCharacterName->setMinimumSize(QSize(0, 0));

        gridLayout_6->addWidget(lineCharacterName, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterName, 0, 0, 1, 2);

        groupCharacterTitle = new QGroupBox(CharacterPropertiesDB);
        groupCharacterTitle->setObjectName(QStringLiteral("groupCharacterTitle"));
        sizePolicy.setHeightForWidth(groupCharacterTitle->sizePolicy().hasHeightForWidth());
        groupCharacterTitle->setSizePolicy(sizePolicy);
        groupCharacterTitle->setMinimumSize(QSize(0, 50));
        groupCharacterTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_7 = new QGridLayout(groupCharacterTitle);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        lineCharacterTitle = new QLineEdit(groupCharacterTitle);
        lineCharacterTitle->setObjectName(QStringLiteral("lineCharacterTitle"));

        gridLayout_7->addWidget(lineCharacterTitle, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterTitle, 1, 0, 1, 2);

        groupCharacterMinLvl = new QGroupBox(CharacterPropertiesDB);
        groupCharacterMinLvl->setObjectName(QStringLiteral("groupCharacterMinLvl"));
        sizePolicy.setHeightForWidth(groupCharacterMinLvl->sizePolicy().hasHeightForWidth());
        groupCharacterMinLvl->setSizePolicy(sizePolicy);
        groupCharacterMinLvl->setMinimumSize(QSize(0, 55));
        groupCharacterMinLvl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_12 = new QGridLayout(groupCharacterMinLvl);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        spinMinLvl = new QSpinBox(groupCharacterMinLvl);
        spinMinLvl->setObjectName(QStringLiteral("spinMinLvl"));
        spinMinLvl->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinMinLvl->setAccelerated(false);
        spinMinLvl->setMinimum(1);

        gridLayout_12->addWidget(spinMinLvl, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterMinLvl, 2, 0, 1, 1);

        groupCharacterMaxLvl = new QGroupBox(CharacterPropertiesDB);
        groupCharacterMaxLvl->setObjectName(QStringLiteral("groupCharacterMaxLvl"));
        sizePolicy.setHeightForWidth(groupCharacterMaxLvl->sizePolicy().hasHeightForWidth());
        groupCharacterMaxLvl->setSizePolicy(sizePolicy);
        groupCharacterMaxLvl->setMinimumSize(QSize(0, 55));
        groupCharacterMaxLvl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_13 = new QGridLayout(groupCharacterMaxLvl);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        spinMaxLvl = new QSpinBox(groupCharacterMaxLvl);
        spinMaxLvl->setObjectName(QStringLiteral("spinMaxLvl"));
        spinMaxLvl->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinMaxLvl->setAccelerated(false);
        spinMaxLvl->setMinimum(1);

        gridLayout_13->addWidget(spinMaxLvl, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterMaxLvl, 2, 1, 1, 1);

        groupCharacterVar = new QGroupBox(CharacterPropertiesDB);
        groupCharacterVar->setObjectName(QStringLiteral("groupCharacterVar"));
        sizePolicy.setHeightForWidth(groupCharacterVar->sizePolicy().hasHeightForWidth());
        groupCharacterVar->setSizePolicy(sizePolicy);
        groupCharacterVar->setMinimumSize(QSize(0, 55));
        groupCharacterVar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_23 = new QGridLayout(groupCharacterVar);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        pushCharacterVar = new QPushButton(groupCharacterVar);
        pushCharacterVar->setObjectName(QStringLiteral("pushCharacterVar"));

        gridLayout_23->addWidget(pushCharacterVar, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterVar, 3, 0, 1, 2);

        groupCharacterCritical = new QGroupBox(CharacterPropertiesDB);
        groupCharacterCritical->setObjectName(QStringLiteral("groupCharacterCritical"));
        sizePolicy.setHeightForWidth(groupCharacterCritical->sizePolicy().hasHeightForWidth());
        groupCharacterCritical->setSizePolicy(sizePolicy);
        groupCharacterCritical->setMinimumSize(QSize(0, 50));
        groupCharacterCritical->setMaximumSize(QSize(16777215, 35));
        groupCharacterCritical->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupCharacterCritical->setCheckable(true);
        groupCharacterCritical->setChecked(false);
        gridLayout_14 = new QGridLayout(groupCharacterCritical);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        spinCritical = new QSpinBox(groupCharacterCritical);
        spinCritical->setObjectName(QStringLiteral("spinCritical"));
        spinCritical->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinCritical->setAccelerated(false);
        spinCritical->setMinimum(1);
        spinCritical->setMaximum(100);

        gridLayout_14->addWidget(spinCritical, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterCritical, 4, 0, 1, 2);

        groupCharacterCurve = new QGroupBox(CharacterPropertiesDB);
        groupCharacterCurve->setObjectName(QStringLiteral("groupCharacterCurve"));
        sizePolicy.setHeightForWidth(groupCharacterCurve->sizePolicy().hasHeightForWidth());
        groupCharacterCurve->setSizePolicy(sizePolicy);
        groupCharacterCurve->setMinimumSize(QSize(0, 55));
        groupCharacterCurve->setMaximumSize(QSize(9999, 50));
        groupCharacterCurve->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_11 = new QGridLayout(groupCharacterCurve);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        comboCharacterCurve = new QComboBox(groupCharacterCurve);
        comboCharacterCurve->setObjectName(QStringLiteral("comboCharacterCurve"));

        gridLayout_11->addWidget(comboCharacterCurve, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterCurve, 5, 0, 1, 2);

        groupCharacterChara = new QGroupBox(CharacterPropertiesDB);
        groupCharacterChara->setObjectName(QStringLiteral("groupCharacterChara"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupCharacterChara->sizePolicy().hasHeightForWidth());
        groupCharacterChara->setSizePolicy(sizePolicy2);
        groupCharacterChara->setMinimumSize(QSize(0, 160));
        groupCharacterChara->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_15 = new QGridLayout(groupCharacterChara);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        comboChara = new QComboBox(groupCharacterChara);
        comboChara->setObjectName(QStringLiteral("comboChara"));

        gridLayout_15->addWidget(comboChara, 0, 0, 1, 1);

        graphicsChara = new QGraphicsView(groupCharacterChara);
        graphicsChara->setObjectName(QStringLiteral("graphicsChara"));

        gridLayout_15->addWidget(graphicsChara, 1, 0, 1, 1);


        gridLayout->addWidget(groupCharacterChara, 6, 0, 1, 1);

        groupCharacterFaceSet = new QGroupBox(CharacterPropertiesDB);
        groupCharacterFaceSet->setObjectName(QStringLiteral("groupCharacterFaceSet"));
        sizePolicy2.setHeightForWidth(groupCharacterFaceSet->sizePolicy().hasHeightForWidth());
        groupCharacterFaceSet->setSizePolicy(sizePolicy2);
        groupCharacterFaceSet->setMinimumSize(QSize(0, 160));
        groupCharacterFaceSet->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupCharacterFaceSet->setFlat(false);
        gridLayout_17 = new QGridLayout(groupCharacterFaceSet);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        comboFaceSet = new QComboBox(groupCharacterFaceSet);
        comboFaceSet->setObjectName(QStringLiteral("comboFaceSet"));

        gridLayout_17->addWidget(comboFaceSet, 0, 0, 1, 1);

        graphicsFaceSet = new QGraphicsView(groupCharacterFaceSet);
        graphicsFaceSet->setObjectName(QStringLiteral("graphicsFaceSet"));

        gridLayout_17->addWidget(graphicsFaceSet, 1, 0, 1, 1);


        gridLayout->addWidget(groupCharacterFaceSet, 6, 1, 1, 1);

        groupCharacterAnimationSet = new QGroupBox(CharacterPropertiesDB);
        groupCharacterAnimationSet->setObjectName(QStringLiteral("groupCharacterAnimationSet"));
        sizePolicy2.setHeightForWidth(groupCharacterAnimationSet->sizePolicy().hasHeightForWidth());
        groupCharacterAnimationSet->setSizePolicy(sizePolicy2);
        groupCharacterAnimationSet->setMinimumSize(QSize(0, 160));
        groupCharacterAnimationSet->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupCharacterAnimationSet->setFlat(false);
        gridLayout_16 = new QGridLayout(groupCharacterAnimationSet);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        comboAnimationSet = new QComboBox(groupCharacterAnimationSet);
        comboAnimationSet->setObjectName(QStringLiteral("comboAnimationSet"));

        gridLayout_16->addWidget(comboAnimationSet, 0, 0, 1, 1);

        graphicsAnimationSet = new QGraphicsView(groupCharacterAnimationSet);
        graphicsAnimationSet->setObjectName(QStringLiteral("graphicsAnimationSet"));

        gridLayout_16->addWidget(graphicsAnimationSet, 1, 0, 1, 1);


        gridLayout->addWidget(groupCharacterAnimationSet, 7, 0, 1, 1);

        groupCharacterOptions = new QGroupBox(CharacterPropertiesDB);
        groupCharacterOptions->setObjectName(QStringLiteral("groupCharacterOptions"));
        groupCharacterOptions->setMinimumSize(QSize(0, 160));
        gridLayout_5 = new QGridLayout(groupCharacterOptions);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkDualSword = new QCheckBox(groupCharacterOptions);
        checkDualSword->setObjectName(QStringLiteral("checkDualSword"));

        gridLayout_5->addWidget(checkDualSword, 0, 0, 1, 1);

        checkAI = new QCheckBox(groupCharacterOptions);
        checkAI->setObjectName(QStringLiteral("checkAI"));

        gridLayout_5->addWidget(checkAI, 1, 0, 1, 1);

        checkFixedEquipment = new QCheckBox(groupCharacterOptions);
        checkFixedEquipment->setObjectName(QStringLiteral("checkFixedEquipment"));

        gridLayout_5->addWidget(checkFixedEquipment, 2, 0, 1, 1);

        checkStrongDefense = new QCheckBox(groupCharacterOptions);
        checkStrongDefense->setObjectName(QStringLiteral("checkStrongDefense"));

        gridLayout_5->addWidget(checkStrongDefense, 3, 0, 1, 1);


        gridLayout->addWidget(groupCharacterOptions, 7, 1, 1, 1);

        groupCharacterEquipment = new QGroupBox(CharacterPropertiesDB);
        groupCharacterEquipment->setObjectName(QStringLiteral("groupCharacterEquipment"));
        groupCharacterEquipment->setMinimumSize(QSize(0, 150));
        gridLayout_8 = new QGridLayout(groupCharacterEquipment);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_2 = new QLabel(groupCharacterEquipment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);

        comboWeapon = new QComboBox(groupCharacterEquipment);
        comboWeapon->setObjectName(QStringLiteral("comboWeapon"));

        gridLayout_8->addWidget(comboWeapon, 0, 1, 1, 1);

        label_3 = new QLabel(groupCharacterEquipment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_3, 1, 0, 1, 1);

        comboShield = new QComboBox(groupCharacterEquipment);
        comboShield->setObjectName(QStringLiteral("comboShield"));

        gridLayout_8->addWidget(comboShield, 1, 1, 1, 1);

        label_4 = new QLabel(groupCharacterEquipment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_4, 2, 0, 1, 1);

        comboArmor = new QComboBox(groupCharacterEquipment);
        comboArmor->setObjectName(QStringLiteral("comboArmor"));

        gridLayout_8->addWidget(comboArmor, 2, 1, 1, 1);

        label_5 = new QLabel(groupCharacterEquipment);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_5, 3, 0, 1, 1);

        comboHelmet = new QComboBox(groupCharacterEquipment);
        comboHelmet->setObjectName(QStringLiteral("comboHelmet"));

        gridLayout_8->addWidget(comboHelmet, 3, 1, 1, 1);

        label_6 = new QLabel(groupCharacterEquipment);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_6, 4, 0, 1, 1);

        comboAccesory = new QComboBox(groupCharacterEquipment);
        comboAccesory->setObjectName(QStringLiteral("comboAccesory"));

        gridLayout_8->addWidget(comboAccesory, 4, 1, 1, 1);


        gridLayout->addWidget(groupCharacterEquipment, 8, 0, 1, 2);

        groupCharacterUnarmedAnimation = new QGroupBox(CharacterPropertiesDB);
        groupCharacterUnarmedAnimation->setObjectName(QStringLiteral("groupCharacterUnarmedAnimation"));
        groupCharacterUnarmedAnimation->setMinimumSize(QSize(0, 55));
        gridLayout_20 = new QGridLayout(groupCharacterUnarmedAnimation);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        comboUnarmedAnimation = new QComboBox(groupCharacterUnarmedAnimation);
        comboUnarmedAnimation->setObjectName(QStringLiteral("comboUnarmedAnimation"));

        gridLayout_20->addWidget(comboUnarmedAnimation, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterUnarmedAnimation, 9, 0, 1, 2);

        groupCharacterSkill = new QGroupBox(CharacterPropertiesDB);
        groupCharacterSkill->setObjectName(QStringLiteral("groupCharacterSkill"));
        groupCharacterSkill->setMinimumSize(QSize(0, 150));
        gridLayout_10 = new QGridLayout(groupCharacterSkill);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tableCharacterSkill = new QTableWidget(groupCharacterSkill);
        if (tableCharacterSkill->columnCount() < 2)
            tableCharacterSkill->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableCharacterSkill->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableCharacterSkill->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableCharacterSkill->rowCount() < 1)
            tableCharacterSkill->setRowCount(1);
        tableCharacterSkill->setObjectName(QStringLiteral("tableCharacterSkill"));
        tableCharacterSkill->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableCharacterSkill->setTabKeyNavigation(false);
        tableCharacterSkill->setDragDropOverwriteMode(false);
        tableCharacterSkill->setAlternatingRowColors(true);
        tableCharacterSkill->setSelectionMode(QAbstractItemView::SingleSelection);
        tableCharacterSkill->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableCharacterSkill->setSortingEnabled(true);
        tableCharacterSkill->setWordWrap(false);
        tableCharacterSkill->setRowCount(1);
        tableCharacterSkill->setColumnCount(2);
        tableCharacterSkill->horizontalHeader()->setVisible(false);
        tableCharacterSkill->horizontalHeader()->setCascadingSectionResizes(false);
        tableCharacterSkill->horizontalHeader()->setDefaultSectionSize(200);
        tableCharacterSkill->horizontalHeader()->setHighlightSections(true);
        tableCharacterSkill->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableCharacterSkill->verticalHeader()->setVisible(false);
        tableCharacterSkill->verticalHeader()->setDefaultSectionSize(20);
        tableCharacterSkill->verticalHeader()->setMinimumSectionSize(17);

        gridLayout_10->addWidget(tableCharacterSkill, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterSkill, 10, 0, 1, 2);

        groupCharacterConditionEffect = new QGroupBox(CharacterPropertiesDB);
        groupCharacterConditionEffect->setObjectName(QStringLiteral("groupCharacterConditionEffect"));
        groupCharacterConditionEffect->setMinimumSize(QSize(0, 150));
        gridLayout_18 = new QGridLayout(groupCharacterConditionEffect);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        tableCharacterConditionEffect = new QTableWidget(groupCharacterConditionEffect);
        if (tableCharacterConditionEffect->columnCount() < 2)
            tableCharacterConditionEffect->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableCharacterConditionEffect->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableCharacterConditionEffect->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        if (tableCharacterConditionEffect->rowCount() < 1)
            tableCharacterConditionEffect->setRowCount(1);
        tableCharacterConditionEffect->setObjectName(QStringLiteral("tableCharacterConditionEffect"));
        tableCharacterConditionEffect->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableCharacterConditionEffect->setTabKeyNavigation(false);
        tableCharacterConditionEffect->setDragDropOverwriteMode(false);
        tableCharacterConditionEffect->setAlternatingRowColors(true);
        tableCharacterConditionEffect->setSelectionMode(QAbstractItemView::SingleSelection);
        tableCharacterConditionEffect->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableCharacterConditionEffect->setSortingEnabled(true);
        tableCharacterConditionEffect->setWordWrap(false);
        tableCharacterConditionEffect->setRowCount(1);
        tableCharacterConditionEffect->setColumnCount(2);
        tableCharacterConditionEffect->horizontalHeader()->setVisible(false);
        tableCharacterConditionEffect->horizontalHeader()->setCascadingSectionResizes(false);
        tableCharacterConditionEffect->horizontalHeader()->setDefaultSectionSize(100);
        tableCharacterConditionEffect->horizontalHeader()->setHighlightSections(true);
        tableCharacterConditionEffect->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableCharacterConditionEffect->verticalHeader()->setVisible(false);
        tableCharacterConditionEffect->verticalHeader()->setDefaultSectionSize(20);
        tableCharacterConditionEffect->verticalHeader()->setMinimumSectionSize(17);

        gridLayout_18->addWidget(tableCharacterConditionEffect, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterConditionEffect, 11, 0, 1, 1);

        groupCharacterAfflictedCondition = new QGroupBox(CharacterPropertiesDB);
        groupCharacterAfflictedCondition->setObjectName(QStringLiteral("groupCharacterAfflictedCondition"));
        groupCharacterAfflictedCondition->setMinimumSize(QSize(0, 150));
        gridLayout_19 = new QGridLayout(groupCharacterAfflictedCondition);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        tableAfflictedCondition = new QTableWidget(groupCharacterAfflictedCondition);
        if (tableAfflictedCondition->columnCount() < 2)
            tableAfflictedCondition->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableAfflictedCondition->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableAfflictedCondition->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        if (tableAfflictedCondition->rowCount() < 1)
            tableAfflictedCondition->setRowCount(1);
        tableAfflictedCondition->setObjectName(QStringLiteral("tableAfflictedCondition"));
        tableAfflictedCondition->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableAfflictedCondition->setTabKeyNavigation(false);
        tableAfflictedCondition->setDragDropOverwriteMode(false);
        tableAfflictedCondition->setAlternatingRowColors(true);
        tableAfflictedCondition->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAfflictedCondition->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAfflictedCondition->setSortingEnabled(true);
        tableAfflictedCondition->setWordWrap(false);
        tableAfflictedCondition->setRowCount(1);
        tableAfflictedCondition->setColumnCount(2);
        tableAfflictedCondition->horizontalHeader()->setVisible(false);
        tableAfflictedCondition->horizontalHeader()->setCascadingSectionResizes(false);
        tableAfflictedCondition->horizontalHeader()->setDefaultSectionSize(100);
        tableAfflictedCondition->horizontalHeader()->setHighlightSections(true);
        tableAfflictedCondition->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableAfflictedCondition->verticalHeader()->setVisible(false);
        tableAfflictedCondition->verticalHeader()->setDefaultSectionSize(20);
        tableAfflictedCondition->verticalHeader()->setMinimumSectionSize(17);

        gridLayout_19->addWidget(tableAfflictedCondition, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharacterAfflictedCondition, 11, 1, 1, 1);


        retranslateUi(CharacterPropertiesDB);

        QMetaObject::connectSlotsByName(CharacterPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *CharacterPropertiesDB)
    {
        CharacterPropertiesDB->setWindowTitle(QApplication::translate("CharacterPropertiesDB", "Form", 0));
        groupCharacterName->setTitle(QApplication::translate("CharacterPropertiesDB", "Name", 0));
        groupCharacterTitle->setTitle(QApplication::translate("CharacterPropertiesDB", "Title", 0));
        groupCharacterMinLvl->setTitle(QApplication::translate("CharacterPropertiesDB", "Initial Level", 0));
        spinMinLvl->setSpecialValueText(QString());
        spinMinLvl->setPrefix(QApplication::translate("CharacterPropertiesDB", "Lvl ", 0));
        groupCharacterMaxLvl->setTitle(QApplication::translate("CharacterPropertiesDB", "Final Level", 0));
        spinMaxLvl->setSpecialValueText(QString());
        spinMaxLvl->setPrefix(QApplication::translate("CharacterPropertiesDB", "Lvl ", 0));
        groupCharacterVar->setTitle(QApplication::translate("CharacterPropertiesDB", "Variables", 0));
        pushCharacterVar->setText(QApplication::translate("CharacterPropertiesDB", "Edit Variables...", 0));
        groupCharacterCritical->setTitle(QApplication::translate("CharacterPropertiesDB", "CriticalChance", 0));
        spinCritical->setSpecialValueText(QString());
        spinCritical->setSuffix(QApplication::translate("CharacterPropertiesDB", " %", 0));
        spinCritical->setPrefix(QString());
        groupCharacterCurve->setTitle(QApplication::translate("CharacterPropertiesDB", "Curve Set", 0));
        groupCharacterChara->setTitle(QApplication::translate("CharacterPropertiesDB", "Chara Set", 0));
        groupCharacterFaceSet->setTitle(QApplication::translate("CharacterPropertiesDB", "Face Set", 0));
        groupCharacterAnimationSet->setTitle(QApplication::translate("CharacterPropertiesDB", "Animation Set", 0));
        groupCharacterOptions->setTitle(QApplication::translate("CharacterPropertiesDB", "Options", 0));
        checkDualSword->setText(QApplication::translate("CharacterPropertiesDB", "Dual Sword", 0));
        checkAI->setText(QApplication::translate("CharacterPropertiesDB", "Control AI", 0));
        checkFixedEquipment->setText(QApplication::translate("CharacterPropertiesDB", "Fixed Equipment", 0));
        checkStrongDefense->setText(QApplication::translate("CharacterPropertiesDB", "Strong Defense", 0));
        groupCharacterEquipment->setTitle(QApplication::translate("CharacterPropertiesDB", "InitialEquipment", 0));
        label_2->setText(QApplication::translate("CharacterPropertiesDB", "Weapon: ", 0));
        label_3->setText(QApplication::translate("CharacterPropertiesDB", "Shield: ", 0));
        label_4->setText(QApplication::translate("CharacterPropertiesDB", "Armor: ", 0));
        label_5->setText(QApplication::translate("CharacterPropertiesDB", "Helmet: ", 0));
        label_6->setText(QApplication::translate("CharacterPropertiesDB", "Accesory: ", 0));
        groupCharacterUnarmedAnimation->setTitle(QApplication::translate("CharacterPropertiesDB", "Unarmed Animation", 0));
        groupCharacterSkill->setTitle(QApplication::translate("CharacterPropertiesDB", "Skill Table", 0));
        QTableWidgetItem *___qtablewidgetitem = tableCharacterSkill->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CharacterPropertiesDB", "Level", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableCharacterSkill->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CharacterPropertiesDB", "Skill", 0));
        groupCharacterConditionEffect->setTitle(QApplication::translate("CharacterPropertiesDB", "Condition Effect", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableCharacterConditionEffect->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("CharacterPropertiesDB", "Rank", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableCharacterConditionEffect->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("CharacterPropertiesDB", "Condition", 0));
        groupCharacterAfflictedCondition->setTitle(QApplication::translate("CharacterPropertiesDB", "Afflicted Condition", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableAfflictedCondition->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("CharacterPropertiesDB", "Rank", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableAfflictedCondition->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("CharacterPropertiesDB", "Condition", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterPropertiesDB: public Ui_CharacterPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERPROPERTIESDB_H
