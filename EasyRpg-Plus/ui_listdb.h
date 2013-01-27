/********************************************************************************
** Form generated from reading UI file 'listdb.ui'
**
** Created: Fri 18. Jan 21:35:21 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTDB_H
#define UI_LISTDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListDB
{
public:
    QGridLayout *gridLayout;
    QListWidget *list;
    QLineEdit *lineFilter;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolAdd;
    QToolButton *toolMoveDown;
    QToolButton *toolMoveUp;
    QToolButton *toolDelete;

    void setupUi(QWidget *ListDB)
    {
        if (ListDB->objectName().isEmpty())
            ListDB->setObjectName(QStringLiteral("ListDB"));
        ListDB->resize(198, 518);
        ListDB->setMinimumSize(QSize(198, 0));
        ListDB->setMaximumSize(QSize(198, 16777215));
        ListDB->setProperty("aad", QVariant(false));
        gridLayout = new QGridLayout(ListDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        list = new QListWidget(ListDB);
        new QListWidgetItem(list);
        new QListWidgetItem(list);
        new QListWidgetItem(list);
        new QListWidgetItem(list);
        list->setObjectName(QStringLiteral("list"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(list->sizePolicy().hasHeightForWidth());
        list->setSizePolicy(sizePolicy);
        list->setViewMode(QListView::ListMode);

        gridLayout->addWidget(list, 1, 0, 1, 6);

        lineFilter = new QLineEdit(ListDB);
        lineFilter->setObjectName(QStringLiteral("lineFilter"));
        lineFilter->setEchoMode(QLineEdit::Normal);
        lineFilter->setCursorPosition(0);

        gridLayout->addWidget(lineFilter, 0, 0, 1, 6);

        frame = new QFrame(ListDB);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(180, 16777215));
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolAdd = new QToolButton(frame);
        toolAdd->setObjectName(QStringLiteral("toolAdd"));
        toolAdd->setMinimumSize(QSize(30, 30));
        toolAdd->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/add"), QSize(), QIcon::Normal, QIcon::Off);
        toolAdd->setIcon(icon);

        horizontalLayout_2->addWidget(toolAdd);

        toolMoveDown = new QToolButton(frame);
        toolMoveDown->setObjectName(QStringLiteral("toolMoveDown"));
        toolMoveDown->setMinimumSize(QSize(30, 30));
        toolMoveDown->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/movedown"), QSize(), QIcon::Normal, QIcon::Off);
        toolMoveDown->setIcon(icon1);

        horizontalLayout_2->addWidget(toolMoveDown);

        toolMoveUp = new QToolButton(frame);
        toolMoveUp->setObjectName(QStringLiteral("toolMoveUp"));
        toolMoveUp->setMinimumSize(QSize(30, 30));
        toolMoveUp->setMaximumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/moveup"), QSize(), QIcon::Normal, QIcon::Off);
        toolMoveUp->setIcon(icon2);

        horizontalLayout_2->addWidget(toolMoveUp);

        toolDelete = new QToolButton(frame);
        toolDelete->setObjectName(QStringLiteral("toolDelete"));
        toolDelete->setMinimumSize(QSize(30, 30));
        toolDelete->setMaximumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/delete"), QSize(), QIcon::Normal, QIcon::Off);
        toolDelete->setIcon(icon3);

        horizontalLayout_2->addWidget(toolDelete);


        gridLayout->addWidget(frame, 2, 0, 1, 6);


        retranslateUi(ListDB);

        QMetaObject::connectSlotsByName(ListDB);
    } // setupUi

    void retranslateUi(QWidget *ListDB)
    {
        ListDB->setWindowTitle(QApplication::translate("ListDB", "Form", 0));
        ListDB->setProperty("asd", QVariant(QString()));

        const bool __sortingEnabled = list->isSortingEnabled();
        list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = list->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ListDB", "0001: Healing Potion", 0));
        QListWidgetItem *___qlistwidgetitem1 = list->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ListDB", "0002: Mana Potion", 0));
        QListWidgetItem *___qlistwidgetitem2 = list->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("ListDB", "0005: Antidote", 0));
        QListWidgetItem *___qlistwidgetitem3 = list->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("ListDB", "0004: Scroll: Ice bolt", 0));
        list->setSortingEnabled(__sortingEnabled);

        lineFilter->setPlaceholderText(QApplication::translate("ListDB", "Filter", 0));
        toolAdd->setText(QString());
        toolMoveDown->setText(QString());
        toolMoveUp->setText(QString());
        toolDelete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ListDB: public Ui_ListDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTDB_H
