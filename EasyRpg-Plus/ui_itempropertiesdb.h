/********************************************************************************
** Form generated from reading UI file 'itempropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMPROPERTIESDB_H
#define UI_ITEMPROPERTIESDB_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemPropertiesDB
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupItemsName;
    QGridLayout *gridLayout_100;
    QLineEdit *lineItemName;
    QGroupBox *groupItemDesc;
    QGridLayout *gridLayout_99;
    QLineEdit *lineItemDesc;
    QGroupBox *groupItemPrice;
    QGridLayout *gridLayout_206;
    QSpinBox *spinItemPrice;
    QStackedWidget *stackedItem;
    QWidget *pageItemKey;
    QGridLayout *gridLayout_107;
    QWidget *pageItemEquipment;
    QGridLayout *gridLayout_166;
    QGroupBox *groupEquipmentUsableBy;
    QGridLayout *gridLayout_181;
    QListWidget *listEquipmentUsableBy;
    QGroupBox *groupEquipmentSlotB;
    QGridLayout *gridLayout_190;
    QComboBox *comboEquipmentSlotB;
    QGroupBox *groupEquipmentSlotA;
    QGridLayout *gridLayout_188;
    QComboBox *comboEquipmentSlotA;
    QGroupBox *groupEquipmentSkill;
    QGridLayout *gridLayout_189;
    QComboBox *comboEquipmentSkill;
    QGroupBox *groupEquipmentConditionEffect;
    QGridLayout *gridLayout_179;
    QRadioButton *radioEquipmentCausesCondition;
    QRadioButton *radioEquipmentCuresCondition;
    QListWidget *listEquipmentConditionEffect;
    QGroupBox *groupEquipmentConditionChance;
    QGridLayout *gridLayout_180;
    QSpinBox *spinEquipmentConditionChance;
    QGroupBox *groupEquipmentValueChange;
    QGridLayout *gridLayout_182;
    QGroupBox *groupEquipmentAttack;
    QGridLayout *gridLayout_183;
    QSpinBox *spinEquipmentAttack;
    QGroupBox *groupEquipmentMind;
    QGridLayout *gridLayout_184;
    QSpinBox *spinEquipmentMind;
    QGroupBox *groupEquipmentDefense;
    QGridLayout *gridLayout_185;
    QSpinBox *spinEquipmentDefense;
    QGroupBox *groupEquipmentAgility;
    QGridLayout *gridLayout_186;
    QSpinBox *spinEquipmentAgility;
    QGroupBox *groupEquipmentAttibute;
    QGridLayout *gridLayout_187;
    QListWidget *listEquipmentAttibute;
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
    QGridLayout *gridLayout_101;
    QCheckBox *checkMedicineOnlyOnField;
    QCheckBox *checkMedicineOnlyOnFainted;
    QGroupBox *groupMedicineCausesCondition;
    QGridLayout *gridLayout_103;
    QListWidget *listMedicineCausesCondition;
    QGroupBox *groupMedicineUsableBy;
    QGridLayout *gridLayout_105;
    QListWidget *listMedicineUsableBy;
    QGroupBox *groupMedicineEffectRange;
    QGridLayout *gridLayout_106;
    QComboBox *comboMedicineEfectRange;
    QGroupBox *groupMedicineUseCount;
    QGridLayout *gridLayout_108;
    QComboBox *comboMedicineUseCount;
    QWidget *pageItemBook;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBookLearnedBy;
    QGridLayout *gridLayout_112;
    QListWidget *listBookLearnedBy;
    QGroupBox *groupBookSkill;
    QGridLayout *gridLayout_111;
    QComboBox *comboBookSkill;
    QGroupBox *groupBookUseCount;
    QGridLayout *gridLayout_110;
    QComboBox *comboBookUseCount;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageItemMaterial;
    QGridLayout *gridLayout_117;
    QGroupBox *groupMaterialUsableBy;
    QGridLayout *gridLayout_194;
    QListWidget *listMaterialUsableBy;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupMaterialAbilityValue;
    QGridLayout *gridLayout_116;
    QGroupBox *groupMaterialMaxHp;
    QGridLayout *gridLayout_113;
    QSpinBox *spinMaterialMaxHp;
    QGroupBox *groupMaterialMaxMp;
    QGridLayout *gridLayout_114;
    QSpinBox *spinMaterialMaxMp;
    QGroupBox *groupMaterialAgility;
    QGridLayout *gridLayout_115;
    QSpinBox *spinMaterialAgility;
    QGroupBox *groupMaterialMind;
    QGridLayout *gridLayout_191;
    QSpinBox *spinMaterialMind;
    QGroupBox *groupMaterialDefense;
    QGridLayout *gridLayout_192;
    QSpinBox *spinMaterialDefense;
    QGroupBox *groupMaterialAttack;
    QGridLayout *gridLayout_193;
    QSpinBox *spinMaterialAttack;
    QWidget *pageItemInvokeSkill;
    QGridLayout *gridLayout_195;
    QGroupBox *groupMaterialUsableBy_2;
    QGridLayout *gridLayout_196;
    QListWidget *listMaterialUsableBy_2;
    QGroupBox *groupBookSkill_2;
    QGridLayout *gridLayout_197;
    QComboBox *comboBookSkill_2;
    QGroupBox *groupScrollMessage;
    QGridLayout *gridLayout_198;
    QRadioButton *radioScrollMessageItem;
    QRadioButton *radioScrollMessageSkill;
    QSpacerItem *verticalSpacer;
    QWidget *pageItemVariable;
    QGridLayout *gridLayout_199;
    QGroupBox *groupItemVarZone;
    QGridLayout *gridLayout_201;
    QComboBox *comboItemVarZone;
    QGroupBox *groupItemVarType;
    QGridLayout *gridLayout_200;
    QComboBox *comboItemVarType;
    QGroupBox *groupItemVarIndex;
    QGridLayout *gridLayout_202;
    QListWidget *listItemVarIndex;
    QLineEdit *lineItemVarFilter;
    QPushButton *pushItemVarEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeItemVarLocation;
    QWidget *pageItemCommonEvent;
    QGridLayout *gridLayout_203;
    QGroupBox *groupItemEvEvent;
    QGridLayout *gridLayout_204;
    QComboBox *comboItemEvEvent;
    QGroupBox *groupItemEvZone;
    QGridLayout *gridLayout_205;
    QComboBox *comboItemEvZone;
    QStackedWidget *stackedEquipmentOptions;
    QWidget *pageWeaponOptions;
    QGridLayout *gridLayout_167;
    QGroupBox *groupWeaponOptions;
    QGridLayout *gridLayout_168;
    QGroupBox *groupWeaponSecuence;
    QGridLayout *gridLayout_169;
    QGraphicsView *graphicsWeaponActionSecuence;
    QPushButton *pushWeaponSecuence;
    QGroupBox *groupWeaponTargetAnimation;
    QGridLayout *gridLayout_174;
    QGraphicsView *graphicsWeaponTargetAnimation;
    QComboBox *comboWeaponTargetAnimation;
    QGroupBox *groupWeaponDamageOptions;
    QGridLayout *gridLayout_170;
    QGroupBox *groupWeaponMpCost;
    QGridLayout *gridLayout_171;
    QSpinBox *spinWeaponMpCost;
    QGroupBox *groupWeaponBaseDamage;
    QGridLayout *gridLayout_172;
    QSpinBox *spinWeaponBaseDamage;
    QGroupBox *groupWeaponCriticalChance;
    QGridLayout *gridLayout_173;
    QSpinBox *spinWeaponCriticalChance;
    QGroupBox *groupWeaponOptions_2;
    QGridLayout *gridLayout_175;
    QCheckBox *checkWeaponPreventiveAttack;
    QCheckBox *checkWeaponAttackTwise;
    QCheckBox *checkWeaponIgnoreEvasion;
    QCheckBox *checkWeaponCursed;
    QCheckBox *checkWeaponAttackAllEnemies;
    QWidget *pageArmor;
    QGridLayout *gridLayout_176;
    QGroupBox *groupArmorOptions;
    QGridLayout *gridLayout_177;
    QGroupBox *groupArmorOptions_2;
    QGridLayout *gridLayout_178;
    QCheckBox *checkArmorPreventCritical;
    QCheckBox *checkArmorEvadeAttack;
    QCheckBox *checkArmorConsumeHalfMp;
    QCheckBox *checkArmorPreventsDmgOnField;
    QCheckBox *checkArmorCursed;

    void setupUi(QWidget *ItemPropertiesDB)
    {
        if (ItemPropertiesDB->objectName().isEmpty())
            ItemPropertiesDB->setObjectName(QStringLiteral("ItemPropertiesDB"));
        ItemPropertiesDB->resize(542, 1331);
        gridLayout = new QGridLayout(ItemPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupItemsName = new QGroupBox(ItemPropertiesDB);
        groupItemsName->setObjectName(QStringLiteral("groupItemsName"));
        groupItemsName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupItemsName->sizePolicy().hasHeightForWidth());
        groupItemsName->setSizePolicy(sizePolicy);
        groupItemsName->setMinimumSize(QSize(0, 50));
        groupItemsName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_100 = new QGridLayout(groupItemsName);
        gridLayout_100->setObjectName(QStringLiteral("gridLayout_100"));
        lineItemName = new QLineEdit(groupItemsName);
        lineItemName->setObjectName(QStringLiteral("lineItemName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineItemName->sizePolicy().hasHeightForWidth());
        lineItemName->setSizePolicy(sizePolicy1);
        lineItemName->setMinimumSize(QSize(0, 0));

        gridLayout_100->addWidget(lineItemName, 0, 0, 1, 1);


        gridLayout->addWidget(groupItemsName, 0, 0, 1, 1);

        groupItemDesc = new QGroupBox(ItemPropertiesDB);
        groupItemDesc->setObjectName(QStringLiteral("groupItemDesc"));
        groupItemDesc->setMaximumSize(QSize(16777215, 50));
        gridLayout_99 = new QGridLayout(groupItemDesc);
        gridLayout_99->setObjectName(QStringLiteral("gridLayout_99"));
        lineItemDesc = new QLineEdit(groupItemDesc);
        lineItemDesc->setObjectName(QStringLiteral("lineItemDesc"));

        gridLayout_99->addWidget(lineItemDesc, 0, 0, 1, 1);


        gridLayout->addWidget(groupItemDesc, 1, 0, 1, 1);

        groupItemPrice = new QGroupBox(ItemPropertiesDB);
        groupItemPrice->setObjectName(QStringLiteral("groupItemPrice"));
        groupItemPrice->setMaximumSize(QSize(16777215, 55));
        gridLayout_206 = new QGridLayout(groupItemPrice);
        gridLayout_206->setObjectName(QStringLiteral("gridLayout_206"));
        spinItemPrice = new QSpinBox(groupItemPrice);
        spinItemPrice->setObjectName(QStringLiteral("spinItemPrice"));

        gridLayout_206->addWidget(spinItemPrice, 0, 0, 1, 1);


        gridLayout->addWidget(groupItemPrice, 2, 0, 1, 1);

        stackedItem = new QStackedWidget(ItemPropertiesDB);
        stackedItem->setObjectName(QStringLiteral("stackedItem"));
        pageItemKey = new QWidget();
        pageItemKey->setObjectName(QStringLiteral("pageItemKey"));
        gridLayout_107 = new QGridLayout(pageItemKey);
        gridLayout_107->setObjectName(QStringLiteral("gridLayout_107"));
        stackedItem->addWidget(pageItemKey);
        pageItemEquipment = new QWidget();
        pageItemEquipment->setObjectName(QStringLiteral("pageItemEquipment"));
        gridLayout_166 = new QGridLayout(pageItemEquipment);
        gridLayout_166->setObjectName(QStringLiteral("gridLayout_166"));
        gridLayout_166->setContentsMargins(0, 0, 0, 0);
        groupEquipmentUsableBy = new QGroupBox(pageItemEquipment);
        groupEquipmentUsableBy->setObjectName(QStringLiteral("groupEquipmentUsableBy"));
        groupEquipmentUsableBy->setMaximumSize(QSize(16777215, 271));
        gridLayout_181 = new QGridLayout(groupEquipmentUsableBy);
        gridLayout_181->setObjectName(QStringLiteral("gridLayout_181"));
        listEquipmentUsableBy = new QListWidget(groupEquipmentUsableBy);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem2->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem3->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listEquipmentUsableBy);
        __qlistwidgetitem4->setCheckState(Qt::Checked);
        listEquipmentUsableBy->setObjectName(QStringLiteral("listEquipmentUsableBy"));

        gridLayout_181->addWidget(listEquipmentUsableBy, 0, 0, 1, 1);


        gridLayout_166->addWidget(groupEquipmentUsableBy, 2, 0, 1, 1, Qt::AlignTop);

        groupEquipmentSlotB = new QGroupBox(pageItemEquipment);
        groupEquipmentSlotB->setObjectName(QStringLiteral("groupEquipmentSlotB"));
        groupEquipmentSlotB->setMaximumSize(QSize(16777215, 53));
        groupEquipmentSlotB->setCheckable(true);
        groupEquipmentSlotB->setChecked(false);
        gridLayout_190 = new QGridLayout(groupEquipmentSlotB);
        gridLayout_190->setObjectName(QStringLiteral("gridLayout_190"));
        comboEquipmentSlotB = new QComboBox(groupEquipmentSlotB);
        comboEquipmentSlotB->setObjectName(QStringLiteral("comboEquipmentSlotB"));

        gridLayout_190->addWidget(comboEquipmentSlotB, 0, 0, 1, 1);


        gridLayout_166->addWidget(groupEquipmentSlotB, 0, 1, 1, 1, Qt::AlignTop);

        groupEquipmentSlotA = new QGroupBox(pageItemEquipment);
        groupEquipmentSlotA->setObjectName(QStringLiteral("groupEquipmentSlotA"));
        groupEquipmentSlotA->setMaximumSize(QSize(16777215, 53));
        gridLayout_188 = new QGridLayout(groupEquipmentSlotA);
        gridLayout_188->setObjectName(QStringLiteral("gridLayout_188"));
        comboEquipmentSlotA = new QComboBox(groupEquipmentSlotA);
        comboEquipmentSlotA->setObjectName(QStringLiteral("comboEquipmentSlotA"));

        gridLayout_188->addWidget(comboEquipmentSlotA, 0, 0, 1, 1);


        gridLayout_166->addWidget(groupEquipmentSlotA, 0, 0, 1, 1, Qt::AlignTop);

        groupEquipmentSkill = new QGroupBox(pageItemEquipment);
        groupEquipmentSkill->setObjectName(QStringLiteral("groupEquipmentSkill"));
        groupEquipmentSkill->setCheckable(true);
        groupEquipmentSkill->setChecked(false);
        gridLayout_189 = new QGridLayout(groupEquipmentSkill);
        gridLayout_189->setObjectName(QStringLiteral("gridLayout_189"));
        comboEquipmentSkill = new QComboBox(groupEquipmentSkill);
        comboEquipmentSkill->setObjectName(QStringLiteral("comboEquipmentSkill"));

        gridLayout_189->addWidget(comboEquipmentSkill, 0, 0, 1, 1);


        gridLayout_166->addWidget(groupEquipmentSkill, 4, 0, 1, 2);

        groupEquipmentConditionEffect = new QGroupBox(pageItemEquipment);
        groupEquipmentConditionEffect->setObjectName(QStringLiteral("groupEquipmentConditionEffect"));
        groupEquipmentConditionEffect->setMaximumSize(QSize(16777215, 275));
        gridLayout_179 = new QGridLayout(groupEquipmentConditionEffect);
        gridLayout_179->setObjectName(QStringLiteral("gridLayout_179"));
        radioEquipmentCausesCondition = new QRadioButton(groupEquipmentConditionEffect);
        radioEquipmentCausesCondition->setObjectName(QStringLiteral("radioEquipmentCausesCondition"));
        radioEquipmentCausesCondition->setChecked(true);

        gridLayout_179->addWidget(radioEquipmentCausesCondition, 0, 0, 1, 1);

        radioEquipmentCuresCondition = new QRadioButton(groupEquipmentConditionEffect);
        radioEquipmentCuresCondition->setObjectName(QStringLiteral("radioEquipmentCuresCondition"));

        gridLayout_179->addWidget(radioEquipmentCuresCondition, 0, 1, 1, 1);

        listEquipmentConditionEffect = new QListWidget(groupEquipmentConditionEffect);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listEquipmentConditionEffect);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        listEquipmentConditionEffect->setObjectName(QStringLiteral("listEquipmentConditionEffect"));
        listEquipmentConditionEffect->setMinimumSize(QSize(0, 125));
        listEquipmentConditionEffect->setMaximumSize(QSize(16777215, 160));
        listEquipmentConditionEffect->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listEquipmentConditionEffect->setProperty("showDropIndicator", QVariant(false));
        listEquipmentConditionEffect->setResizeMode(QListView::Fixed);

        gridLayout_179->addWidget(listEquipmentConditionEffect, 1, 0, 1, 2);

        groupEquipmentConditionChance = new QGroupBox(groupEquipmentConditionEffect);
        groupEquipmentConditionChance->setObjectName(QStringLiteral("groupEquipmentConditionChance"));
        groupEquipmentConditionChance->setFlat(true);
        gridLayout_180 = new QGridLayout(groupEquipmentConditionChance);
        gridLayout_180->setObjectName(QStringLiteral("gridLayout_180"));
        spinEquipmentConditionChance = new QSpinBox(groupEquipmentConditionChance);
        spinEquipmentConditionChance->setObjectName(QStringLiteral("spinEquipmentConditionChance"));

        gridLayout_180->addWidget(spinEquipmentConditionChance, 0, 0, 1, 1);


        gridLayout_179->addWidget(groupEquipmentConditionChance, 2, 0, 1, 2);


        gridLayout_166->addWidget(groupEquipmentConditionEffect, 3, 1, 1, 1, Qt::AlignTop);

        groupEquipmentValueChange = new QGroupBox(pageItemEquipment);
        groupEquipmentValueChange->setObjectName(QStringLiteral("groupEquipmentValueChange"));
        gridLayout_182 = new QGridLayout(groupEquipmentValueChange);
        gridLayout_182->setObjectName(QStringLiteral("gridLayout_182"));
        groupEquipmentAttack = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentAttack->setObjectName(QStringLiteral("groupEquipmentAttack"));
        groupEquipmentAttack->setFlat(true);
        gridLayout_183 = new QGridLayout(groupEquipmentAttack);
        gridLayout_183->setObjectName(QStringLiteral("gridLayout_183"));
        spinEquipmentAttack = new QSpinBox(groupEquipmentAttack);
        spinEquipmentAttack->setObjectName(QStringLiteral("spinEquipmentAttack"));

        gridLayout_183->addWidget(spinEquipmentAttack, 0, 0, 1, 1);


        gridLayout_182->addWidget(groupEquipmentAttack, 0, 0, 1, 1);

        groupEquipmentMind = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentMind->setObjectName(QStringLiteral("groupEquipmentMind"));
        groupEquipmentMind->setFlat(true);
        gridLayout_184 = new QGridLayout(groupEquipmentMind);
        gridLayout_184->setObjectName(QStringLiteral("gridLayout_184"));
        spinEquipmentMind = new QSpinBox(groupEquipmentMind);
        spinEquipmentMind->setObjectName(QStringLiteral("spinEquipmentMind"));

        gridLayout_184->addWidget(spinEquipmentMind, 0, 0, 1, 1);


        gridLayout_182->addWidget(groupEquipmentMind, 1, 0, 1, 1);

        groupEquipmentDefense = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentDefense->setObjectName(QStringLiteral("groupEquipmentDefense"));
        groupEquipmentDefense->setFlat(true);
        gridLayout_185 = new QGridLayout(groupEquipmentDefense);
        gridLayout_185->setObjectName(QStringLiteral("gridLayout_185"));
        spinEquipmentDefense = new QSpinBox(groupEquipmentDefense);
        spinEquipmentDefense->setObjectName(QStringLiteral("spinEquipmentDefense"));

        gridLayout_185->addWidget(spinEquipmentDefense, 0, 0, 1, 1);


        gridLayout_182->addWidget(groupEquipmentDefense, 2, 0, 1, 1);

        groupEquipmentAgility = new QGroupBox(groupEquipmentValueChange);
        groupEquipmentAgility->setObjectName(QStringLiteral("groupEquipmentAgility"));
        groupEquipmentAgility->setFlat(true);
        gridLayout_186 = new QGridLayout(groupEquipmentAgility);
        gridLayout_186->setObjectName(QStringLiteral("gridLayout_186"));
        spinEquipmentAgility = new QSpinBox(groupEquipmentAgility);
        spinEquipmentAgility->setObjectName(QStringLiteral("spinEquipmentAgility"));

        gridLayout_186->addWidget(spinEquipmentAgility, 0, 0, 1, 1);


        gridLayout_182->addWidget(groupEquipmentAgility, 3, 0, 1, 1);


        gridLayout_166->addWidget(groupEquipmentValueChange, 2, 1, 1, 1, Qt::AlignTop);

        groupEquipmentAttibute = new QGroupBox(pageItemEquipment);
        groupEquipmentAttibute->setObjectName(QStringLiteral("groupEquipmentAttibute"));
        groupEquipmentAttibute->setMaximumSize(QSize(16777215, 275));
        gridLayout_187 = new QGridLayout(groupEquipmentAttibute);
        gridLayout_187->setObjectName(QStringLiteral("gridLayout_187"));
        listEquipmentAttibute = new QListWidget(groupEquipmentAttibute);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listEquipmentAttibute);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        __qlistwidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listEquipmentAttibute->setObjectName(QStringLiteral("listEquipmentAttibute"));
        listEquipmentAttibute->setMinimumSize(QSize(0, 160));

        gridLayout_187->addWidget(listEquipmentAttibute, 0, 0, 1, 1);


        gridLayout_166->addWidget(groupEquipmentAttibute, 3, 0, 1, 1, Qt::AlignTop);

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
        gridLayout_101 = new QGridLayout(groupMedicineOptions);
        gridLayout_101->setObjectName(QStringLiteral("gridLayout_101"));
        checkMedicineOnlyOnField = new QCheckBox(groupMedicineOptions);
        checkMedicineOnlyOnField->setObjectName(QStringLiteral("checkMedicineOnlyOnField"));

        gridLayout_101->addWidget(checkMedicineOnlyOnField, 0, 0, 1, 1);

        checkMedicineOnlyOnFainted = new QCheckBox(groupMedicineOptions);
        checkMedicineOnlyOnFainted->setObjectName(QStringLiteral("checkMedicineOnlyOnFainted"));

        gridLayout_101->addWidget(checkMedicineOnlyOnFainted, 1, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineOptions, 1, 0, 1, 1);

        groupMedicineCausesCondition = new QGroupBox(pageItemMedicine);
        groupMedicineCausesCondition->setObjectName(QStringLiteral("groupMedicineCausesCondition"));
        groupMedicineCausesCondition->setMinimumSize(QSize(0, 150));
        gridLayout_103 = new QGridLayout(groupMedicineCausesCondition);
        gridLayout_103->setObjectName(QStringLiteral("gridLayout_103"));
        listMedicineCausesCondition = new QListWidget(groupMedicineCausesCondition);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listMedicineCausesCondition);
        __qlistwidgetitem8->setCheckState(Qt::Unchecked);
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
        listMedicineCausesCondition->setObjectName(QStringLiteral("listMedicineCausesCondition"));

        gridLayout_103->addWidget(listMedicineCausesCondition, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineCausesCondition, 2, 1, 1, 1);

        groupMedicineUsableBy = new QGroupBox(pageItemMedicine);
        groupMedicineUsableBy->setObjectName(QStringLiteral("groupMedicineUsableBy"));
        gridLayout_105 = new QGridLayout(groupMedicineUsableBy);
        gridLayout_105->setObjectName(QStringLiteral("gridLayout_105"));
        listMedicineUsableBy = new QListWidget(groupMedicineUsableBy);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem17->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem18->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem19->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem20->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem21 = new QListWidgetItem(listMedicineUsableBy);
        __qlistwidgetitem21->setCheckState(Qt::Checked);
        listMedicineUsableBy->setObjectName(QStringLiteral("listMedicineUsableBy"));

        gridLayout_105->addWidget(listMedicineUsableBy, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineUsableBy, 2, 0, 1, 1);

        groupMedicineEffectRange = new QGroupBox(pageItemMedicine);
        groupMedicineEffectRange->setObjectName(QStringLiteral("groupMedicineEffectRange"));
        groupMedicineEffectRange->setMinimumSize(QSize(0, 55));
        gridLayout_106 = new QGridLayout(groupMedicineEffectRange);
        gridLayout_106->setObjectName(QStringLiteral("gridLayout_106"));
        comboMedicineEfectRange = new QComboBox(groupMedicineEffectRange);
        comboMedicineEfectRange->setObjectName(QStringLiteral("comboMedicineEfectRange"));

        gridLayout_106->addWidget(comboMedicineEfectRange, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineEffectRange, 0, 1, 1, 1);

        groupMedicineUseCount = new QGroupBox(pageItemMedicine);
        groupMedicineUseCount->setObjectName(QStringLiteral("groupMedicineUseCount"));
        gridLayout_108 = new QGridLayout(groupMedicineUseCount);
        gridLayout_108->setObjectName(QStringLiteral("gridLayout_108"));
        comboMedicineUseCount = new QComboBox(groupMedicineUseCount);
        comboMedicineUseCount->setObjectName(QStringLiteral("comboMedicineUseCount"));

        gridLayout_108->addWidget(comboMedicineUseCount, 0, 0, 1, 1);


        gridLayout_104->addWidget(groupMedicineUseCount, 0, 0, 1, 1);

        stackedItem->addWidget(pageItemMedicine);
        pageItemBook = new QWidget();
        pageItemBook->setObjectName(QStringLiteral("pageItemBook"));
        gridLayout_3 = new QGridLayout(pageItemBook);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBookLearnedBy = new QGroupBox(pageItemBook);
        groupBookLearnedBy->setObjectName(QStringLiteral("groupBookLearnedBy"));
        groupBookLearnedBy->setMaximumSize(QSize(200, 16777215));
        gridLayout_112 = new QGridLayout(groupBookLearnedBy);
        gridLayout_112->setObjectName(QStringLiteral("gridLayout_112"));
        listBookLearnedBy = new QListWidget(groupBookLearnedBy);
        QListWidgetItem *__qlistwidgetitem22 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem22->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem23 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem23->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem24 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem24->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem25 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem25->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem26 = new QListWidgetItem(listBookLearnedBy);
        __qlistwidgetitem26->setCheckState(Qt::Checked);
        listBookLearnedBy->setObjectName(QStringLiteral("listBookLearnedBy"));

        gridLayout_112->addWidget(listBookLearnedBy, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBookLearnedBy, 0, 0, 3, 1);

        groupBookSkill = new QGroupBox(pageItemBook);
        groupBookSkill->setObjectName(QStringLiteral("groupBookSkill"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBookSkill->sizePolicy().hasHeightForWidth());
        groupBookSkill->setSizePolicy(sizePolicy2);
        gridLayout_111 = new QGridLayout(groupBookSkill);
        gridLayout_111->setObjectName(QStringLiteral("gridLayout_111"));
        comboBookSkill = new QComboBox(groupBookSkill);
        comboBookSkill->setObjectName(QStringLiteral("comboBookSkill"));

        gridLayout_111->addWidget(comboBookSkill, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBookSkill, 0, 1, 1, 1);

        groupBookUseCount = new QGroupBox(pageItemBook);
        groupBookUseCount->setObjectName(QStringLiteral("groupBookUseCount"));
        gridLayout_110 = new QGridLayout(groupBookUseCount);
        gridLayout_110->setObjectName(QStringLiteral("gridLayout_110"));
        comboBookUseCount = new QComboBox(groupBookUseCount);
        comboBookUseCount->setObjectName(QStringLiteral("comboBookUseCount"));

        gridLayout_110->addWidget(comboBookUseCount, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBookUseCount, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        stackedItem->addWidget(pageItemBook);
        pageItemMaterial = new QWidget();
        pageItemMaterial->setObjectName(QStringLiteral("pageItemMaterial"));
        gridLayout_117 = new QGridLayout(pageItemMaterial);
        gridLayout_117->setObjectName(QStringLiteral("gridLayout_117"));
        groupMaterialUsableBy = new QGroupBox(pageItemMaterial);
        groupMaterialUsableBy->setObjectName(QStringLiteral("groupMaterialUsableBy"));
        groupMaterialUsableBy->setMinimumSize(QSize(0, 150));
        groupMaterialUsableBy->setMaximumSize(QSize(200, 16777215));
        gridLayout_194 = new QGridLayout(groupMaterialUsableBy);
        gridLayout_194->setObjectName(QStringLiteral("gridLayout_194"));
        listMaterialUsableBy = new QListWidget(groupMaterialUsableBy);
        QListWidgetItem *__qlistwidgetitem27 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem27->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem28 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem28->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem29 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem29->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem30 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem30->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem31 = new QListWidgetItem(listMaterialUsableBy);
        __qlistwidgetitem31->setCheckState(Qt::Checked);
        listMaterialUsableBy->setObjectName(QStringLiteral("listMaterialUsableBy"));

        gridLayout_194->addWidget(listMaterialUsableBy, 0, 0, 1, 1);


        gridLayout_117->addWidget(groupMaterialUsableBy, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_117->addItem(horizontalSpacer, 1, 1, 1, 1);

        groupMaterialAbilityValue = new QGroupBox(pageItemMaterial);
        groupMaterialAbilityValue->setObjectName(QStringLiteral("groupMaterialAbilityValue"));
        groupMaterialAbilityValue->setMinimumSize(QSize(0, 145));
        groupMaterialAbilityValue->setMaximumSize(QSize(16777215, 145));
        gridLayout_116 = new QGridLayout(groupMaterialAbilityValue);
        gridLayout_116->setObjectName(QStringLiteral("gridLayout_116"));
        groupMaterialMaxHp = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialMaxHp->setObjectName(QStringLiteral("groupMaterialMaxHp"));
        groupMaterialMaxHp->setFlat(true);
        gridLayout_113 = new QGridLayout(groupMaterialMaxHp);
        gridLayout_113->setObjectName(QStringLiteral("gridLayout_113"));
        spinMaterialMaxHp = new QSpinBox(groupMaterialMaxHp);
        spinMaterialMaxHp->setObjectName(QStringLiteral("spinMaterialMaxHp"));

        gridLayout_113->addWidget(spinMaterialMaxHp, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialMaxHp, 0, 0, 1, 1);

        groupMaterialMaxMp = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialMaxMp->setObjectName(QStringLiteral("groupMaterialMaxMp"));
        groupMaterialMaxMp->setFlat(true);
        gridLayout_114 = new QGridLayout(groupMaterialMaxMp);
        gridLayout_114->setObjectName(QStringLiteral("gridLayout_114"));
        spinMaterialMaxMp = new QSpinBox(groupMaterialMaxMp);
        spinMaterialMaxMp->setObjectName(QStringLiteral("spinMaterialMaxMp"));

        gridLayout_114->addWidget(spinMaterialMaxMp, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialMaxMp, 0, 1, 1, 1);

        groupMaterialAgility = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialAgility->setObjectName(QStringLiteral("groupMaterialAgility"));
        groupMaterialAgility->setFlat(true);
        gridLayout_115 = new QGridLayout(groupMaterialAgility);
        gridLayout_115->setObjectName(QStringLiteral("gridLayout_115"));
        spinMaterialAgility = new QSpinBox(groupMaterialAgility);
        spinMaterialAgility->setObjectName(QStringLiteral("spinMaterialAgility"));

        gridLayout_115->addWidget(spinMaterialAgility, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialAgility, 1, 0, 1, 1);

        groupMaterialMind = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialMind->setObjectName(QStringLiteral("groupMaterialMind"));
        groupMaterialMind->setFlat(true);
        gridLayout_191 = new QGridLayout(groupMaterialMind);
        gridLayout_191->setObjectName(QStringLiteral("gridLayout_191"));
        spinMaterialMind = new QSpinBox(groupMaterialMind);
        spinMaterialMind->setObjectName(QStringLiteral("spinMaterialMind"));

        gridLayout_191->addWidget(spinMaterialMind, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialMind, 1, 1, 1, 1);

        groupMaterialDefense = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialDefense->setObjectName(QStringLiteral("groupMaterialDefense"));
        groupMaterialDefense->setFlat(true);
        gridLayout_192 = new QGridLayout(groupMaterialDefense);
        gridLayout_192->setObjectName(QStringLiteral("gridLayout_192"));
        spinMaterialDefense = new QSpinBox(groupMaterialDefense);
        spinMaterialDefense->setObjectName(QStringLiteral("spinMaterialDefense"));

        gridLayout_192->addWidget(spinMaterialDefense, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialDefense, 1, 2, 1, 1);

        groupMaterialAttack = new QGroupBox(groupMaterialAbilityValue);
        groupMaterialAttack->setObjectName(QStringLiteral("groupMaterialAttack"));
        groupMaterialAttack->setFlat(true);
        gridLayout_193 = new QGridLayout(groupMaterialAttack);
        gridLayout_193->setObjectName(QStringLiteral("gridLayout_193"));
        spinMaterialAttack = new QSpinBox(groupMaterialAttack);
        spinMaterialAttack->setObjectName(QStringLiteral("spinMaterialAttack"));

        gridLayout_193->addWidget(spinMaterialAttack, 0, 0, 1, 1);


        gridLayout_116->addWidget(groupMaterialAttack, 0, 2, 1, 1);


        gridLayout_117->addWidget(groupMaterialAbilityValue, 0, 0, 1, 2);

        stackedItem->addWidget(pageItemMaterial);
        pageItemInvokeSkill = new QWidget();
        pageItemInvokeSkill->setObjectName(QStringLiteral("pageItemInvokeSkill"));
        gridLayout_195 = new QGridLayout(pageItemInvokeSkill);
        gridLayout_195->setObjectName(QStringLiteral("gridLayout_195"));
        gridLayout_195->setContentsMargins(0, 0, 0, 0);
        groupMaterialUsableBy_2 = new QGroupBox(pageItemInvokeSkill);
        groupMaterialUsableBy_2->setObjectName(QStringLiteral("groupMaterialUsableBy_2"));
        groupMaterialUsableBy_2->setMinimumSize(QSize(0, 150));
        groupMaterialUsableBy_2->setMaximumSize(QSize(230, 16777215));
        gridLayout_196 = new QGridLayout(groupMaterialUsableBy_2);
        gridLayout_196->setObjectName(QStringLiteral("gridLayout_196"));
        listMaterialUsableBy_2 = new QListWidget(groupMaterialUsableBy_2);
        QListWidgetItem *__qlistwidgetitem32 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem32->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem33 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem33->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem34 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem34->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem35 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem35->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem36 = new QListWidgetItem(listMaterialUsableBy_2);
        __qlistwidgetitem36->setCheckState(Qt::Checked);
        listMaterialUsableBy_2->setObjectName(QStringLiteral("listMaterialUsableBy_2"));

        gridLayout_196->addWidget(listMaterialUsableBy_2, 0, 0, 1, 1);


        gridLayout_195->addWidget(groupMaterialUsableBy_2, 0, 0, 3, 1);

        groupBookSkill_2 = new QGroupBox(pageItemInvokeSkill);
        groupBookSkill_2->setObjectName(QStringLiteral("groupBookSkill_2"));
        groupBookSkill_2->setMinimumSize(QSize(0, 55));
        groupBookSkill_2->setMaximumSize(QSize(16777215, 60));
        gridLayout_197 = new QGridLayout(groupBookSkill_2);
        gridLayout_197->setObjectName(QStringLiteral("gridLayout_197"));
        comboBookSkill_2 = new QComboBox(groupBookSkill_2);
        comboBookSkill_2->setObjectName(QStringLiteral("comboBookSkill_2"));

        gridLayout_197->addWidget(comboBookSkill_2, 0, 0, 1, 1);


        gridLayout_195->addWidget(groupBookSkill_2, 0, 1, 1, 1);

        groupScrollMessage = new QGroupBox(pageItemInvokeSkill);
        groupScrollMessage->setObjectName(QStringLiteral("groupScrollMessage"));
        groupScrollMessage->setMinimumSize(QSize(300, 0));
        groupScrollMessage->setMaximumSize(QSize(16777215, 90));
        gridLayout_198 = new QGridLayout(groupScrollMessage);
        gridLayout_198->setObjectName(QStringLiteral("gridLayout_198"));
        radioScrollMessageItem = new QRadioButton(groupScrollMessage);
        radioScrollMessageItem->setObjectName(QStringLiteral("radioScrollMessageItem"));

        gridLayout_198->addWidget(radioScrollMessageItem, 0, 0, 1, 1);

        radioScrollMessageSkill = new QRadioButton(groupScrollMessage);
        radioScrollMessageSkill->setObjectName(QStringLiteral("radioScrollMessageSkill"));

        gridLayout_198->addWidget(radioScrollMessageSkill, 1, 0, 1, 1);


        gridLayout_195->addWidget(groupScrollMessage, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 577, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_195->addItem(verticalSpacer, 2, 1, 1, 1);

        stackedItem->addWidget(pageItemInvokeSkill);
        pageItemVariable = new QWidget();
        pageItemVariable->setObjectName(QStringLiteral("pageItemVariable"));
        gridLayout_199 = new QGridLayout(pageItemVariable);
        gridLayout_199->setObjectName(QStringLiteral("gridLayout_199"));
        gridLayout_199->setContentsMargins(0, 0, 0, 0);
        groupItemVarZone = new QGroupBox(pageItemVariable);
        groupItemVarZone->setObjectName(QStringLiteral("groupItemVarZone"));
        gridLayout_201 = new QGridLayout(groupItemVarZone);
        gridLayout_201->setObjectName(QStringLiteral("gridLayout_201"));
        comboItemVarZone = new QComboBox(groupItemVarZone);
        comboItemVarZone->setObjectName(QStringLiteral("comboItemVarZone"));

        gridLayout_201->addWidget(comboItemVarZone, 3, 0, 1, 1);


        gridLayout_199->addWidget(groupItemVarZone, 0, 1, 1, 1);

        groupItemVarType = new QGroupBox(pageItemVariable);
        groupItemVarType->setObjectName(QStringLiteral("groupItemVarType"));
        gridLayout_200 = new QGridLayout(groupItemVarType);
        gridLayout_200->setObjectName(QStringLiteral("gridLayout_200"));
        comboItemVarType = new QComboBox(groupItemVarType);
        comboItemVarType->setObjectName(QStringLiteral("comboItemVarType"));

        gridLayout_200->addWidget(comboItemVarType, 0, 0, 1, 1);


        gridLayout_199->addWidget(groupItemVarType, 0, 0, 1, 1);

        groupItemVarIndex = new QGroupBox(pageItemVariable);
        groupItemVarIndex->setObjectName(QStringLiteral("groupItemVarIndex"));
        gridLayout_202 = new QGridLayout(groupItemVarIndex);
        gridLayout_202->setObjectName(QStringLiteral("gridLayout_202"));
        gridLayout_202->setVerticalSpacing(0);
        listItemVarIndex = new QListWidget(groupItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        new QListWidgetItem(listItemVarIndex);
        listItemVarIndex->setObjectName(QStringLiteral("listItemVarIndex"));

        gridLayout_202->addWidget(listItemVarIndex, 1, 1, 1, 1);

        lineItemVarFilter = new QLineEdit(groupItemVarIndex);
        lineItemVarFilter->setObjectName(QStringLiteral("lineItemVarFilter"));

        gridLayout_202->addWidget(lineItemVarFilter, 0, 1, 1, 1);


        gridLayout_199->addWidget(groupItemVarIndex, 2, 1, 1, 1);

        pushItemVarEdit = new QPushButton(pageItemVariable);
        pushItemVarEdit->setObjectName(QStringLiteral("pushItemVarEdit"));

        gridLayout_199->addWidget(pushItemVarEdit, 5, 0, 1, 2);

        groupBox = new QGroupBox(pageItemVariable);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeItemVarLocation = new QTreeWidget(groupBox);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem1->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem2->setFont(0, font);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeItemVarLocation);
        __qtreewidgetitem3->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        treeItemVarLocation->setObjectName(QStringLiteral("treeItemVarLocation"));
        treeItemVarLocation->header()->setVisible(false);

        gridLayout_2->addWidget(treeItemVarLocation, 0, 0, 1, 1);


        gridLayout_199->addWidget(groupBox, 2, 0, 1, 1);

        stackedItem->addWidget(pageItemVariable);
        pageItemCommonEvent = new QWidget();
        pageItemCommonEvent->setObjectName(QStringLiteral("pageItemCommonEvent"));
        gridLayout_203 = new QGridLayout(pageItemCommonEvent);
        gridLayout_203->setObjectName(QStringLiteral("gridLayout_203"));
        groupItemEvEvent = new QGroupBox(pageItemCommonEvent);
        groupItemEvEvent->setObjectName(QStringLiteral("groupItemEvEvent"));
        gridLayout_204 = new QGridLayout(groupItemEvEvent);
        gridLayout_204->setObjectName(QStringLiteral("gridLayout_204"));
        comboItemEvEvent = new QComboBox(groupItemEvEvent);
        comboItemEvEvent->setObjectName(QStringLiteral("comboItemEvEvent"));

        gridLayout_204->addWidget(comboItemEvEvent, 3, 0, 1, 1);


        gridLayout_203->addWidget(groupItemEvEvent, 0, 0, 1, 1);

        groupItemEvZone = new QGroupBox(pageItemCommonEvent);
        groupItemEvZone->setObjectName(QStringLiteral("groupItemEvZone"));
        gridLayout_205 = new QGridLayout(groupItemEvZone);
        gridLayout_205->setObjectName(QStringLiteral("gridLayout_205"));
        comboItemEvZone = new QComboBox(groupItemEvZone);
        comboItemEvZone->setObjectName(QStringLiteral("comboItemEvZone"));

        gridLayout_205->addWidget(comboItemEvZone, 3, 0, 1, 1);


        gridLayout_203->addWidget(groupItemEvZone, 0, 1, 1, 1);

        stackedItem->addWidget(pageItemCommonEvent);

        gridLayout->addWidget(stackedItem, 3, 0, 1, 1);

        stackedEquipmentOptions = new QStackedWidget(ItemPropertiesDB);
        stackedEquipmentOptions->setObjectName(QStringLiteral("stackedEquipmentOptions"));
        pageWeaponOptions = new QWidget();
        pageWeaponOptions->setObjectName(QStringLiteral("pageWeaponOptions"));
        gridLayout_167 = new QGridLayout(pageWeaponOptions);
        gridLayout_167->setObjectName(QStringLiteral("gridLayout_167"));
        gridLayout_167->setContentsMargins(0, 0, 0, 0);
        groupWeaponOptions = new QGroupBox(pageWeaponOptions);
        groupWeaponOptions->setObjectName(QStringLiteral("groupWeaponOptions"));
        groupWeaponOptions->setFlat(true);
        gridLayout_168 = new QGridLayout(groupWeaponOptions);
        gridLayout_168->setObjectName(QStringLiteral("gridLayout_168"));
        groupWeaponSecuence = new QGroupBox(groupWeaponOptions);
        groupWeaponSecuence->setObjectName(QStringLiteral("groupWeaponSecuence"));
        groupWeaponSecuence->setMinimumSize(QSize(0, 150));
        gridLayout_169 = new QGridLayout(groupWeaponSecuence);
        gridLayout_169->setObjectName(QStringLiteral("gridLayout_169"));
        graphicsWeaponActionSecuence = new QGraphicsView(groupWeaponSecuence);
        graphicsWeaponActionSecuence->setObjectName(QStringLiteral("graphicsWeaponActionSecuence"));

        gridLayout_169->addWidget(graphicsWeaponActionSecuence, 0, 0, 1, 1);

        pushWeaponSecuence = new QPushButton(groupWeaponSecuence);
        pushWeaponSecuence->setObjectName(QStringLiteral("pushWeaponSecuence"));

        gridLayout_169->addWidget(pushWeaponSecuence, 1, 0, 1, 1);


        gridLayout_168->addWidget(groupWeaponSecuence, 0, 0, 1, 1);

        groupWeaponTargetAnimation = new QGroupBox(groupWeaponOptions);
        groupWeaponTargetAnimation->setObjectName(QStringLiteral("groupWeaponTargetAnimation"));
        gridLayout_174 = new QGridLayout(groupWeaponTargetAnimation);
        gridLayout_174->setObjectName(QStringLiteral("gridLayout_174"));
        graphicsWeaponTargetAnimation = new QGraphicsView(groupWeaponTargetAnimation);
        graphicsWeaponTargetAnimation->setObjectName(QStringLiteral("graphicsWeaponTargetAnimation"));

        gridLayout_174->addWidget(graphicsWeaponTargetAnimation, 0, 0, 1, 1);

        comboWeaponTargetAnimation = new QComboBox(groupWeaponTargetAnimation);
        comboWeaponTargetAnimation->setObjectName(QStringLiteral("comboWeaponTargetAnimation"));

        gridLayout_174->addWidget(comboWeaponTargetAnimation, 1, 0, 1, 1);


        gridLayout_168->addWidget(groupWeaponTargetAnimation, 0, 1, 1, 1);

        groupWeaponDamageOptions = new QGroupBox(groupWeaponOptions);
        groupWeaponDamageOptions->setObjectName(QStringLiteral("groupWeaponDamageOptions"));
        gridLayout_170 = new QGridLayout(groupWeaponDamageOptions);
        gridLayout_170->setObjectName(QStringLiteral("gridLayout_170"));
        groupWeaponMpCost = new QGroupBox(groupWeaponDamageOptions);
        groupWeaponMpCost->setObjectName(QStringLiteral("groupWeaponMpCost"));
        groupWeaponMpCost->setFlat(true);
        gridLayout_171 = new QGridLayout(groupWeaponMpCost);
        gridLayout_171->setObjectName(QStringLiteral("gridLayout_171"));
        spinWeaponMpCost = new QSpinBox(groupWeaponMpCost);
        spinWeaponMpCost->setObjectName(QStringLiteral("spinWeaponMpCost"));

        gridLayout_171->addWidget(spinWeaponMpCost, 0, 0, 1, 1);


        gridLayout_170->addWidget(groupWeaponMpCost, 0, 0, 1, 1);

        groupWeaponBaseDamage = new QGroupBox(groupWeaponDamageOptions);
        groupWeaponBaseDamage->setObjectName(QStringLiteral("groupWeaponBaseDamage"));
        groupWeaponBaseDamage->setFlat(true);
        gridLayout_172 = new QGridLayout(groupWeaponBaseDamage);
        gridLayout_172->setObjectName(QStringLiteral("gridLayout_172"));
        spinWeaponBaseDamage = new QSpinBox(groupWeaponBaseDamage);
        spinWeaponBaseDamage->setObjectName(QStringLiteral("spinWeaponBaseDamage"));

        gridLayout_172->addWidget(spinWeaponBaseDamage, 0, 0, 1, 1);


        gridLayout_170->addWidget(groupWeaponBaseDamage, 0, 1, 1, 1);

        groupWeaponCriticalChance = new QGroupBox(groupWeaponDamageOptions);
        groupWeaponCriticalChance->setObjectName(QStringLiteral("groupWeaponCriticalChance"));
        groupWeaponCriticalChance->setFlat(true);
        gridLayout_173 = new QGridLayout(groupWeaponCriticalChance);
        gridLayout_173->setObjectName(QStringLiteral("gridLayout_173"));
        spinWeaponCriticalChance = new QSpinBox(groupWeaponCriticalChance);
        spinWeaponCriticalChance->setObjectName(QStringLiteral("spinWeaponCriticalChance"));

        gridLayout_173->addWidget(spinWeaponCriticalChance, 0, 0, 1, 1);


        gridLayout_170->addWidget(groupWeaponCriticalChance, 0, 2, 1, 1);


        gridLayout_168->addWidget(groupWeaponDamageOptions, 2, 0, 1, 2);

        groupWeaponOptions_2 = new QGroupBox(groupWeaponOptions);
        groupWeaponOptions_2->setObjectName(QStringLiteral("groupWeaponOptions_2"));
        gridLayout_175 = new QGridLayout(groupWeaponOptions_2);
        gridLayout_175->setObjectName(QStringLiteral("gridLayout_175"));
        checkWeaponPreventiveAttack = new QCheckBox(groupWeaponOptions_2);
        checkWeaponPreventiveAttack->setObjectName(QStringLiteral("checkWeaponPreventiveAttack"));

        gridLayout_175->addWidget(checkWeaponPreventiveAttack, 0, 0, 1, 1);

        checkWeaponAttackTwise = new QCheckBox(groupWeaponOptions_2);
        checkWeaponAttackTwise->setObjectName(QStringLiteral("checkWeaponAttackTwise"));

        gridLayout_175->addWidget(checkWeaponAttackTwise, 0, 1, 1, 1);

        checkWeaponIgnoreEvasion = new QCheckBox(groupWeaponOptions_2);
        checkWeaponIgnoreEvasion->setObjectName(QStringLiteral("checkWeaponIgnoreEvasion"));

        gridLayout_175->addWidget(checkWeaponIgnoreEvasion, 1, 0, 1, 1);

        checkWeaponCursed = new QCheckBox(groupWeaponOptions_2);
        checkWeaponCursed->setObjectName(QStringLiteral("checkWeaponCursed"));

        gridLayout_175->addWidget(checkWeaponCursed, 1, 1, 1, 1);

        checkWeaponAttackAllEnemies = new QCheckBox(groupWeaponOptions_2);
        checkWeaponAttackAllEnemies->setObjectName(QStringLiteral("checkWeaponAttackAllEnemies"));

        gridLayout_175->addWidget(checkWeaponAttackAllEnemies, 2, 0, 1, 1);


        gridLayout_168->addWidget(groupWeaponOptions_2, 3, 0, 1, 1);


        gridLayout_167->addWidget(groupWeaponOptions, 0, 0, 1, 1);

        stackedEquipmentOptions->addWidget(pageWeaponOptions);
        pageArmor = new QWidget();
        pageArmor->setObjectName(QStringLiteral("pageArmor"));
        gridLayout_176 = new QGridLayout(pageArmor);
        gridLayout_176->setObjectName(QStringLiteral("gridLayout_176"));
        gridLayout_176->setContentsMargins(0, 0, 0, 0);
        groupArmorOptions = new QGroupBox(pageArmor);
        groupArmorOptions->setObjectName(QStringLiteral("groupArmorOptions"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupArmorOptions->sizePolicy().hasHeightForWidth());
        groupArmorOptions->setSizePolicy(sizePolicy3);
        groupArmorOptions->setFlat(true);
        gridLayout_177 = new QGridLayout(groupArmorOptions);
        gridLayout_177->setObjectName(QStringLiteral("gridLayout_177"));
        groupArmorOptions_2 = new QGroupBox(groupArmorOptions);
        groupArmorOptions_2->setObjectName(QStringLiteral("groupArmorOptions_2"));
        gridLayout_178 = new QGridLayout(groupArmorOptions_2);
        gridLayout_178->setObjectName(QStringLiteral("gridLayout_178"));
        checkArmorPreventCritical = new QCheckBox(groupArmorOptions_2);
        checkArmorPreventCritical->setObjectName(QStringLiteral("checkArmorPreventCritical"));

        gridLayout_178->addWidget(checkArmorPreventCritical, 0, 0, 1, 1);

        checkArmorEvadeAttack = new QCheckBox(groupArmorOptions_2);
        checkArmorEvadeAttack->setObjectName(QStringLiteral("checkArmorEvadeAttack"));

        gridLayout_178->addWidget(checkArmorEvadeAttack, 1, 0, 1, 1);

        checkArmorConsumeHalfMp = new QCheckBox(groupArmorOptions_2);
        checkArmorConsumeHalfMp->setObjectName(QStringLiteral("checkArmorConsumeHalfMp"));

        gridLayout_178->addWidget(checkArmorConsumeHalfMp, 2, 0, 1, 1);

        checkArmorPreventsDmgOnField = new QCheckBox(groupArmorOptions_2);
        checkArmorPreventsDmgOnField->setObjectName(QStringLiteral("checkArmorPreventsDmgOnField"));

        gridLayout_178->addWidget(checkArmorPreventsDmgOnField, 3, 0, 1, 1);

        checkArmorCursed = new QCheckBox(groupArmorOptions_2);
        checkArmorCursed->setObjectName(QStringLiteral("checkArmorCursed"));

        gridLayout_178->addWidget(checkArmorCursed, 4, 0, 1, 1);


        gridLayout_177->addWidget(groupArmorOptions_2, 0, 0, 1, 1);


        gridLayout_176->addWidget(groupArmorOptions, 0, 0, 1, 1);

        stackedEquipmentOptions->addWidget(pageArmor);

        gridLayout->addWidget(stackedEquipmentOptions, 4, 0, 1, 1);


        retranslateUi(ItemPropertiesDB);

        stackedItem->setCurrentIndex(1);
        comboMedicineUseCount->setCurrentIndex(1);
        comboBookUseCount->setCurrentIndex(1);
        stackedEquipmentOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ItemPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *ItemPropertiesDB)
    {
        ItemPropertiesDB->setWindowTitle(QApplication::translate("ItemPropertiesDB", "Form", 0));
        groupItemsName->setTitle(QApplication::translate("ItemPropertiesDB", "Name", 0));
        groupItemDesc->setTitle(QApplication::translate("ItemPropertiesDB", "Description", 0));
        groupItemPrice->setTitle(QApplication::translate("ItemPropertiesDB", "Price", 0));
        groupEquipmentUsableBy->setTitle(QApplication::translate("ItemPropertiesDB", "Usable by:", 0));

        const bool __sortingEnabled = listEquipmentUsableBy->isSortingEnabled();
        listEquipmentUsableBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listEquipmentUsableBy->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ItemPropertiesDB", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem1 = listEquipmentUsableBy->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ItemPropertiesDB", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem2 = listEquipmentUsableBy->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("ItemPropertiesDB", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem3 = listEquipmentUsableBy->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("ItemPropertiesDB", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem4 = listEquipmentUsableBy->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("ItemPropertiesDB", "Murtag", 0));
        listEquipmentUsableBy->setSortingEnabled(__sortingEnabled);

        groupEquipmentSlotB->setTitle(QApplication::translate("ItemPropertiesDB", "Second Equipment Slot", 0));
        groupEquipmentSlotA->setTitle(QApplication::translate("ItemPropertiesDB", "First Equipment Slot", 0));
        comboEquipmentSlotA->clear();
        comboEquipmentSlotA->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Weapon", 0)
         << QApplication::translate("ItemPropertiesDB", "Shield", 0)
         << QApplication::translate("ItemPropertiesDB", "Armor", 0)
         << QApplication::translate("ItemPropertiesDB", "Helmet", 0)
         << QApplication::translate("ItemPropertiesDB", "Accesory", 0)
        );
        groupEquipmentSkill->setTitle(QApplication::translate("ItemPropertiesDB", "Adds Skill:", 0));
        groupEquipmentConditionEffect->setTitle(QApplication::translate("ItemPropertiesDB", "Condition Effect", 0));
        radioEquipmentCausesCondition->setText(QApplication::translate("ItemPropertiesDB", "Causes", 0));
        radioEquipmentCuresCondition->setText(QApplication::translate("ItemPropertiesDB", "Cures", 0));

        const bool __sortingEnabled1 = listEquipmentConditionEffect->isSortingEnabled();
        listEquipmentConditionEffect->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = listEquipmentConditionEffect->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("ItemPropertiesDB", "Poison", 0));
        listEquipmentConditionEffect->setSortingEnabled(__sortingEnabled1);

        groupEquipmentConditionChance->setTitle(QApplication::translate("ItemPropertiesDB", "GroupBox", 0));
        spinEquipmentConditionChance->setSuffix(QApplication::translate("ItemPropertiesDB", " %", 0));
        groupEquipmentValueChange->setTitle(QApplication::translate("ItemPropertiesDB", "Value Change", 0));
        groupEquipmentAttack->setTitle(QApplication::translate("ItemPropertiesDB", "Attack", 0));
        groupEquipmentMind->setTitle(QApplication::translate("ItemPropertiesDB", "Mind", 0));
        groupEquipmentDefense->setTitle(QApplication::translate("ItemPropertiesDB", "Defense", 0));
        groupEquipmentAgility->setTitle(QApplication::translate("ItemPropertiesDB", "Agility", 0));
        groupEquipmentAttibute->setTitle(QApplication::translate("ItemPropertiesDB", "Attribute:", 0));

        const bool __sortingEnabled2 = listEquipmentAttibute->isSortingEnabled();
        listEquipmentAttibute->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = listEquipmentAttibute->item(0);
        ___qlistwidgetitem6->setText(QApplication::translate("ItemPropertiesDB", "Fire", 0));
        listEquipmentAttibute->setSortingEnabled(__sortingEnabled2);

        groupMedicineRecover->setTitle(QApplication::translate("ItemPropertiesDB", "Recovers", 0));
        label_9->setText(QApplication::translate("ItemPropertiesDB", "HP:", 0));
        label_25->setText(QApplication::translate("ItemPropertiesDB", "+", 0));
        spinMedicineRecoverHpPercent->setPrefix(QApplication::translate("ItemPropertiesDB", "% ", 0));
        label_24->setText(QApplication::translate("ItemPropertiesDB", "MP", 0));
        label_26->setText(QApplication::translate("ItemPropertiesDB", "+", 0));
        spinMedicineRecoverMpPercent->setPrefix(QApplication::translate("ItemPropertiesDB", "% ", 0));
        groupMedicineOptions->setTitle(QApplication::translate("ItemPropertiesDB", "Options", 0));
        checkMedicineOnlyOnField->setText(QApplication::translate("ItemPropertiesDB", "Only usable on Field", 0));
        checkMedicineOnlyOnFainted->setText(QApplication::translate("ItemPropertiesDB", "Only afect fainted characters", 0));
        groupMedicineCausesCondition->setTitle(QApplication::translate("ItemPropertiesDB", "Change Condition to:", 0));

        const bool __sortingEnabled3 = listMedicineCausesCondition->isSortingEnabled();
        listMedicineCausesCondition->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = listMedicineCausesCondition->item(0);
        ___qlistwidgetitem7->setText(QApplication::translate("ItemPropertiesDB", "Death", 0));
        QListWidgetItem *___qlistwidgetitem8 = listMedicineCausesCondition->item(1);
        ___qlistwidgetitem8->setText(QApplication::translate("ItemPropertiesDB", "Poison", 0));
        QListWidgetItem *___qlistwidgetitem9 = listMedicineCausesCondition->item(2);
        ___qlistwidgetitem9->setText(QApplication::translate("ItemPropertiesDB", "Darkness", 0));
        QListWidgetItem *___qlistwidgetitem10 = listMedicineCausesCondition->item(3);
        ___qlistwidgetitem10->setText(QApplication::translate("ItemPropertiesDB", "Silence", 0));
        QListWidgetItem *___qlistwidgetitem11 = listMedicineCausesCondition->item(4);
        ___qlistwidgetitem11->setText(QApplication::translate("ItemPropertiesDB", "Berserk", 0));
        QListWidgetItem *___qlistwidgetitem12 = listMedicineCausesCondition->item(5);
        ___qlistwidgetitem12->setText(QApplication::translate("ItemPropertiesDB", "Chaos", 0));
        QListWidgetItem *___qlistwidgetitem13 = listMedicineCausesCondition->item(6);
        ___qlistwidgetitem13->setText(QApplication::translate("ItemPropertiesDB", "Sleep", 0));
        QListWidgetItem *___qlistwidgetitem14 = listMedicineCausesCondition->item(7);
        ___qlistwidgetitem14->setText(QApplication::translate("ItemPropertiesDB", "Paralyze", 0));
        QListWidgetItem *___qlistwidgetitem15 = listMedicineCausesCondition->item(8);
        ___qlistwidgetitem15->setText(QApplication::translate("ItemPropertiesDB", "Stagger", 0));
        QListWidgetItem *___qlistwidgetitem16 = listMedicineCausesCondition->item(9);
        ___qlistwidgetitem16->setText(QApplication::translate("ItemPropertiesDB", "Surprise", 0));
        listMedicineCausesCondition->setSortingEnabled(__sortingEnabled3);

        groupMedicineUsableBy->setTitle(QApplication::translate("ItemPropertiesDB", "Usable by:", 0));

        const bool __sortingEnabled4 = listMedicineUsableBy->isSortingEnabled();
        listMedicineUsableBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem17 = listMedicineUsableBy->item(0);
        ___qlistwidgetitem17->setText(QApplication::translate("ItemPropertiesDB", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem18 = listMedicineUsableBy->item(1);
        ___qlistwidgetitem18->setText(QApplication::translate("ItemPropertiesDB", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem19 = listMedicineUsableBy->item(2);
        ___qlistwidgetitem19->setText(QApplication::translate("ItemPropertiesDB", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem20 = listMedicineUsableBy->item(3);
        ___qlistwidgetitem20->setText(QApplication::translate("ItemPropertiesDB", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem21 = listMedicineUsableBy->item(4);
        ___qlistwidgetitem21->setText(QApplication::translate("ItemPropertiesDB", "Murtag", 0));
        listMedicineUsableBy->setSortingEnabled(__sortingEnabled4);

        groupMedicineEffectRange->setTitle(QApplication::translate("ItemPropertiesDB", "Effect Range", 0));
        comboMedicineEfectRange->clear();
        comboMedicineEfectRange->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Single target", 0)
         << QApplication::translate("ItemPropertiesDB", "Multiple target", 0)
         << QApplication::translate("ItemPropertiesDB", "group target", 0)
        );
        groupMedicineUseCount->setTitle(QApplication::translate("ItemPropertiesDB", "Number of uses", 0));
        comboMedicineUseCount->clear();
        comboMedicineUseCount->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Unlimited", 0)
         << QApplication::translate("ItemPropertiesDB", "1 Standard", 0)
         << QApplication::translate("ItemPropertiesDB", "2", 0)
         << QApplication::translate("ItemPropertiesDB", "3", 0)
         << QApplication::translate("ItemPropertiesDB", "4", 0)
         << QApplication::translate("ItemPropertiesDB", "5", 0)
        );
        groupBookLearnedBy->setTitle(QApplication::translate("ItemPropertiesDB", "Learned by:", 0));

        const bool __sortingEnabled5 = listBookLearnedBy->isSortingEnabled();
        listBookLearnedBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem22 = listBookLearnedBy->item(0);
        ___qlistwidgetitem22->setText(QApplication::translate("ItemPropertiesDB", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem23 = listBookLearnedBy->item(1);
        ___qlistwidgetitem23->setText(QApplication::translate("ItemPropertiesDB", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem24 = listBookLearnedBy->item(2);
        ___qlistwidgetitem24->setText(QApplication::translate("ItemPropertiesDB", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem25 = listBookLearnedBy->item(3);
        ___qlistwidgetitem25->setText(QApplication::translate("ItemPropertiesDB", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem26 = listBookLearnedBy->item(4);
        ___qlistwidgetitem26->setText(QApplication::translate("ItemPropertiesDB", "Murtag", 0));
        listBookLearnedBy->setSortingEnabled(__sortingEnabled5);

        groupBookSkill->setTitle(QApplication::translate("ItemPropertiesDB", "Skill to be learned", 0));
        comboBookSkill->clear();
        comboBookSkill->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Poison", 0)
         << QApplication::translate("ItemPropertiesDB", "Heal", 0)
         << QApplication::translate("ItemPropertiesDB", "Spark", 0)
         << QApplication::translate("ItemPropertiesDB", "Warp", 0)
         << QApplication::translate("ItemPropertiesDB", "Egress", 0)
        );
        groupBookUseCount->setTitle(QApplication::translate("ItemPropertiesDB", "Number of uses", 0));
        comboBookUseCount->clear();
        comboBookUseCount->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Unlimited", 0)
         << QApplication::translate("ItemPropertiesDB", "1 Standard", 0)
         << QApplication::translate("ItemPropertiesDB", "2", 0)
         << QApplication::translate("ItemPropertiesDB", "3", 0)
         << QApplication::translate("ItemPropertiesDB", "4", 0)
         << QApplication::translate("ItemPropertiesDB", "5", 0)
        );
        groupMaterialUsableBy->setTitle(QApplication::translate("ItemPropertiesDB", "Usable by:", 0));

        const bool __sortingEnabled6 = listMaterialUsableBy->isSortingEnabled();
        listMaterialUsableBy->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem27 = listMaterialUsableBy->item(0);
        ___qlistwidgetitem27->setText(QApplication::translate("ItemPropertiesDB", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem28 = listMaterialUsableBy->item(1);
        ___qlistwidgetitem28->setText(QApplication::translate("ItemPropertiesDB", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem29 = listMaterialUsableBy->item(2);
        ___qlistwidgetitem29->setText(QApplication::translate("ItemPropertiesDB", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem30 = listMaterialUsableBy->item(3);
        ___qlistwidgetitem30->setText(QApplication::translate("ItemPropertiesDB", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem31 = listMaterialUsableBy->item(4);
        ___qlistwidgetitem31->setText(QApplication::translate("ItemPropertiesDB", "Murtag", 0));
        listMaterialUsableBy->setSortingEnabled(__sortingEnabled6);

        groupMaterialAbilityValue->setTitle(QApplication::translate("ItemPropertiesDB", "Change Ability Value", 0));
        groupMaterialMaxHp->setTitle(QApplication::translate("ItemPropertiesDB", "Max Hp", 0));
        groupMaterialMaxMp->setTitle(QApplication::translate("ItemPropertiesDB", "Max Mp", 0));
        groupMaterialAgility->setTitle(QApplication::translate("ItemPropertiesDB", "Agility", 0));
        groupMaterialMind->setTitle(QApplication::translate("ItemPropertiesDB", "Mind", 0));
        groupMaterialDefense->setTitle(QApplication::translate("ItemPropertiesDB", "Defense", 0));
        groupMaterialAttack->setTitle(QApplication::translate("ItemPropertiesDB", "Attack", 0));
        groupMaterialUsableBy_2->setTitle(QApplication::translate("ItemPropertiesDB", "Usable by:", 0));

        const bool __sortingEnabled7 = listMaterialUsableBy_2->isSortingEnabled();
        listMaterialUsableBy_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem32 = listMaterialUsableBy_2->item(0);
        ___qlistwidgetitem32->setText(QApplication::translate("ItemPropertiesDB", "Zack", 0));
        QListWidgetItem *___qlistwidgetitem33 = listMaterialUsableBy_2->item(1);
        ___qlistwidgetitem33->setText(QApplication::translate("ItemPropertiesDB", "Elain", 0));
        QListWidgetItem *___qlistwidgetitem34 = listMaterialUsableBy_2->item(2);
        ___qlistwidgetitem34->setText(QApplication::translate("ItemPropertiesDB", "Horst", 0));
        QListWidgetItem *___qlistwidgetitem35 = listMaterialUsableBy_2->item(3);
        ___qlistwidgetitem35->setText(QApplication::translate("ItemPropertiesDB", "Eragon", 0));
        QListWidgetItem *___qlistwidgetitem36 = listMaterialUsableBy_2->item(4);
        ___qlistwidgetitem36->setText(QApplication::translate("ItemPropertiesDB", "Murtag", 0));
        listMaterialUsableBy_2->setSortingEnabled(__sortingEnabled7);

        groupBookSkill_2->setTitle(QApplication::translate("ItemPropertiesDB", "Skill to be used", 0));
        comboBookSkill_2->clear();
        comboBookSkill_2->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Poison", 0)
         << QApplication::translate("ItemPropertiesDB", "Heal", 0)
         << QApplication::translate("ItemPropertiesDB", "Spark", 0)
         << QApplication::translate("ItemPropertiesDB", "Warp", 0)
         << QApplication::translate("ItemPropertiesDB", "Egress", 0)
        );
        groupScrollMessage->setTitle(QApplication::translate("ItemPropertiesDB", "Message", 0));
        radioScrollMessageItem->setText(QApplication::translate("ItemPropertiesDB", "Item Message", 0));
        radioScrollMessageSkill->setText(QApplication::translate("ItemPropertiesDB", "Skill Message", 0));
        groupItemVarZone->setTitle(QApplication::translate("ItemPropertiesDB", "Usage Allowance", 0));
        comboItemVarZone->clear();
        comboItemVarZone->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Field", 0)
         << QApplication::translate("ItemPropertiesDB", "Battle", 0)
         << QApplication::translate("ItemPropertiesDB", "Both", 0)
        );
        groupItemVarType->setTitle(QApplication::translate("ItemPropertiesDB", "Variable Type", 0));
        comboItemVarType->clear();
        comboItemVarType->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Integer", 0)
         << QApplication::translate("ItemPropertiesDB", "Switch", 0)
         << QApplication::translate("ItemPropertiesDB", "String", 0)
         << QApplication::translate("ItemPropertiesDB", "Image", 0)
         << QApplication::translate("ItemPropertiesDB", "Resource", 0)
        );
        groupItemVarIndex->setTitle(QApplication::translate("ItemPropertiesDB", "Variable Index", 0));

        const bool __sortingEnabled8 = listItemVarIndex->isSortingEnabled();
        listItemVarIndex->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem37 = listItemVarIndex->item(0);
        ___qlistwidgetitem37->setText(QApplication::translate("ItemPropertiesDB", "0001: A", 0));
        QListWidgetItem *___qlistwidgetitem38 = listItemVarIndex->item(1);
        ___qlistwidgetitem38->setText(QApplication::translate("ItemPropertiesDB", "0002: B", 0));
        QListWidgetItem *___qlistwidgetitem39 = listItemVarIndex->item(2);
        ___qlistwidgetitem39->setText(QApplication::translate("ItemPropertiesDB", "0003: C", 0));
        QListWidgetItem *___qlistwidgetitem40 = listItemVarIndex->item(3);
        ___qlistwidgetitem40->setText(QApplication::translate("ItemPropertiesDB", "0004:", 0));
        QListWidgetItem *___qlistwidgetitem41 = listItemVarIndex->item(4);
        ___qlistwidgetitem41->setText(QApplication::translate("ItemPropertiesDB", "0005:", 0));
        listItemVarIndex->setSortingEnabled(__sortingEnabled8);

        lineItemVarFilter->setPlaceholderText(QApplication::translate("ItemPropertiesDB", "Filter", 0));
        pushItemVarEdit->setText(QApplication::translate("ItemPropertiesDB", "Edit Value ...", 0));
        groupBox->setTitle(QApplication::translate("ItemPropertiesDB", "GroupBox", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeItemVarLocation->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ItemPropertiesDB", "Location", 0));

        const bool __sortingEnabled9 = treeItemVarLocation->isSortingEnabled();
        treeItemVarLocation->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeItemVarLocation->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ItemPropertiesDB", "Global", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeItemVarLocation->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ItemPropertiesDB", "Common Events", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeItemVarLocation->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ItemPropertiesDB", "Items", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ItemPropertiesDB", "Item1", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ItemPropertiesDB", "Item2", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeItemVarLocation->topLevelItem(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ItemPropertiesDB", "Maps", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ItemPropertiesDB", "Map1", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ItemPropertiesDB", "EV000", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem6->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ItemPropertiesDB", "Map2", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("ItemPropertiesDB", "EV000", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("ItemPropertiesDB", "EV001", 0));
        treeItemVarLocation->setSortingEnabled(__sortingEnabled9);

        groupItemEvEvent->setTitle(QApplication::translate("ItemPropertiesDB", "Common Event", 0));
        comboItemEvEvent->clear();
        comboItemEvEvent->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "EV000", 0)
         << QApplication::translate("ItemPropertiesDB", "EV001", 0)
         << QApplication::translate("ItemPropertiesDB", "EV002", 0)
        );
        groupItemEvZone->setTitle(QApplication::translate("ItemPropertiesDB", "Usage Allowance", 0));
        comboItemEvZone->clear();
        comboItemEvZone->insertItems(0, QStringList()
         << QApplication::translate("ItemPropertiesDB", "Field", 0)
         << QApplication::translate("ItemPropertiesDB", "Battle", 0)
         << QApplication::translate("ItemPropertiesDB", "Both", 0)
        );
        groupWeaponOptions->setTitle(QApplication::translate("ItemPropertiesDB", "Weapon only options:", 0));
        groupWeaponSecuence->setTitle(QApplication::translate("ItemPropertiesDB", "Action Secuence", 0));
        pushWeaponSecuence->setText(QApplication::translate("ItemPropertiesDB", "Edit ...", 0));
        groupWeaponTargetAnimation->setTitle(QApplication::translate("ItemPropertiesDB", "Target Animation", 0));
        groupWeaponDamageOptions->setTitle(QApplication::translate("ItemPropertiesDB", "Damage", 0));
        groupWeaponMpCost->setTitle(QApplication::translate("ItemPropertiesDB", "MP Cost", 0));
        groupWeaponBaseDamage->setTitle(QApplication::translate("ItemPropertiesDB", "Base Damage", 0));
        groupWeaponCriticalChance->setTitle(QApplication::translate("ItemPropertiesDB", "Critical Hit", 0));
        groupWeaponOptions_2->setTitle(QApplication::translate("ItemPropertiesDB", "Options", 0));
        checkWeaponPreventiveAttack->setText(QApplication::translate("ItemPropertiesDB", "Preventive attack", 0));
        checkWeaponAttackTwise->setText(QApplication::translate("ItemPropertiesDB", "Attack twise", 0));
        checkWeaponIgnoreEvasion->setText(QApplication::translate("ItemPropertiesDB", "Ignore evasion", 0));
        checkWeaponCursed->setText(QApplication::translate("ItemPropertiesDB", "Cursed", 0));
        checkWeaponAttackAllEnemies->setText(QApplication::translate("ItemPropertiesDB", "Attack all enemies", 0));
        groupArmorOptions->setTitle(QApplication::translate("ItemPropertiesDB", "Armor only options:", 0));
        groupArmorOptions_2->setTitle(QApplication::translate("ItemPropertiesDB", "Options", 0));
        checkArmorPreventCritical->setText(QApplication::translate("ItemPropertiesDB", "Prevents critical hit", 0));
        checkArmorEvadeAttack->setText(QApplication::translate("ItemPropertiesDB", "Evade attack", 0));
        checkArmorConsumeHalfMp->setText(QApplication::translate("ItemPropertiesDB", "Consumes half MP", 0));
        checkArmorPreventsDmgOnField->setText(QApplication::translate("ItemPropertiesDB", "Prevents damage on field", 0));
        checkArmorCursed->setText(QApplication::translate("ItemPropertiesDB", "Cursed", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemPropertiesDB: public Ui_ItemPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMPROPERTIESDB_H
