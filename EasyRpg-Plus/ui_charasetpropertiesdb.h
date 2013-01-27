/********************************************************************************
** Form generated from reading UI file 'charasetpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARASETPROPERTIESDB_H
#define UI_CHARASETPROPERTIESDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharaSetPropertiesDB
{
public:
    QGridLayout *gridLayout;
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

    void setupUi(QWidget *CharaSetPropertiesDB)
    {
        if (CharaSetPropertiesDB->objectName().isEmpty())
            CharaSetPropertiesDB->setObjectName(QStringLiteral("CharaSetPropertiesDB"));
        CharaSetPropertiesDB->resize(400, 300);
        gridLayout = new QGridLayout(CharaSetPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupCharaSetName = new QGroupBox(CharaSetPropertiesDB);
        groupCharaSetName->setObjectName(QStringLiteral("groupCharaSetName"));
        groupCharaSetName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupCharaSetName->sizePolicy().hasHeightForWidth());
        groupCharaSetName->setSizePolicy(sizePolicy);
        groupCharaSetName->setMinimumSize(QSize(0, 50));
        groupCharaSetName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_49 = new QGridLayout(groupCharaSetName);
        gridLayout_49->setObjectName(QStringLiteral("gridLayout_49"));
        lineCharaSetName = new QLineEdit(groupCharaSetName);
        lineCharaSetName->setObjectName(QStringLiteral("lineCharaSetName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineCharaSetName->sizePolicy().hasHeightForWidth());
        lineCharaSetName->setSizePolicy(sizePolicy1);
        lineCharaSetName->setMinimumSize(QSize(0, 0));

        gridLayout_49->addWidget(lineCharaSetName, 0, 0, 1, 1);


        gridLayout->addWidget(groupCharaSetName, 0, 0, 1, 2);

        groupCharaSetAction = new QGroupBox(CharaSetPropertiesDB);
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


        gridLayout->addWidget(groupCharaSetAction, 1, 0, 1, 1);

        groupCharaSetGraphic = new QGroupBox(CharaSetPropertiesDB);
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


        gridLayout->addWidget(groupCharaSetGraphic, 1, 1, 1, 1);


        retranslateUi(CharaSetPropertiesDB);

        QMetaObject::connectSlotsByName(CharaSetPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *CharaSetPropertiesDB)
    {
        CharaSetPropertiesDB->setWindowTitle(QApplication::translate("CharaSetPropertiesDB", "Form", 0));
        groupCharaSetName->setTitle(QApplication::translate("CharaSetPropertiesDB", "Name", 0));
        groupCharaSetAction->setTitle(QApplication::translate("CharaSetPropertiesDB", "Map Action", 0));

        const bool __sortingEnabled = listCharaSetAction->isSortingEnabled();
        listCharaSetAction->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listCharaSetAction->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CharaSetPropertiesDB", "0001: Chara Zack", 0));
        QListWidgetItem *___qlistwidgetitem1 = listCharaSetAction->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CharaSetPropertiesDB", "0002: Chara Elain", 0));
        QListWidgetItem *___qlistwidgetitem2 = listCharaSetAction->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("CharaSetPropertiesDB", "0003: Chara Horst", 0));
        QListWidgetItem *___qlistwidgetitem3 = listCharaSetAction->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("CharaSetPropertiesDB", "0004: Chara Eragon", 0));
        QListWidgetItem *___qlistwidgetitem4 = listCharaSetAction->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("CharaSetPropertiesDB", "0005: Chara Murtagh", 0));
        listCharaSetAction->setSortingEnabled(__sortingEnabled);

        groupCharaSetGraphic->setTitle(QApplication::translate("CharaSetPropertiesDB", "Chara", 0));
        pushCharaSetChange->setText(QApplication::translate("CharaSetPropertiesDB", "Change ...", 0));
    } // retranslateUi

};

namespace Ui {
    class CharaSetPropertiesDB: public Ui_CharaSetPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARASETPROPERTIESDB_H
