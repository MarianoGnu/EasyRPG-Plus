/********************************************************************************
** Form generated from reading UI file 'conditionpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDITIONPROPERTIESDB_H
#define UI_CONDITIONPROPERTIESDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConditionPropertiesDB
{
public:
    QGridLayout *gridLayout_29;
    QGroupBox *groupConditionName;
    QGridLayout *gridLayout;
    QLineEdit *lineConditionName;
    QGroupBox *groupConditionClasification;
    QGridLayout *gridLayout_2;
    QComboBox *comboConditionClasification;
    QGroupBox *groupConditionColor;
    QGridLayout *gridLayout_3;
    QComboBox *comboConditionColor;
    QGroupBox *groupConditionPririty;
    QGridLayout *gridLayout_4;
    QSpinBox *spinConditionPriority;
    QGroupBox *groupConditionChance;
    QGridLayout *gridLayout_6;
    QSpinBox *spinConditionChance;
    QGroupBox *groupConditionRestriction;
    QGridLayout *gridLayout_5;
    QComboBox *comboConditionRestriction;
    QGroupBox *groupConditionSpecial;
    QGridLayout *gridLayout_7;
    QCheckBox *checkConditionEvadeAttack;
    QCheckBox *checkConditionCantSwitchTeam;
    QCheckBox *checkConditionReflectSkill;
    QGroupBox *groupConditionRank;
    QGridLayout *gridLayout_8;
    QGroupBox *groupConditionRankA;
    QGridLayout *gridLayout_9;
    QSpinBox *spinConditionRankA;
    QGroupBox *groupConditionRankD;
    QGridLayout *gridLayout_12;
    QSpinBox *spinConditionRankD;
    QGroupBox *groupConditionRankC;
    QGridLayout *gridLayout_11;
    QSpinBox *spinConditionRankC;
    QGroupBox *groupConditionRankB;
    QGridLayout *gridLayout_10;
    QSpinBox *spinConditionRankB;
    QGroupBox *groupConditionRankE;
    QGridLayout *gridLayout_13;
    QSpinBox *spinConditionRankE;
    QGroupBox *groupConditionHeal;
    QGridLayout *gridLayout_14;
    QGroupBox *groupConditionHealSpontaneous;
    QGridLayout *gridLayout_16;
    QSpinBox *spinConditionHealChance;
    QSpinBox *spinConditionHealMaxTurns;
    QToolButton *toolConditionHeal;
    QGroupBox *groupConditionHealByHit;
    QGridLayout *gridLayout_15;
    QSpinBox *spinConditionHealChanceByHit;
    QGroupBox *groupConditionChangeStatus;
    QGridLayout *gridLayout_17;
    QCheckBox *checkConditionAttack;
    QSpinBox *spinConditionAttack;
    QCheckBox *checkConditionDefense;
    QSpinBox *spinConditionDefense;
    QCheckBox *checkConditionMind;
    QSpinBox *spinConditionMind;
    QCheckBox *checkConditionAgility;
    QSpinBox *spinConditionAgility;
    QGroupBox *groupConditionBlockAttribute;
    QGridLayout *gridLayout_18;
    QCheckBox *checkConditionBlockAttack;
    QSpinBox *spinConditionBlockAttack;
    QCheckBox *checkConditionBlockSkill;
    QSpinBox *spinConditionBlockSkill;
    QGroupBox *groupConditionHp;
    QGridLayout *gridLayout_21;
    QGroupBox *groupConditionHpBattle;
    QGridLayout *gridLayout_19;
    QToolButton *toolConditionHpBattleEffect;
    QSpinBox *spinConditionHpBattlePercent;
    QSpinBox *spinConditionHpBattleFixed;
    QGroupBox *groupConditionHpField;
    QGridLayout *gridLayout_20;
    QToolButton *toolConditionHpFieldEffect;
    QSpinBox *spinConditionHpFieldPercent;
    QSpinBox *spinConditionHpFieldFixed;
    QGroupBox *groupConditionMp;
    QGridLayout *gridLayout_25;
    QGroupBox *groupConditionMpBattle;
    QGridLayout *gridLayout_26;
    QToolButton *toolConditionMpBattleEffect;
    QSpinBox *spinConditionMpBattlePercent;
    QSpinBox *spinConditionMpBattleFixed;
    QGroupBox *groupConditionMpField;
    QGridLayout *gridLayout_27;
    QToolButton *toolConditionMpFieldEffect;
    QSpinBox *spinConditionMpFieldPercent;
    QSpinBox *spinConditionMpFieldFixed;
    QGroupBox *groupConditionAction;
    QGridLayout *gridLayout_28;
    QComboBox *comboConditionAction;

    void setupUi(QWidget *ConditionPropertiesDB)
    {
        if (ConditionPropertiesDB->objectName().isEmpty())
            ConditionPropertiesDB->setObjectName(QStringLiteral("ConditionPropertiesDB"));
        ConditionPropertiesDB->resize(409, 1064);
        gridLayout_29 = new QGridLayout(ConditionPropertiesDB);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        gridLayout_29->setContentsMargins(0, 0, 0, 0);
        groupConditionName = new QGroupBox(ConditionPropertiesDB);
        groupConditionName->setObjectName(QStringLiteral("groupConditionName"));
        gridLayout = new QGridLayout(groupConditionName);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineConditionName = new QLineEdit(groupConditionName);
        lineConditionName->setObjectName(QStringLiteral("lineConditionName"));

        gridLayout->addWidget(lineConditionName, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionName, 0, 0, 1, 4);

        groupConditionClasification = new QGroupBox(ConditionPropertiesDB);
        groupConditionClasification->setObjectName(QStringLiteral("groupConditionClasification"));
        gridLayout_2 = new QGridLayout(groupConditionClasification);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        comboConditionClasification = new QComboBox(groupConditionClasification);
        comboConditionClasification->setObjectName(QStringLiteral("comboConditionClasification"));

        gridLayout_2->addWidget(comboConditionClasification, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionClasification, 1, 0, 1, 4);

        groupConditionColor = new QGroupBox(ConditionPropertiesDB);
        groupConditionColor->setObjectName(QStringLiteral("groupConditionColor"));
        gridLayout_3 = new QGridLayout(groupConditionColor);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboConditionColor = new QComboBox(groupConditionColor);
        QIcon icon;
        icon.addFile(QStringLiteral(":/data/icons/C1.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/data/icons/C2.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/data/icons/C3.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/data/icons/C4.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/data/icons/C5.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/data/icons/C6.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/data/icons/C7.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/data/icons/C8.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/data/icons/C9.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/data/icons/C10.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/data/icons/C11.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/data/icons/C12.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/data/icons/C13.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon12, QString());
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/data/icons/C14.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon13, QString());
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/data/icons/C15.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon14, QString());
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/data/icons/C16.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon15, QString());
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/data/icons/C17.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon16, QString());
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/data/icons/C18.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon17, QString());
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/data/icons/C19.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon18, QString());
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/data/icons/C20.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboConditionColor->addItem(icon19, QString());
        comboConditionColor->setObjectName(QStringLiteral("comboConditionColor"));
        comboConditionColor->setIconSize(QSize(42, 10));

        gridLayout_3->addWidget(comboConditionColor, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionColor, 2, 0, 1, 1);

        groupConditionPririty = new QGroupBox(ConditionPropertiesDB);
        groupConditionPririty->setObjectName(QStringLiteral("groupConditionPririty"));
        gridLayout_4 = new QGridLayout(groupConditionPririty);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        spinConditionPriority = new QSpinBox(groupConditionPririty);
        spinConditionPriority->setObjectName(QStringLiteral("spinConditionPriority"));
        spinConditionPriority->setMaximum(100);

        gridLayout_4->addWidget(spinConditionPriority, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionPririty, 2, 1, 1, 1);

        groupConditionChance = new QGroupBox(ConditionPropertiesDB);
        groupConditionChance->setObjectName(QStringLiteral("groupConditionChance"));
        gridLayout_6 = new QGridLayout(groupConditionChance);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        spinConditionChance = new QSpinBox(groupConditionChance);
        spinConditionChance->setObjectName(QStringLiteral("spinConditionChance"));

        gridLayout_6->addWidget(spinConditionChance, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionChance, 2, 2, 1, 1);

        groupConditionRestriction = new QGroupBox(ConditionPropertiesDB);
        groupConditionRestriction->setObjectName(QStringLiteral("groupConditionRestriction"));
        gridLayout_5 = new QGridLayout(groupConditionRestriction);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        comboConditionRestriction = new QComboBox(groupConditionRestriction);
        comboConditionRestriction->setObjectName(QStringLiteral("comboConditionRestriction"));

        gridLayout_5->addWidget(comboConditionRestriction, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionRestriction, 2, 3, 1, 1);

        groupConditionSpecial = new QGroupBox(ConditionPropertiesDB);
        groupConditionSpecial->setObjectName(QStringLiteral("groupConditionSpecial"));
        gridLayout_7 = new QGridLayout(groupConditionSpecial);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        checkConditionEvadeAttack = new QCheckBox(groupConditionSpecial);
        checkConditionEvadeAttack->setObjectName(QStringLiteral("checkConditionEvadeAttack"));

        gridLayout_7->addWidget(checkConditionEvadeAttack, 0, 0, 1, 1);

        checkConditionCantSwitchTeam = new QCheckBox(groupConditionSpecial);
        checkConditionCantSwitchTeam->setObjectName(QStringLiteral("checkConditionCantSwitchTeam"));

        gridLayout_7->addWidget(checkConditionCantSwitchTeam, 0, 2, 1, 1);

        checkConditionReflectSkill = new QCheckBox(groupConditionSpecial);
        checkConditionReflectSkill->setObjectName(QStringLiteral("checkConditionReflectSkill"));

        gridLayout_7->addWidget(checkConditionReflectSkill, 0, 1, 1, 1);


        gridLayout_29->addWidget(groupConditionSpecial, 3, 0, 1, 4);

        groupConditionRank = new QGroupBox(ConditionPropertiesDB);
        groupConditionRank->setObjectName(QStringLiteral("groupConditionRank"));
        gridLayout_8 = new QGridLayout(groupConditionRank);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupConditionRankA = new QGroupBox(groupConditionRank);
        groupConditionRankA->setObjectName(QStringLiteral("groupConditionRankA"));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupConditionRankA->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupConditionRankA->setFont(font);
        groupConditionRankA->setFlat(true);
        gridLayout_9 = new QGridLayout(groupConditionRankA);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        spinConditionRankA = new QSpinBox(groupConditionRankA);
        spinConditionRankA->setObjectName(QStringLiteral("spinConditionRankA"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinConditionRankA->setPalette(palette1);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        spinConditionRankA->setFont(font1);

        gridLayout_9->addWidget(spinConditionRankA, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupConditionRankA, 0, 0, 1, 1);

        groupConditionRankD = new QGroupBox(groupConditionRank);
        groupConditionRankD->setObjectName(QStringLiteral("groupConditionRankD"));
        QPalette palette2;
        QBrush brush3(QColor(0, 0, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupConditionRankD->setPalette(palette2);
        groupConditionRankD->setFont(font);
        groupConditionRankD->setFlat(true);
        gridLayout_12 = new QGridLayout(groupConditionRankD);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        spinConditionRankD = new QSpinBox(groupConditionRankD);
        spinConditionRankD->setObjectName(QStringLiteral("spinConditionRankD"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinConditionRankD->setPalette(palette3);
        spinConditionRankD->setFont(font1);

        gridLayout_12->addWidget(spinConditionRankD, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupConditionRankD, 0, 3, 1, 1);

        groupConditionRankC = new QGroupBox(groupConditionRank);
        groupConditionRankC->setObjectName(QStringLiteral("groupConditionRankC"));
        QPalette palette4;
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupConditionRankC->setPalette(palette4);
        groupConditionRankC->setFont(font);
        groupConditionRankC->setFlat(true);
        gridLayout_11 = new QGridLayout(groupConditionRankC);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        spinConditionRankC = new QSpinBox(groupConditionRankC);
        spinConditionRankC->setObjectName(QStringLiteral("spinConditionRankC"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinConditionRankC->setPalette(palette5);
        spinConditionRankC->setFont(font1);

        gridLayout_11->addWidget(spinConditionRankC, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupConditionRankC, 0, 2, 1, 1);

        groupConditionRankB = new QGroupBox(groupConditionRank);
        groupConditionRankB->setObjectName(QStringLiteral("groupConditionRankB"));
        QPalette palette6;
        QBrush brush5(QColor(255, 85, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupConditionRankB->setPalette(palette6);
        groupConditionRankB->setFont(font);
        groupConditionRankB->setFlat(true);
        gridLayout_10 = new QGridLayout(groupConditionRankB);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        spinConditionRankB = new QSpinBox(groupConditionRankB);
        spinConditionRankB->setObjectName(QStringLiteral("spinConditionRankB"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinConditionRankB->setPalette(palette7);
        spinConditionRankB->setFont(font1);

        gridLayout_10->addWidget(spinConditionRankB, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupConditionRankB, 0, 1, 1, 1);

        groupConditionRankE = new QGroupBox(groupConditionRank);
        groupConditionRankE->setObjectName(QStringLiteral("groupConditionRankE"));
        QPalette palette8;
        QBrush brush6(QColor(85, 0, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupConditionRankE->setPalette(palette8);
        groupConditionRankE->setFont(font);
        groupConditionRankE->setFlat(true);
        gridLayout_13 = new QGridLayout(groupConditionRankE);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        spinConditionRankE = new QSpinBox(groupConditionRankE);
        spinConditionRankE->setObjectName(QStringLiteral("spinConditionRankE"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinConditionRankE->setPalette(palette9);
        spinConditionRankE->setFont(font1);

        gridLayout_13->addWidget(spinConditionRankE, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupConditionRankE, 0, 4, 1, 1);


        gridLayout_29->addWidget(groupConditionRank, 4, 0, 1, 4);

        groupConditionHeal = new QGroupBox(ConditionPropertiesDB);
        groupConditionHeal->setObjectName(QStringLiteral("groupConditionHeal"));
        gridLayout_14 = new QGridLayout(groupConditionHeal);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        groupConditionHealSpontaneous = new QGroupBox(groupConditionHeal);
        groupConditionHealSpontaneous->setObjectName(QStringLiteral("groupConditionHealSpontaneous"));
        gridLayout_16 = new QGridLayout(groupConditionHealSpontaneous);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setHorizontalSpacing(0);
        spinConditionHealChance = new QSpinBox(groupConditionHealSpontaneous);
        spinConditionHealChance->setObjectName(QStringLiteral("spinConditionHealChance"));
        spinConditionHealChance->setMaximumSize(QSize(17, 16777215));
        spinConditionHealChance->setMaximum(100);

        gridLayout_16->addWidget(spinConditionHealChance, 0, 2, 1, 1);

        spinConditionHealMaxTurns = new QSpinBox(groupConditionHealSpontaneous);
        spinConditionHealMaxTurns->setObjectName(QStringLiteral("spinConditionHealMaxTurns"));

        gridLayout_16->addWidget(spinConditionHealMaxTurns, 0, 1, 1, 1);

        toolConditionHeal = new QToolButton(groupConditionHealSpontaneous);
        toolConditionHeal->setObjectName(QStringLiteral("toolConditionHeal"));

        gridLayout_16->addWidget(toolConditionHeal, 0, 3, 1, 1);


        gridLayout_14->addWidget(groupConditionHealSpontaneous, 0, 0, 1, 1);

        groupConditionHealByHit = new QGroupBox(groupConditionHeal);
        groupConditionHealByHit->setObjectName(QStringLiteral("groupConditionHealByHit"));
        gridLayout_15 = new QGridLayout(groupConditionHealByHit);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        spinConditionHealChanceByHit = new QSpinBox(groupConditionHealByHit);
        spinConditionHealChanceByHit->setObjectName(QStringLiteral("spinConditionHealChanceByHit"));

        gridLayout_15->addWidget(spinConditionHealChanceByHit, 0, 0, 1, 1);


        gridLayout_14->addWidget(groupConditionHealByHit, 1, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionHeal, 5, 0, 1, 4);

        groupConditionChangeStatus = new QGroupBox(ConditionPropertiesDB);
        groupConditionChangeStatus->setObjectName(QStringLiteral("groupConditionChangeStatus"));
        gridLayout_17 = new QGridLayout(groupConditionChangeStatus);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        checkConditionAttack = new QCheckBox(groupConditionChangeStatus);
        checkConditionAttack->setObjectName(QStringLiteral("checkConditionAttack"));
        checkConditionAttack->setMaximumSize(QSize(13, 16777215));

        gridLayout_17->addWidget(checkConditionAttack, 0, 0, 1, 1);

        spinConditionAttack = new QSpinBox(groupConditionChangeStatus);
        spinConditionAttack->setObjectName(QStringLiteral("spinConditionAttack"));
        spinConditionAttack->setEnabled(false);
        spinConditionAttack->setMinimum(0);
        spinConditionAttack->setMaximum(200);
        spinConditionAttack->setValue(100);

        gridLayout_17->addWidget(spinConditionAttack, 0, 1, 1, 1);

        checkConditionDefense = new QCheckBox(groupConditionChangeStatus);
        checkConditionDefense->setObjectName(QStringLiteral("checkConditionDefense"));
        checkConditionDefense->setMaximumSize(QSize(13, 16777215));

        gridLayout_17->addWidget(checkConditionDefense, 1, 0, 1, 1);

        spinConditionDefense = new QSpinBox(groupConditionChangeStatus);
        spinConditionDefense->setObjectName(QStringLiteral("spinConditionDefense"));
        spinConditionDefense->setEnabled(false);
        spinConditionDefense->setMinimum(0);
        spinConditionDefense->setMaximum(200);
        spinConditionDefense->setValue(100);

        gridLayout_17->addWidget(spinConditionDefense, 1, 1, 1, 1);

        checkConditionMind = new QCheckBox(groupConditionChangeStatus);
        checkConditionMind->setObjectName(QStringLiteral("checkConditionMind"));
        checkConditionMind->setMaximumSize(QSize(13, 16777215));

        gridLayout_17->addWidget(checkConditionMind, 2, 0, 1, 1);

        spinConditionMind = new QSpinBox(groupConditionChangeStatus);
        spinConditionMind->setObjectName(QStringLiteral("spinConditionMind"));
        spinConditionMind->setEnabled(false);
        spinConditionMind->setMinimum(0);
        spinConditionMind->setMaximum(200);
        spinConditionMind->setValue(100);

        gridLayout_17->addWidget(spinConditionMind, 2, 1, 1, 1);

        checkConditionAgility = new QCheckBox(groupConditionChangeStatus);
        checkConditionAgility->setObjectName(QStringLiteral("checkConditionAgility"));
        checkConditionAgility->setMaximumSize(QSize(13, 16777215));

        gridLayout_17->addWidget(checkConditionAgility, 3, 0, 1, 1);

        spinConditionAgility = new QSpinBox(groupConditionChangeStatus);
        spinConditionAgility->setObjectName(QStringLiteral("spinConditionAgility"));
        spinConditionAgility->setEnabled(false);
        spinConditionAgility->setMinimum(0);
        spinConditionAgility->setMaximum(200);
        spinConditionAgility->setValue(100);

        gridLayout_17->addWidget(spinConditionAgility, 3, 1, 1, 1);


        gridLayout_29->addWidget(groupConditionChangeStatus, 6, 0, 1, 4);

        groupConditionBlockAttribute = new QGroupBox(ConditionPropertiesDB);
        groupConditionBlockAttribute->setObjectName(QStringLiteral("groupConditionBlockAttribute"));
        gridLayout_18 = new QGridLayout(groupConditionBlockAttribute);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        checkConditionBlockAttack = new QCheckBox(groupConditionBlockAttribute);
        checkConditionBlockAttack->setObjectName(QStringLiteral("checkConditionBlockAttack"));
        checkConditionBlockAttack->setMaximumSize(QSize(13, 16777215));

        gridLayout_18->addWidget(checkConditionBlockAttack, 0, 0, 1, 1);

        spinConditionBlockAttack = new QSpinBox(groupConditionBlockAttribute);
        spinConditionBlockAttack->setObjectName(QStringLiteral("spinConditionBlockAttack"));
        spinConditionBlockAttack->setEnabled(false);
        spinConditionBlockAttack->setMinimum(0);
        spinConditionBlockAttack->setMaximum(200);
        spinConditionBlockAttack->setValue(100);

        gridLayout_18->addWidget(spinConditionBlockAttack, 0, 1, 1, 1);

        checkConditionBlockSkill = new QCheckBox(groupConditionBlockAttribute);
        checkConditionBlockSkill->setObjectName(QStringLiteral("checkConditionBlockSkill"));
        checkConditionBlockSkill->setMaximumSize(QSize(13, 16777215));

        gridLayout_18->addWidget(checkConditionBlockSkill, 1, 0, 1, 1);

        spinConditionBlockSkill = new QSpinBox(groupConditionBlockAttribute);
        spinConditionBlockSkill->setObjectName(QStringLiteral("spinConditionBlockSkill"));
        spinConditionBlockSkill->setEnabled(false);
        spinConditionBlockSkill->setMinimum(0);
        spinConditionBlockSkill->setMaximum(200);
        spinConditionBlockSkill->setValue(100);

        gridLayout_18->addWidget(spinConditionBlockSkill, 1, 1, 1, 1);


        gridLayout_29->addWidget(groupConditionBlockAttribute, 7, 0, 1, 4);

        groupConditionHp = new QGroupBox(ConditionPropertiesDB);
        groupConditionHp->setObjectName(QStringLiteral("groupConditionHp"));
        gridLayout_21 = new QGridLayout(groupConditionHp);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        groupConditionHpBattle = new QGroupBox(groupConditionHp);
        groupConditionHpBattle->setObjectName(QStringLiteral("groupConditionHpBattle"));
        groupConditionHpBattle->setFlat(true);
        gridLayout_19 = new QGridLayout(groupConditionHpBattle);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setHorizontalSpacing(0);
        toolConditionHpBattleEffect = new QToolButton(groupConditionHpBattle);
        toolConditionHpBattleEffect->setObjectName(QStringLiteral("toolConditionHpBattleEffect"));

        gridLayout_19->addWidget(toolConditionHpBattleEffect, 0, 2, 1, 1);

        spinConditionHpBattlePercent = new QSpinBox(groupConditionHpBattle);
        spinConditionHpBattlePercent->setObjectName(QStringLiteral("spinConditionHpBattlePercent"));

        gridLayout_19->addWidget(spinConditionHpBattlePercent, 0, 0, 1, 1);

        spinConditionHpBattleFixed = new QSpinBox(groupConditionHpBattle);
        spinConditionHpBattleFixed->setObjectName(QStringLiteral("spinConditionHpBattleFixed"));
        spinConditionHpBattleFixed->setMaximumSize(QSize(17, 16777215));

        gridLayout_19->addWidget(spinConditionHpBattleFixed, 0, 1, 1, 1);


        gridLayout_21->addWidget(groupConditionHpBattle, 0, 0, 1, 1);

        groupConditionHpField = new QGroupBox(groupConditionHp);
        groupConditionHpField->setObjectName(QStringLiteral("groupConditionHpField"));
        groupConditionHpField->setFlat(true);
        gridLayout_20 = new QGridLayout(groupConditionHpField);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_20->setHorizontalSpacing(0);
        toolConditionHpFieldEffect = new QToolButton(groupConditionHpField);
        toolConditionHpFieldEffect->setObjectName(QStringLiteral("toolConditionHpFieldEffect"));

        gridLayout_20->addWidget(toolConditionHpFieldEffect, 0, 2, 1, 1);

        spinConditionHpFieldPercent = new QSpinBox(groupConditionHpField);
        spinConditionHpFieldPercent->setObjectName(QStringLiteral("spinConditionHpFieldPercent"));

        gridLayout_20->addWidget(spinConditionHpFieldPercent, 0, 0, 1, 1);

        spinConditionHpFieldFixed = new QSpinBox(groupConditionHpField);
        spinConditionHpFieldFixed->setObjectName(QStringLiteral("spinConditionHpFieldFixed"));
        spinConditionHpFieldFixed->setMaximumSize(QSize(17, 16777215));

        gridLayout_20->addWidget(spinConditionHpFieldFixed, 0, 1, 1, 1);


        gridLayout_21->addWidget(groupConditionHpField, 1, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionHp, 8, 0, 1, 4);

        groupConditionMp = new QGroupBox(ConditionPropertiesDB);
        groupConditionMp->setObjectName(QStringLiteral("groupConditionMp"));
        gridLayout_25 = new QGridLayout(groupConditionMp);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        groupConditionMpBattle = new QGroupBox(groupConditionMp);
        groupConditionMpBattle->setObjectName(QStringLiteral("groupConditionMpBattle"));
        groupConditionMpBattle->setFlat(true);
        gridLayout_26 = new QGridLayout(groupConditionMpBattle);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setHorizontalSpacing(0);
        toolConditionMpBattleEffect = new QToolButton(groupConditionMpBattle);
        toolConditionMpBattleEffect->setObjectName(QStringLiteral("toolConditionMpBattleEffect"));

        gridLayout_26->addWidget(toolConditionMpBattleEffect, 0, 2, 1, 1);

        spinConditionMpBattlePercent = new QSpinBox(groupConditionMpBattle);
        spinConditionMpBattlePercent->setObjectName(QStringLiteral("spinConditionMpBattlePercent"));

        gridLayout_26->addWidget(spinConditionMpBattlePercent, 0, 0, 1, 1);

        spinConditionMpBattleFixed = new QSpinBox(groupConditionMpBattle);
        spinConditionMpBattleFixed->setObjectName(QStringLiteral("spinConditionMpBattleFixed"));
        spinConditionMpBattleFixed->setMaximumSize(QSize(17, 16777215));

        gridLayout_26->addWidget(spinConditionMpBattleFixed, 0, 1, 1, 1);


        gridLayout_25->addWidget(groupConditionMpBattle, 0, 0, 1, 1);

        groupConditionMpField = new QGroupBox(groupConditionMp);
        groupConditionMpField->setObjectName(QStringLiteral("groupConditionMpField"));
        groupConditionMpField->setFlat(true);
        gridLayout_27 = new QGridLayout(groupConditionMpField);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        gridLayout_27->setHorizontalSpacing(0);
        toolConditionMpFieldEffect = new QToolButton(groupConditionMpField);
        toolConditionMpFieldEffect->setObjectName(QStringLiteral("toolConditionMpFieldEffect"));

        gridLayout_27->addWidget(toolConditionMpFieldEffect, 0, 2, 1, 1);

        spinConditionMpFieldPercent = new QSpinBox(groupConditionMpField);
        spinConditionMpFieldPercent->setObjectName(QStringLiteral("spinConditionMpFieldPercent"));

        gridLayout_27->addWidget(spinConditionMpFieldPercent, 0, 0, 1, 1);

        spinConditionMpFieldFixed = new QSpinBox(groupConditionMpField);
        spinConditionMpFieldFixed->setObjectName(QStringLiteral("spinConditionMpFieldFixed"));
        spinConditionMpFieldFixed->setMaximumSize(QSize(17, 16777215));

        gridLayout_27->addWidget(spinConditionMpFieldFixed, 0, 1, 1, 1);


        gridLayout_25->addWidget(groupConditionMpField, 1, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionMp, 9, 0, 1, 4);

        groupConditionAction = new QGroupBox(ConditionPropertiesDB);
        groupConditionAction->setObjectName(QStringLiteral("groupConditionAction"));
        gridLayout_28 = new QGridLayout(groupConditionAction);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        comboConditionAction = new QComboBox(groupConditionAction);
        comboConditionAction->setObjectName(QStringLiteral("comboConditionAction"));

        gridLayout_28->addWidget(comboConditionAction, 0, 0, 1, 1);


        gridLayout_29->addWidget(groupConditionAction, 10, 0, 1, 4);

        groupConditionName->raise();
        groupConditionClasification->raise();
        groupConditionColor->raise();
        groupConditionPririty->raise();
        groupConditionRestriction->raise();
        groupConditionSpecial->raise();
        groupConditionChance->raise();
        groupConditionRank->raise();
        groupConditionRankA->raise();
        groupConditionRankB->raise();
        groupConditionRankC->raise();
        groupConditionHeal->raise();
        groupConditionChangeStatus->raise();
        groupConditionBlockAttribute->raise();
        groupConditionHp->raise();
        groupConditionMp->raise();
        groupConditionAction->raise();

        retranslateUi(ConditionPropertiesDB);
        QObject::connect(checkConditionBlockSkill, SIGNAL(clicked(bool)), spinConditionBlockSkill, SLOT(setEnabled(bool)));
        QObject::connect(checkConditionBlockAttack, SIGNAL(clicked(bool)), spinConditionBlockAttack, SLOT(setEnabled(bool)));
        QObject::connect(checkConditionAgility, SIGNAL(clicked(bool)), spinConditionAgility, SLOT(setEnabled(bool)));
        QObject::connect(checkConditionMind, SIGNAL(clicked(bool)), spinConditionMind, SLOT(setEnabled(bool)));
        QObject::connect(checkConditionDefense, SIGNAL(clicked(bool)), spinConditionDefense, SLOT(setEnabled(bool)));
        QObject::connect(checkConditionAttack, SIGNAL(clicked(bool)), spinConditionAttack, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ConditionPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *ConditionPropertiesDB)
    {
        ConditionPropertiesDB->setWindowTitle(QApplication::translate("ConditionPropertiesDB", "Form", 0));
        groupConditionName->setTitle(QApplication::translate("ConditionPropertiesDB", "Name", 0));
        groupConditionClasification->setTitle(QApplication::translate("ConditionPropertiesDB", "Clasification", 0));
        comboConditionClasification->clear();
        comboConditionClasification->insertItems(0, QStringList()
         << QApplication::translate("ConditionPropertiesDB", "Batle", 0)
         << QApplication::translate("ConditionPropertiesDB", "Batle & Field", 0)
        );
        groupConditionColor->setTitle(QApplication::translate("ConditionPropertiesDB", "Color", 0));
        comboConditionColor->setItemText(0, QString());
        comboConditionColor->setItemText(1, QString());
        comboConditionColor->setItemText(2, QString());
        comboConditionColor->setItemText(3, QString());
        comboConditionColor->setItemText(4, QString());
        comboConditionColor->setItemText(5, QString());
        comboConditionColor->setItemText(6, QString());
        comboConditionColor->setItemText(7, QString());
        comboConditionColor->setItemText(8, QString());
        comboConditionColor->setItemText(9, QString());
        comboConditionColor->setItemText(10, QString());
        comboConditionColor->setItemText(11, QString());
        comboConditionColor->setItemText(12, QString());
        comboConditionColor->setItemText(13, QString());
        comboConditionColor->setItemText(14, QString());
        comboConditionColor->setItemText(15, QString());
        comboConditionColor->setItemText(16, QString());
        comboConditionColor->setItemText(17, QString());
        comboConditionColor->setItemText(18, QString());
        comboConditionColor->setItemText(19, QString());

        groupConditionPririty->setTitle(QApplication::translate("ConditionPropertiesDB", "Priority", 0));
        groupConditionChance->setTitle(QApplication::translate("ConditionPropertiesDB", "Chance", 0));
        spinConditionChance->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        groupConditionRestriction->setTitle(QApplication::translate("ConditionPropertiesDB", "Restrictions", 0));
        comboConditionRestriction->clear();
        comboConditionRestriction->insertItems(0, QStringList()
         << QApplication::translate("ConditionPropertiesDB", "No restrictions", 0)
         << QApplication::translate("ConditionPropertiesDB", "Can't move", 0)
         << QApplication::translate("ConditionPropertiesDB", "Attack an enemy", 0)
         << QApplication::translate("ConditionPropertiesDB", "Attack an ally", 0)
        );
        groupConditionSpecial->setTitle(QApplication::translate("ConditionPropertiesDB", "Special", 0));
        checkConditionEvadeAttack->setText(QApplication::translate("ConditionPropertiesDB", "Evade attack", 0));
        checkConditionCantSwitchTeam->setText(QApplication::translate("ConditionPropertiesDB", "Can't switch team", 0));
        checkConditionReflectSkill->setText(QApplication::translate("ConditionPropertiesDB", "Reflect Skill", 0));
        groupConditionRank->setTitle(QApplication::translate("ConditionPropertiesDB", "Rank Effect", 0));
        groupConditionRankA->setTitle(QApplication::translate("ConditionPropertiesDB", "A", 0));
        spinConditionRankA->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        groupConditionRankD->setTitle(QApplication::translate("ConditionPropertiesDB", "D", 0));
        spinConditionRankD->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        groupConditionRankC->setTitle(QApplication::translate("ConditionPropertiesDB", "C", 0));
        spinConditionRankC->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        groupConditionRankB->setTitle(QApplication::translate("ConditionPropertiesDB", "B", 0));
        spinConditionRankB->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        groupConditionRankE->setTitle(QApplication::translate("ConditionPropertiesDB", "E", 0));
        spinConditionRankE->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        groupConditionHeal->setTitle(QApplication::translate("ConditionPropertiesDB", "Healing conditions", 0));
        groupConditionHealSpontaneous->setTitle(QApplication::translate("ConditionPropertiesDB", "Spontaneously", 0));
        spinConditionHealChance->setSuffix(QString());
        spinConditionHealChance->setPrefix(QString());
        spinConditionHealMaxTurns->setSuffix(QApplication::translate("ConditionPropertiesDB", " turn(s), with a chance of 0% every turn", 0));
        spinConditionHealMaxTurns->setPrefix(QApplication::translate("ConditionPropertiesDB", "Maximum of ", 0));
        toolConditionHeal->setText(QApplication::translate("ConditionPropertiesDB", "...", 0));
        groupConditionHealByHit->setTitle(QApplication::translate("ConditionPropertiesDB", "Getting Damage", 0));
        spinConditionHealChanceByHit->setSuffix(QApplication::translate("ConditionPropertiesDB", " % chance every taken hit", 0));
        groupConditionChangeStatus->setTitle(QApplication::translate("ConditionPropertiesDB", "Change character status", 0));
        checkConditionAttack->setText(QString());
        spinConditionAttack->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        spinConditionAttack->setPrefix(QApplication::translate("ConditionPropertiesDB", "Attack changes to ", 0));
        checkConditionDefense->setText(QString());
        spinConditionDefense->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        spinConditionDefense->setPrefix(QApplication::translate("ConditionPropertiesDB", "Defense changes to ", 0));
        checkConditionMind->setText(QString());
        spinConditionMind->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        spinConditionMind->setPrefix(QApplication::translate("ConditionPropertiesDB", "Mind changes to ", 0));
        checkConditionAgility->setText(QString());
        spinConditionAgility->setSuffix(QApplication::translate("ConditionPropertiesDB", " %", 0));
        spinConditionAgility->setPrefix(QApplication::translate("ConditionPropertiesDB", "Agility changes to ", 0));
        groupConditionBlockAttribute->setTitle(QApplication::translate("ConditionPropertiesDB", "Blocks attribute", 0));
        checkConditionBlockAttack->setText(QString());
        spinConditionBlockAttack->setSuffix(QString());
        spinConditionBlockAttack->setPrefix(QApplication::translate("ConditionPropertiesDB", "Can't attack if atribute power is over ", 0));
        checkConditionBlockSkill->setText(QString());
        spinConditionBlockSkill->setSuffix(QString());
        spinConditionBlockSkill->setPrefix(QApplication::translate("ConditionPropertiesDB", "Can't use skill if atribute power is over ", 0));
        groupConditionHp->setTitle(QApplication::translate("ConditionPropertiesDB", "Afects HP", 0));
        groupConditionHpBattle->setTitle(QApplication::translate("ConditionPropertiesDB", "Battle", 0));
        toolConditionHpBattleEffect->setText(QApplication::translate("ConditionPropertiesDB", "...", 0));
        spinConditionHpBattlePercent->setSuffix(QApplication::translate("ConditionPropertiesDB", " / 100 + 0) every turn", 0));
        spinConditionHpBattlePercent->setPrefix(QApplication::translate("ConditionPropertiesDB", "(Max HP * ", 0));
        groupConditionHpField->setTitle(QApplication::translate("ConditionPropertiesDB", "Field", 0));
        toolConditionHpFieldEffect->setText(QApplication::translate("ConditionPropertiesDB", "...", 0));
        spinConditionHpFieldPercent->setSuffix(QApplication::translate("ConditionPropertiesDB", " / 100 + 0) every step", 0));
        spinConditionHpFieldPercent->setPrefix(QApplication::translate("ConditionPropertiesDB", "(Max HP * ", 0));
        groupConditionMp->setTitle(QApplication::translate("ConditionPropertiesDB", "Afects MP", 0));
        groupConditionMpBattle->setTitle(QApplication::translate("ConditionPropertiesDB", "Battle", 0));
        toolConditionMpBattleEffect->setText(QApplication::translate("ConditionPropertiesDB", "...", 0));
        spinConditionMpBattlePercent->setSuffix(QApplication::translate("ConditionPropertiesDB", " / 100 + 0) every turn", 0));
        spinConditionMpBattlePercent->setPrefix(QApplication::translate("ConditionPropertiesDB", "(Max MP * ", 0));
        groupConditionMpField->setTitle(QApplication::translate("ConditionPropertiesDB", "Field", 0));
        toolConditionMpFieldEffect->setText(QApplication::translate("ConditionPropertiesDB", "...", 0));
        spinConditionMpFieldPercent->setSuffix(QApplication::translate("ConditionPropertiesDB", " / 100 + 0) every step", 0));
        spinConditionMpFieldPercent->setPrefix(QApplication::translate("ConditionPropertiesDB", "(Max MP * ", 0));
        groupConditionAction->setTitle(QApplication::translate("ConditionPropertiesDB", "Battle Action", 0));
    } // retranslateUi

};

namespace Ui {
    class ConditionPropertiesDB: public Ui_ConditionPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDITIONPROPERTIESDB_H
