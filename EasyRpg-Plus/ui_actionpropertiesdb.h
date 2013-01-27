/********************************************************************************
** Form generated from reading UI file 'actionpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONPROPERTIESDB_H
#define UI_ACTIONPROPERTIESDB_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActionPropertiesDB
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupActionsName;
    QGridLayout *gridLayout_86;
    QLineEdit *lineActionsName;
    QGroupBox *groupActionsMovement;
    QGridLayout *gridLayout_90;
    QCheckBox *checkActionsMoveUp;
    QCheckBox *checkActionsMoveDown;
    QCheckBox *checkActionsMoveLeft;
    QCheckBox *checkActionsMoveRight;
    QGroupBox *groupActionsConditions;
    QGridLayout *gridLayout_87;
    QListWidget *listActionsConditions;
    QGroupBox *groupActionsInitialEvent;
    QGridLayout *gridLayout_89;
    QComboBox *comboActionsInitialEvent;
    QGroupBox *groupActionsFinalEvent;
    QGridLayout *gridLayout_88;
    QComboBox *comboActionsFinalEvent;

    void setupUi(QWidget *ActionPropertiesDB)
    {
        if (ActionPropertiesDB->objectName().isEmpty())
            ActionPropertiesDB->setObjectName(QStringLiteral("ActionPropertiesDB"));
        ActionPropertiesDB->resize(486, 354);
        ActionPropertiesDB->setMinimumSize(QSize(0, 354));
        ActionPropertiesDB->setMaximumSize(QSize(16777215, 354));
        gridLayout = new QGridLayout(ActionPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupActionsName = new QGroupBox(ActionPropertiesDB);
        groupActionsName->setObjectName(QStringLiteral("groupActionsName"));
        groupActionsName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupActionsName->sizePolicy().hasHeightForWidth());
        groupActionsName->setSizePolicy(sizePolicy);
        groupActionsName->setMinimumSize(QSize(0, 50));
        groupActionsName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_86 = new QGridLayout(groupActionsName);
        gridLayout_86->setObjectName(QStringLiteral("gridLayout_86"));
        lineActionsName = new QLineEdit(groupActionsName);
        lineActionsName->setObjectName(QStringLiteral("lineActionsName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineActionsName->sizePolicy().hasHeightForWidth());
        lineActionsName->setSizePolicy(sizePolicy1);
        lineActionsName->setMinimumSize(QSize(0, 0));

        gridLayout_86->addWidget(lineActionsName, 0, 0, 1, 1);


        gridLayout->addWidget(groupActionsName, 0, 0, 1, 1);

        groupActionsMovement = new QGroupBox(ActionPropertiesDB);
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


        gridLayout->addWidget(groupActionsMovement, 1, 0, 1, 1);

        groupActionsConditions = new QGroupBox(ActionPropertiesDB);
        groupActionsConditions->setObjectName(QStringLiteral("groupActionsConditions"));
        groupActionsConditions->setMaximumSize(QSize(16777215, 180));
        gridLayout_87 = new QGridLayout(groupActionsConditions);
        gridLayout_87->setObjectName(QStringLiteral("gridLayout_87"));
        listActionsConditions = new QListWidget(groupActionsConditions);
        new QListWidgetItem(listActionsConditions);
        listActionsConditions->setObjectName(QStringLiteral("listActionsConditions"));
        listActionsConditions->setSelectionRectVisible(true);

        gridLayout_87->addWidget(listActionsConditions, 0, 0, 1, 1);


        gridLayout->addWidget(groupActionsConditions, 2, 0, 1, 1);

        groupActionsInitialEvent = new QGroupBox(ActionPropertiesDB);
        groupActionsInitialEvent->setObjectName(QStringLiteral("groupActionsInitialEvent"));
        gridLayout_89 = new QGridLayout(groupActionsInitialEvent);
        gridLayout_89->setObjectName(QStringLiteral("gridLayout_89"));
        comboActionsInitialEvent = new QComboBox(groupActionsInitialEvent);
        comboActionsInitialEvent->setObjectName(QStringLiteral("comboActionsInitialEvent"));

        gridLayout_89->addWidget(comboActionsInitialEvent, 0, 0, 1, 1);


        gridLayout->addWidget(groupActionsInitialEvent, 3, 0, 1, 1);

        groupActionsFinalEvent = new QGroupBox(ActionPropertiesDB);
        groupActionsFinalEvent->setObjectName(QStringLiteral("groupActionsFinalEvent"));
        gridLayout_88 = new QGridLayout(groupActionsFinalEvent);
        gridLayout_88->setObjectName(QStringLiteral("gridLayout_88"));
        comboActionsFinalEvent = new QComboBox(groupActionsFinalEvent);
        comboActionsFinalEvent->setObjectName(QStringLiteral("comboActionsFinalEvent"));

        gridLayout_88->addWidget(comboActionsFinalEvent, 0, 0, 1, 1);


        gridLayout->addWidget(groupActionsFinalEvent, 4, 0, 1, 1);


        retranslateUi(ActionPropertiesDB);

        QMetaObject::connectSlotsByName(ActionPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *ActionPropertiesDB)
    {
        ActionPropertiesDB->setWindowTitle(QApplication::translate("ActionPropertiesDB", "Form", 0));
        groupActionsName->setTitle(QApplication::translate("ActionPropertiesDB", "Name", 0));
        groupActionsMovement->setTitle(QApplication::translate("ActionPropertiesDB", "AllowMovement", 0));
        checkActionsMoveUp->setText(QApplication::translate("ActionPropertiesDB", "Up", 0));
        checkActionsMoveDown->setText(QApplication::translate("ActionPropertiesDB", "Down", 0));
        checkActionsMoveLeft->setText(QApplication::translate("ActionPropertiesDB", "Left", 0));
        checkActionsMoveRight->setText(QApplication::translate("ActionPropertiesDB", "Right", 0));
        groupActionsConditions->setTitle(QApplication::translate("ActionPropertiesDB", "Conditions", 0));

        const bool __sortingEnabled = listActionsConditions->isSortingEnabled();
        listActionsConditions->setSortingEnabled(false);
        listActionsConditions->setSortingEnabled(__sortingEnabled);

        groupActionsInitialEvent->setTitle(QApplication::translate("ActionPropertiesDB", "Initial Event", 0));
        groupActionsFinalEvent->setTitle(QApplication::translate("ActionPropertiesDB", "Final Event", 0));
    } // retranslateUi

};

namespace Ui {
    class ActionPropertiesDB: public Ui_ActionPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONPROPERTIESDB_H
