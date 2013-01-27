/********************************************************************************
** Form generated from reading UI file 'facesetpropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACESETPROPERTIESDB_H
#define UI_FACESETPROPERTIESDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "listdb.h"

QT_BEGIN_NAMESPACE

class Ui_FaceSetPropertiesDB
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupExpresion;
    QGridLayout *gridLayout1;
    ListDB *listExpresion;
    QGroupBox *groupGraphic;
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsGraphic;
    QPushButton *pushChangeGraphic;
    QGroupBox *groupName;
    QGridLayout *gridLayout_4;
    QLineEdit *lineName;

    void setupUi(QWidget *FaceSetPropertiesDB)
    {
        if (FaceSetPropertiesDB->objectName().isEmpty())
            FaceSetPropertiesDB->setObjectName(QStringLiteral("FaceSetPropertiesDB"));
        FaceSetPropertiesDB->resize(400, 267);
        FaceSetPropertiesDB->setMinimumSize(QSize(0, 267));
        gridLayout = new QGridLayout(FaceSetPropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupExpresion = new QGroupBox(FaceSetPropertiesDB);
        groupExpresion->setObjectName(QStringLiteral("groupExpresion"));
        gridLayout1 = new QGridLayout(groupExpresion);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        listExpresion = new ListDB(groupExpresion);
        listExpresion->setObjectName(QStringLiteral("listExpresion"));

        gridLayout1->addWidget(listExpresion, 1, 0, 1, 1);


        gridLayout->addWidget(groupExpresion, 1, 0, 1, 1);

        groupGraphic = new QGroupBox(FaceSetPropertiesDB);
        groupGraphic->setObjectName(QStringLiteral("groupGraphic"));
        gridLayout_2 = new QGridLayout(groupGraphic);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        graphicsGraphic = new QGraphicsView(groupGraphic);
        graphicsGraphic->setObjectName(QStringLiteral("graphicsGraphic"));

        gridLayout_2->addWidget(graphicsGraphic, 0, 0, 1, 1);

        pushChangeGraphic = new QPushButton(groupGraphic);
        pushChangeGraphic->setObjectName(QStringLiteral("pushChangeGraphic"));

        gridLayout_2->addWidget(pushChangeGraphic, 1, 0, 1, 1);


        gridLayout->addWidget(groupGraphic, 1, 1, 1, 1);

        groupName = new QGroupBox(FaceSetPropertiesDB);
        groupName->setObjectName(QStringLiteral("groupName"));
        gridLayout_4 = new QGridLayout(groupName);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lineName = new QLineEdit(groupName);
        lineName->setObjectName(QStringLiteral("lineName"));

        gridLayout_4->addWidget(lineName, 0, 0, 1, 1);


        gridLayout->addWidget(groupName, 0, 0, 1, 2);


        retranslateUi(FaceSetPropertiesDB);

        QMetaObject::connectSlotsByName(FaceSetPropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *FaceSetPropertiesDB)
    {
        FaceSetPropertiesDB->setWindowTitle(QApplication::translate("FaceSetPropertiesDB", "Form", 0));
        groupExpresion->setTitle(QApplication::translate("FaceSetPropertiesDB", "Face Expresion", 0));
        groupGraphic->setTitle(QApplication::translate("FaceSetPropertiesDB", "Face Graphic", 0));
        pushChangeGraphic->setText(QApplication::translate("FaceSetPropertiesDB", "Change ...", 0));
        groupName->setTitle(QApplication::translate("FaceSetPropertiesDB", "Name", 0));
    } // retranslateUi

};

namespace Ui {
    class FaceSetPropertiesDB: public Ui_FaceSetPropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACESETPROPERTIESDB_H
