/********************************************************************************
** Form generated from reading UI file 'animationsetpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONSETPROPERTIESDB_H
#define UI_ANIMATIONSETPROPERTIESDB_H

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

class Ui_AnimationSetPropertiesDB
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupName;
    QGridLayout *gridLayout_49;
    QLineEdit *lineName;
    QGroupBox *groupAction;
    QGridLayout *gridLayout_50;
    QListWidget *listAction;
    QGroupBox *groupCharaSetGraphic;
    QGridLayout *gridLayout_52;
    QGraphicsView *graphicsAnimation;
    QPushButton *pushChange;

    void setupUi(QWidget *AnimationSetPropertiesDB)
    {
        if (AnimationSetPropertiesDB->objectName().isEmpty())
            AnimationSetPropertiesDB->setObjectName(QStringLiteral("AnimationSetPropertiesDB"));
        AnimationSetPropertiesDB->resize(400, 300);
        gridLayout = new QGridLayout(AnimationSetPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupName = new QGroupBox(AnimationSetPropertiesDB);
        groupName->setObjectName(QStringLiteral("groupName"));
        groupName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupName->sizePolicy().hasHeightForWidth());
        groupName->setSizePolicy(sizePolicy);
        groupName->setMinimumSize(QSize(0, 50));
        groupName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_49 = new QGridLayout(groupName);
        gridLayout_49->setObjectName(QStringLiteral("gridLayout_49"));
        lineName = new QLineEdit(groupName);
        lineName->setObjectName(QStringLiteral("lineName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineName->sizePolicy().hasHeightForWidth());
        lineName->setSizePolicy(sizePolicy1);
        lineName->setMinimumSize(QSize(0, 0));

        gridLayout_49->addWidget(lineName, 0, 0, 1, 1);


        gridLayout->addWidget(groupName, 0, 0, 1, 2);

        groupAction = new QGroupBox(AnimationSetPropertiesDB);
        groupAction->setObjectName(QStringLiteral("groupAction"));
        groupAction->setMinimumSize(QSize(180, 0));
        groupAction->setMaximumSize(QSize(180, 800));
        gridLayout_50 = new QGridLayout(groupAction);
        gridLayout_50->setObjectName(QStringLiteral("gridLayout_50"));
        listAction = new QListWidget(groupAction);
        new QListWidgetItem(listAction);
        new QListWidgetItem(listAction);
        new QListWidgetItem(listAction);
        new QListWidgetItem(listAction);
        new QListWidgetItem(listAction);
        listAction->setObjectName(QStringLiteral("listAction"));
        listAction->setMinimumSize(QSize(162, 0));
        listAction->setMaximumSize(QSize(162, 16777215));

        gridLayout_50->addWidget(listAction, 0, 0, 1, 1);


        gridLayout->addWidget(groupAction, 1, 0, 1, 1);

        groupCharaSetGraphic = new QGroupBox(AnimationSetPropertiesDB);
        groupCharaSetGraphic->setObjectName(QStringLiteral("groupCharaSetGraphic"));
        groupCharaSetGraphic->setMaximumSize(QSize(16777215, 800));
        gridLayout_52 = new QGridLayout(groupCharaSetGraphic);
        gridLayout_52->setObjectName(QStringLiteral("gridLayout_52"));
        graphicsAnimation = new QGraphicsView(groupCharaSetGraphic);
        graphicsAnimation->setObjectName(QStringLiteral("graphicsAnimation"));
        graphicsAnimation->setMinimumSize(QSize(180, 160));
        graphicsAnimation->setMaximumSize(QSize(180, 160));

        gridLayout_52->addWidget(graphicsAnimation, 0, 1, 1, 1);

        pushChange = new QPushButton(groupCharaSetGraphic);
        pushChange->setObjectName(QStringLiteral("pushChange"));

        gridLayout_52->addWidget(pushChange, 1, 1, 1, 1);


        gridLayout->addWidget(groupCharaSetGraphic, 1, 1, 1, 1);


        retranslateUi(AnimationSetPropertiesDB);

        QMetaObject::connectSlotsByName(AnimationSetPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *AnimationSetPropertiesDB)
    {
        AnimationSetPropertiesDB->setWindowTitle(QApplication::translate("AnimationSetPropertiesDB", "Form", 0));
        groupName->setTitle(QApplication::translate("AnimationSetPropertiesDB", "Name", 0));
        groupAction->setTitle(QApplication::translate("AnimationSetPropertiesDB", "Battle Action", 0));

        const bool __sortingEnabled = listAction->isSortingEnabled();
        listAction->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listAction->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("AnimationSetPropertiesDB", "0001: Idle", 0));
        QListWidgetItem *___qlistwidgetitem1 = listAction->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("AnimationSetPropertiesDB", "0002: Shocked", 0));
        QListWidgetItem *___qlistwidgetitem2 = listAction->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("AnimationSetPropertiesDB", "0003: Poisoned", 0));
        QListWidgetItem *___qlistwidgetitem3 = listAction->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("AnimationSetPropertiesDB", "0004: Attack", 0));
        QListWidgetItem *___qlistwidgetitem4 = listAction->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("AnimationSetPropertiesDB", "0005: Defend", 0));
        listAction->setSortingEnabled(__sortingEnabled);

        groupCharaSetGraphic->setTitle(QApplication::translate("AnimationSetPropertiesDB", "Animation", 0));
        pushChange->setText(QApplication::translate("AnimationSetPropertiesDB", "Change ...", 0));
    } // retranslateUi

};

namespace Ui {
    class AnimationSetPropertiesDB: public Ui_AnimationSetPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONSETPROPERTIESDB_H
