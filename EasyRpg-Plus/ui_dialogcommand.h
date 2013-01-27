/********************************************************************************
** Form generated from reading UI file 'dialogcommand.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOMMAND_H
#define UI_DIALOGCOMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCommand
{
public:
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;

    void setupUi(QDialog *DialogCommand)
    {
        if (DialogCommand->objectName().isEmpty())
            DialogCommand->setObjectName(QStringLiteral("DialogCommand"));
        DialogCommand->setWindowModality(Qt::WindowModal);
        DialogCommand->resize(400, 204);
        DialogCommand->setModal(true);
        gridLayout = new QGridLayout(DialogCommand);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolBox = new QToolBox(DialogCommand);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 112, 128));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

        toolBox->addItem(widget, QStringLiteral("Dialog Commands"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 365, 186));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_3->addWidget(pushButton_9, 4, 0, 1, 1);

        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(page_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout_3->addWidget(pushButton_10, 5, 0, 1, 1);

        toolBox->addItem(page_2, QStringLiteral("Structure Comands"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);


        retranslateUi(DialogCommand);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DialogCommand);
    } // setupUi

    void retranslateUi(QDialog *DialogCommand)
    {
        DialogCommand->setWindowTitle(QApplication::translate("DialogCommand", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("DialogCommand", "Multiple Choice ...", 0));
        pushButton_3->setText(QApplication::translate("DialogCommand", "Imput Integer ...", 0));
        pushButton->setText(QApplication::translate("DialogCommand", "Show Dialog ...", 0));
        pushButton_4->setText(QApplication::translate("DialogCommand", "ImputString ...", 0));
        toolBox->setItemText(toolBox->indexOf(widget), QApplication::translate("DialogCommand", "Dialog Commands", 0));
        pushButton_8->setText(QApplication::translate("DialogCommand", "Loop", 0));
        pushButton_7->setText(QApplication::translate("DialogCommand", "Go To Label", 0));
        pushButton_9->setText(QApplication::translate("DialogCommand", "Break", 0));
        pushButton_6->setText(QApplication::translate("DialogCommand", "Set Label", 0));
        pushButton_5->setText(QApplication::translate("DialogCommand", "If", 0));
        pushButton_10->setText(QApplication::translate("DialogCommand", "Continue", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("DialogCommand", "Structure Comands", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogCommand: public Ui_DialogCommand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOMMAND_H
