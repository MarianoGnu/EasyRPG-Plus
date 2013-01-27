/********************************************************************************
** Form generated from reading UI file 'skillpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKILLPROPERTIESDB_H
#define UI_SKILLPROPERTIESDB_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkillPropertiesDB
{
public:
    QGridLayout *gridLayout;
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

    void setupUi(QWidget *SkillPropertiesDB)
    {
        if (SkillPropertiesDB->objectName().isEmpty())
            SkillPropertiesDB->setObjectName(QStringLiteral("SkillPropertiesDB"));
        SkillPropertiesDB->resize(437, 1035);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SkillPropertiesDB->sizePolicy().hasHeightForWidth());
        SkillPropertiesDB->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SkillPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupSkilltName = new QGroupBox(SkillPropertiesDB);
        groupSkilltName->setObjectName(QStringLiteral("groupSkilltName"));
        groupSkilltName->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSkilltName->sizePolicy().hasHeightForWidth());
        groupSkilltName->setSizePolicy(sizePolicy1);
        groupSkilltName->setMinimumSize(QSize(0, 50));
        groupSkilltName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_56 = new QGridLayout(groupSkilltName);
        gridLayout_56->setObjectName(QStringLiteral("gridLayout_56"));
        lineSkillName = new QLineEdit(groupSkilltName);
        lineSkillName->setObjectName(QStringLiteral("lineSkillName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineSkillName->sizePolicy().hasHeightForWidth());
        lineSkillName->setSizePolicy(sizePolicy2);
        lineSkillName->setMinimumSize(QSize(0, 0));

        gridLayout_56->addWidget(lineSkillName, 0, 0, 1, 1);


        gridLayout->addWidget(groupSkilltName, 0, 0, 1, 2);

        groupSkillCost = new QGroupBox(SkillPropertiesDB);
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


        gridLayout->addWidget(groupSkillCost, 1, 0, 1, 2);

        groupSkillDesc = new QGroupBox(SkillPropertiesDB);
        groupSkillDesc->setObjectName(QStringLiteral("groupSkillDesc"));
        gridLayout_57 = new QGridLayout(groupSkillDesc);
        gridLayout_57->setObjectName(QStringLiteral("gridLayout_57"));
        lineSkillDesc = new QLineEdit(groupSkillDesc);
        lineSkillDesc->setObjectName(QStringLiteral("lineSkillDesc"));

        gridLayout_57->addWidget(lineSkillDesc, 0, 0, 1, 1);


        gridLayout->addWidget(groupSkillDesc, 2, 0, 1, 1);

        groupSkillType = new QGroupBox(SkillPropertiesDB);
        groupSkillType->setObjectName(QStringLiteral("groupSkillType"));
        groupSkillType->setMinimumSize(QSize(200, 0));
        gridLayout_53 = new QGridLayout(groupSkillType);
        gridLayout_53->setObjectName(QStringLiteral("gridLayout_53"));
        comboSkillType = new QComboBox(groupSkillType);
        comboSkillType->setObjectName(QStringLiteral("comboSkillType"));

        gridLayout_53->addWidget(comboSkillType, 0, 0, 1, 1);


        gridLayout->addWidget(groupSkillType, 2, 1, 1, 1);

        stackedSkill = new QStackedWidget(SkillPropertiesDB);
        stackedSkill->setObjectName(QStringLiteral("stackedSkill"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedSkill->sizePolicy().hasHeightForWidth());
        stackedSkill->setSizePolicy(sizePolicy3);
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
        QPalette palette;
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 127, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 106, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 42, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 56, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        lcdSkillHitChance->setPalette(palette);
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
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        lcdSkillMindChance->setPalette(palette1);
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
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        lcdSkillVariance->setPalette(palette2);
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
        gridLayout_74 = new QGridLayout(pageSkillEscape);
        gridLayout_74->setObjectName(QStringLiteral("gridLayout_74"));
        gridLayout_74->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_74->setContentsMargins(0, 0, 0, 0);
        groupSkillEscapeSoundEffect = new QGroupBox(pageSkillEscape);
        groupSkillEscapeSoundEffect->setObjectName(QStringLiteral("groupSkillEscapeSoundEffect"));
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

        gridLayout->addWidget(stackedSkill, 3, 0, 1, 2);


        retranslateUi(SkillPropertiesDB);

        stackedSkill->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(SkillPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *SkillPropertiesDB)
    {
        SkillPropertiesDB->setWindowTitle(QApplication::translate("SkillPropertiesDB", "Form", 0));
        groupSkilltName->setTitle(QApplication::translate("SkillPropertiesDB", "Name", 0));
        groupSkillCost->setTitle(QApplication::translate("SkillPropertiesDB", "Mp Cost", 0));
        radioSkillFixedCost->setText(QApplication::translate("SkillPropertiesDB", "Fixed", 0));
        radioSkillPercentCost->setText(QApplication::translate("SkillPropertiesDB", "Percent", 0));
        spinSkillPercentCost->setPrefix(QApplication::translate("SkillPropertiesDB", "% ", 0));
        groupSkillDesc->setTitle(QApplication::translate("SkillPropertiesDB", "Description", 0));
        groupSkillType->setTitle(QApplication::translate("SkillPropertiesDB", "Skill Type", 0));
        comboSkillType->clear();
        comboSkillType->insertItems(0, QStringList()
         << QApplication::translate("SkillPropertiesDB", "Normal", 0)
         << QApplication::translate("SkillPropertiesDB", "Teleport", 0)
         << QApplication::translate("SkillPropertiesDB", "Escape", 0)
         << QApplication::translate("SkillPropertiesDB", "Variable", 0)
         << QApplication::translate("SkillPropertiesDB", "Call Event", 0)
        );
        groupSkillDamage->setTitle(QApplication::translate("SkillPropertiesDB", "Basic Damage", 0));
        groupSkillReduce->setTitle(QApplication::translate("SkillPropertiesDB", "Reduce", 0));
        checkSkillReduceHp->setText(QApplication::translate("SkillPropertiesDB", "Hp", 0));
        checkSkillReduceMind->setText(QApplication::translate("SkillPropertiesDB", "Mind", 0));
        checkSkillReduceMp->setText(QApplication::translate("SkillPropertiesDB", "Mp", 0));
        checkSkillReduceAgility->setText(QApplication::translate("SkillPropertiesDB", "Agility", 0));
        checkSkillReduceAttack->setText(QApplication::translate("SkillPropertiesDB", "Attack", 0));
        checkSkillAbsorbs->setText(QApplication::translate("SkillPropertiesDB", "Absorbtion", 0));
        checkSkillReduceDefense->setText(QApplication::translate("SkillPropertiesDB", "Defense", 0));
        checkSkillIgnoreDefense->setText(QApplication::translate("SkillPropertiesDB", "Ignore Def.", 0));
        groupSkillSuccessRate->setTitle(QApplication::translate("SkillPropertiesDB", "Success Rate", 0));
        spinSkillSuccessRate->setPrefix(QApplication::translate("SkillPropertiesDB", "% ", 0));
        groupSkillMindChance->setTitle(QApplication::translate("SkillPropertiesDB", "Min Chance", 0));
        QTableWidgetItem *___qtablewidgetitem = tableSkillA->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SkillPropertiesDB", "0", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableSkillA->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SkillPropertiesDB", "1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableSkillA->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SkillPropertiesDB", "2", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableSkillA->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SkillPropertiesDB", "3", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableSkillA->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SkillPropertiesDB", "4", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableSkillA->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SkillPropertiesDB", "5", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableSkillA->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SkillPropertiesDB", "6", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableSkillA->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("SkillPropertiesDB", "7", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableSkillA->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("SkillPropertiesDB", "8", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableSkillA->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("SkillPropertiesDB", "9", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableSkillA->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("SkillPropertiesDB", "10", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableSkillA->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("SkillPropertiesDB", "New Row", 0));

        const bool __sortingEnabled = tableSkillA->isSortingEnabled();
        tableSkillA->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableSkillA->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("SkillPropertiesDB", "0", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableSkillA->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("SkillPropertiesDB", "1", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableSkillA->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("SkillPropertiesDB", "2", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableSkillA->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("SkillPropertiesDB", "3", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableSkillA->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("SkillPropertiesDB", "4", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableSkillA->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("SkillPropertiesDB", "5", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableSkillA->item(0, 6);
        ___qtablewidgetitem18->setText(QApplication::translate("SkillPropertiesDB", "6", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableSkillA->item(0, 7);
        ___qtablewidgetitem19->setText(QApplication::translate("SkillPropertiesDB", "7", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableSkillA->item(0, 8);
        ___qtablewidgetitem20->setText(QApplication::translate("SkillPropertiesDB", "8", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableSkillA->item(0, 9);
        ___qtablewidgetitem21->setText(QApplication::translate("SkillPropertiesDB", "9", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableSkillA->item(0, 10);
        ___qtablewidgetitem22->setText(QApplication::translate("SkillPropertiesDB", "10", 0));
        tableSkillA->setSortingEnabled(__sortingEnabled);

        groupSkillMindChance_2->setTitle(QApplication::translate("SkillPropertiesDB", "Mind Chance", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableSkillB->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("SkillPropertiesDB", "0", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableSkillB->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("SkillPropertiesDB", "1", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableSkillB->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("SkillPropertiesDB", "2", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableSkillB->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("SkillPropertiesDB", "3", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableSkillB->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("SkillPropertiesDB", "4", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableSkillB->horizontalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("SkillPropertiesDB", "5", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableSkillB->horizontalHeaderItem(6);
        ___qtablewidgetitem29->setText(QApplication::translate("SkillPropertiesDB", "6", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableSkillB->horizontalHeaderItem(7);
        ___qtablewidgetitem30->setText(QApplication::translate("SkillPropertiesDB", "7", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableSkillB->horizontalHeaderItem(8);
        ___qtablewidgetitem31->setText(QApplication::translate("SkillPropertiesDB", "8", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableSkillB->horizontalHeaderItem(9);
        ___qtablewidgetitem32->setText(QApplication::translate("SkillPropertiesDB", "9", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableSkillB->horizontalHeaderItem(10);
        ___qtablewidgetitem33->setText(QApplication::translate("SkillPropertiesDB", "10", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableSkillB->verticalHeaderItem(0);
        ___qtablewidgetitem34->setText(QApplication::translate("SkillPropertiesDB", "New Row", 0));

        const bool __sortingEnabled1 = tableSkillB->isSortingEnabled();
        tableSkillB->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem35 = tableSkillB->item(0, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("SkillPropertiesDB", "0", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableSkillB->item(0, 1);
        ___qtablewidgetitem36->setText(QApplication::translate("SkillPropertiesDB", "1", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableSkillB->item(0, 2);
        ___qtablewidgetitem37->setText(QApplication::translate("SkillPropertiesDB", "2", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableSkillB->item(0, 3);
        ___qtablewidgetitem38->setText(QApplication::translate("SkillPropertiesDB", "3", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableSkillB->item(0, 4);
        ___qtablewidgetitem39->setText(QApplication::translate("SkillPropertiesDB", "4", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableSkillB->item(0, 5);
        ___qtablewidgetitem40->setText(QApplication::translate("SkillPropertiesDB", "5", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableSkillB->item(0, 6);
        ___qtablewidgetitem41->setText(QApplication::translate("SkillPropertiesDB", "6", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableSkillB->item(0, 7);
        ___qtablewidgetitem42->setText(QApplication::translate("SkillPropertiesDB", "7", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableSkillB->item(0, 8);
        ___qtablewidgetitem43->setText(QApplication::translate("SkillPropertiesDB", "8", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableSkillB->item(0, 9);
        ___qtablewidgetitem44->setText(QApplication::translate("SkillPropertiesDB", "9", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableSkillB->item(0, 10);
        ___qtablewidgetitem45->setText(QApplication::translate("SkillPropertiesDB", "10", 0));
        tableSkillB->setSortingEnabled(__sortingEnabled1);

        groupSkillVariance->setTitle(QApplication::translate("SkillPropertiesDB", "Variance", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableSkillC->horizontalHeaderItem(0);
        ___qtablewidgetitem46->setText(QApplication::translate("SkillPropertiesDB", "0", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableSkillC->horizontalHeaderItem(1);
        ___qtablewidgetitem47->setText(QApplication::translate("SkillPropertiesDB", "1", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableSkillC->horizontalHeaderItem(2);
        ___qtablewidgetitem48->setText(QApplication::translate("SkillPropertiesDB", "2", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableSkillC->horizontalHeaderItem(3);
        ___qtablewidgetitem49->setText(QApplication::translate("SkillPropertiesDB", "3", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableSkillC->horizontalHeaderItem(4);
        ___qtablewidgetitem50->setText(QApplication::translate("SkillPropertiesDB", "4", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableSkillC->horizontalHeaderItem(5);
        ___qtablewidgetitem51->setText(QApplication::translate("SkillPropertiesDB", "5", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableSkillC->horizontalHeaderItem(6);
        ___qtablewidgetitem52->setText(QApplication::translate("SkillPropertiesDB", "6", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableSkillC->horizontalHeaderItem(7);
        ___qtablewidgetitem53->setText(QApplication::translate("SkillPropertiesDB", "7", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableSkillC->horizontalHeaderItem(8);
        ___qtablewidgetitem54->setText(QApplication::translate("SkillPropertiesDB", "8", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableSkillC->horizontalHeaderItem(9);
        ___qtablewidgetitem55->setText(QApplication::translate("SkillPropertiesDB", "9", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableSkillC->horizontalHeaderItem(10);
        ___qtablewidgetitem56->setText(QApplication::translate("SkillPropertiesDB", "10", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableSkillC->verticalHeaderItem(0);
        ___qtablewidgetitem57->setText(QApplication::translate("SkillPropertiesDB", "New Row", 0));

        const bool __sortingEnabled2 = tableSkillC->isSortingEnabled();
        tableSkillC->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem58 = tableSkillC->item(0, 0);
        ___qtablewidgetitem58->setText(QApplication::translate("SkillPropertiesDB", "0", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableSkillC->item(0, 1);
        ___qtablewidgetitem59->setText(QApplication::translate("SkillPropertiesDB", "1", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableSkillC->item(0, 2);
        ___qtablewidgetitem60->setText(QApplication::translate("SkillPropertiesDB", "2", 0));
        QTableWidgetItem *___qtablewidgetitem61 = tableSkillC->item(0, 3);
        ___qtablewidgetitem61->setText(QApplication::translate("SkillPropertiesDB", "3", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableSkillC->item(0, 4);
        ___qtablewidgetitem62->setText(QApplication::translate("SkillPropertiesDB", "4", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableSkillC->item(0, 5);
        ___qtablewidgetitem63->setText(QApplication::translate("SkillPropertiesDB", "5", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableSkillC->item(0, 6);
        ___qtablewidgetitem64->setText(QApplication::translate("SkillPropertiesDB", "6", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableSkillC->item(0, 7);
        ___qtablewidgetitem65->setText(QApplication::translate("SkillPropertiesDB", "7", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableSkillC->item(0, 8);
        ___qtablewidgetitem66->setText(QApplication::translate("SkillPropertiesDB", "8", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableSkillC->item(0, 9);
        ___qtablewidgetitem67->setText(QApplication::translate("SkillPropertiesDB", "9", 0));
        QTableWidgetItem *___qtablewidgetitem68 = tableSkillC->item(0, 10);
        ___qtablewidgetitem68->setText(QApplication::translate("SkillPropertiesDB", "10", 0));
        tableSkillC->setSortingEnabled(__sortingEnabled2);

        groupSkillConditionEffect->setTitle(QApplication::translate("SkillPropertiesDB", "Condition Effect", 0));
        radioSkillCausesCondition->setText(QApplication::translate("SkillPropertiesDB", "Causes", 0));
        radioSkillCuresCondition->setText(QApplication::translate("SkillPropertiesDB", "Cures", 0));

        const bool __sortingEnabled3 = listSkillConditionEffect->isSortingEnabled();
        listSkillConditionEffect->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listSkillConditionEffect->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("SkillPropertiesDB", "Poison", 0));
        listSkillConditionEffect->setSortingEnabled(__sortingEnabled3);

        groupSkillAttribute->setTitle(QApplication::translate("SkillPropertiesDB", "Attribute Defense", 0));
        checkSkillReduceAttributeDefense->setText(QApplication::translate("SkillPropertiesDB", "Decrese Attribute Def", 0));

        const bool __sortingEnabled4 = listSkillAttribute->isSortingEnabled();
        listSkillAttribute->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = listSkillAttribute->item(0);
        ___qlistwidgetitem1->setText(QApplication::translate("SkillPropertiesDB", "Fire", 0));
        listSkillAttribute->setSortingEnabled(__sortingEnabled4);

        groupSkillBatleAnimation->setTitle(QApplication::translate("SkillPropertiesDB", "Battle Animation", 0));
        groupSkillCharacterAnimation->setTitle(QApplication::translate("SkillPropertiesDB", "Character Animation", 0));
        pushSkillCharacterAnimation->setText(QApplication::translate("SkillPropertiesDB", "Set...", 0));
        groupSkillTeleportSoundEffect->setTitle(QApplication::translate("SkillPropertiesDB", "Sound Effect", 0));
        toolSkillTeleportSelectSound->setText(QApplication::translate("SkillPropertiesDB", "...", 0));
        groupSkillEscapeSoundEffect->setTitle(QApplication::translate("SkillPropertiesDB", "Sound Effect", 0));
        toolSkillEscapeSelectSound->setText(QApplication::translate("SkillPropertiesDB", "...", 0));
        groupSkillVariableSoundEffect->setTitle(QApplication::translate("SkillPropertiesDB", "Sound Effect", 0));
        toolSkillVariableSelectSound->setText(QApplication::translate("SkillPropertiesDB", "...", 0));
        groupSkillVariable->setTitle(QApplication::translate("SkillPropertiesDB", "Variable", 0));
        toolSkillVariableSelectVar->setText(QApplication::translate("SkillPropertiesDB", "...", 0));
        groupSkillVariableValue->setTitle(QApplication::translate("SkillPropertiesDB", "Value", 0));
        toolSkillVariableSelectValue->setText(QApplication::translate("SkillPropertiesDB", "...", 0));
        groupSkillVariableAt->setTitle(QApplication::translate("SkillPropertiesDB", "Avaible at", 0));
        checkSkillVariableAtMap->setText(QApplication::translate("SkillPropertiesDB", "Map", 0));
        checkSkillVariableAtBattle->setText(QApplication::translate("SkillPropertiesDB", "Battle", 0));
        groupSkillCommonEventSoundEffect->setTitle(QApplication::translate("SkillPropertiesDB", "Sound Effect", 0));
        toolSkillCommonEventSelectSound->setText(QApplication::translate("SkillPropertiesDB", "...", 0));
        groupSkillSelectCommonEvent->setTitle(QApplication::translate("SkillPropertiesDB", "CommonEvent", 0));
        groupSkillCommonEventAt->setTitle(QApplication::translate("SkillPropertiesDB", "Avaible at", 0));
        checkSkillCommonEventAtMap->setText(QApplication::translate("SkillPropertiesDB", "Map", 0));
        checkSkillCommonEventAtBattle->setText(QApplication::translate("SkillPropertiesDB", "Battle", 0));
    } // retranslateUi

};

namespace Ui {
    class SkillPropertiesDB: public Ui_SkillPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLPROPERTIESDB_H
