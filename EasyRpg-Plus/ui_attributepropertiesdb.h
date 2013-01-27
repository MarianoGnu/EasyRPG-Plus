/********************************************************************************
** Form generated from reading UI file 'attributepropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTEPROPERTIESDB_H
#define UI_ATTRIBUTEPROPERTIESDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttributePropertiesDB
{
public:
    QGridLayout *gridLayout_9;
    QGroupBox *groupAttributeName;
    QGridLayout *gridLayout;
    QLineEdit *lineAttributeName;
    QGroupBox *groupAttributeClasification;
    QGridLayout *gridLayout_2;
    QComboBox *comboAttributeClasification;
    QGroupBox *groupAttributeRank;
    QGridLayout *gridLayout_8;
    QGroupBox *groupAttributeRankA;
    QGridLayout *gridLayout_3;
    QSpinBox *spinAttributeRankA;
    QGroupBox *groupAttributeRankB;
    QGridLayout *gridLayout_4;
    QSpinBox *spinAttributeRankB;
    QGroupBox *groupAttributeRankC;
    QGridLayout *gridLayout_5;
    QSpinBox *spinAttributeRankC;
    QGroupBox *groupAttributeRankD;
    QGridLayout *gridLayout_6;
    QSpinBox *spinAttributeRankD;
    QGroupBox *groupAttributeRankE;
    QGridLayout *gridLayout_7;
    QSpinBox *spinAttributeRankE;

    void setupUi(QWidget *AttributePropertiesDB)
    {
        if (AttributePropertiesDB->objectName().isEmpty())
            AttributePropertiesDB->setObjectName(QStringLiteral("AttributePropertiesDB"));
        AttributePropertiesDB->resize(518, 227);
        gridLayout_9 = new QGridLayout(AttributePropertiesDB);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        groupAttributeName = new QGroupBox(AttributePropertiesDB);
        groupAttributeName->setObjectName(QStringLiteral("groupAttributeName"));
        gridLayout = new QGridLayout(groupAttributeName);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineAttributeName = new QLineEdit(groupAttributeName);
        lineAttributeName->setObjectName(QStringLiteral("lineAttributeName"));

        gridLayout->addWidget(lineAttributeName, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupAttributeName, 0, 0, 1, 1);

        groupAttributeClasification = new QGroupBox(AttributePropertiesDB);
        groupAttributeClasification->setObjectName(QStringLiteral("groupAttributeClasification"));
        gridLayout_2 = new QGridLayout(groupAttributeClasification);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        comboAttributeClasification = new QComboBox(groupAttributeClasification);
        comboAttributeClasification->setObjectName(QStringLiteral("comboAttributeClasification"));

        gridLayout_2->addWidget(comboAttributeClasification, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupAttributeClasification, 1, 0, 1, 1);

        groupAttributeRank = new QGroupBox(AttributePropertiesDB);
        groupAttributeRank->setObjectName(QStringLiteral("groupAttributeRank"));
        gridLayout_8 = new QGridLayout(groupAttributeRank);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupAttributeRankA = new QGroupBox(groupAttributeRank);
        groupAttributeRankA->setObjectName(QStringLiteral("groupAttributeRankA"));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupAttributeRankA->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupAttributeRankA->setFont(font);
        groupAttributeRankA->setFlat(true);
        gridLayout_3 = new QGridLayout(groupAttributeRankA);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        spinAttributeRankA = new QSpinBox(groupAttributeRankA);
        spinAttributeRankA->setObjectName(QStringLiteral("spinAttributeRankA"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinAttributeRankA->setPalette(palette1);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        spinAttributeRankA->setFont(font1);

        gridLayout_3->addWidget(spinAttributeRankA, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupAttributeRankA, 0, 0, 1, 1);

        groupAttributeRankB = new QGroupBox(groupAttributeRank);
        groupAttributeRankB->setObjectName(QStringLiteral("groupAttributeRankB"));
        QPalette palette2;
        QBrush brush3(QColor(255, 85, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupAttributeRankB->setPalette(palette2);
        groupAttributeRankB->setFont(font);
        groupAttributeRankB->setFlat(true);
        gridLayout_4 = new QGridLayout(groupAttributeRankB);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        spinAttributeRankB = new QSpinBox(groupAttributeRankB);
        spinAttributeRankB->setObjectName(QStringLiteral("spinAttributeRankB"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinAttributeRankB->setPalette(palette3);
        spinAttributeRankB->setFont(font1);

        gridLayout_4->addWidget(spinAttributeRankB, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupAttributeRankB, 0, 1, 1, 1);

        groupAttributeRankC = new QGroupBox(groupAttributeRank);
        groupAttributeRankC->setObjectName(QStringLiteral("groupAttributeRankC"));
        QPalette palette4;
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupAttributeRankC->setPalette(palette4);
        groupAttributeRankC->setFont(font);
        groupAttributeRankC->setFlat(true);
        gridLayout_5 = new QGridLayout(groupAttributeRankC);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        spinAttributeRankC = new QSpinBox(groupAttributeRankC);
        spinAttributeRankC->setObjectName(QStringLiteral("spinAttributeRankC"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinAttributeRankC->setPalette(palette5);
        spinAttributeRankC->setFont(font1);

        gridLayout_5->addWidget(spinAttributeRankC, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupAttributeRankC, 0, 2, 1, 1);

        groupAttributeRankD = new QGroupBox(groupAttributeRank);
        groupAttributeRankD->setObjectName(QStringLiteral("groupAttributeRankD"));
        QPalette palette6;
        QBrush brush5(QColor(0, 0, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupAttributeRankD->setPalette(palette6);
        groupAttributeRankD->setFont(font);
        groupAttributeRankD->setFlat(true);
        gridLayout_6 = new QGridLayout(groupAttributeRankD);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        spinAttributeRankD = new QSpinBox(groupAttributeRankD);
        spinAttributeRankD->setObjectName(QStringLiteral("spinAttributeRankD"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinAttributeRankD->setPalette(palette7);
        spinAttributeRankD->setFont(font1);

        gridLayout_6->addWidget(spinAttributeRankD, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupAttributeRankD, 0, 3, 1, 1);

        groupAttributeRankE = new QGroupBox(groupAttributeRank);
        groupAttributeRankE->setObjectName(QStringLiteral("groupAttributeRankE"));
        QPalette palette8;
        QBrush brush6(QColor(85, 0, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupAttributeRankE->setPalette(palette8);
        groupAttributeRankE->setFont(font);
        groupAttributeRankE->setFlat(true);
        gridLayout_7 = new QGridLayout(groupAttributeRankE);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        spinAttributeRankE = new QSpinBox(groupAttributeRankE);
        spinAttributeRankE->setObjectName(QStringLiteral("spinAttributeRankE"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        spinAttributeRankE->setPalette(palette9);
        spinAttributeRankE->setFont(font1);

        gridLayout_7->addWidget(spinAttributeRankE, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupAttributeRankE, 0, 4, 1, 1);


        gridLayout_9->addWidget(groupAttributeRank, 2, 0, 1, 1);


        retranslateUi(AttributePropertiesDB);

        QMetaObject::connectSlotsByName(AttributePropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *AttributePropertiesDB)
    {
        AttributePropertiesDB->setWindowTitle(QApplication::translate("AttributePropertiesDB", "Form", 0));
        groupAttributeName->setTitle(QApplication::translate("AttributePropertiesDB", "Name", 0));
        groupAttributeClasification->setTitle(QApplication::translate("AttributePropertiesDB", "Classification", 0));
        comboAttributeClasification->clear();
        comboAttributeClasification->insertItems(0, QStringList()
         << QApplication::translate("AttributePropertiesDB", "Skill", 0)
         << QApplication::translate("AttributePropertiesDB", "Weapon", 0)
        );
        groupAttributeRank->setTitle(QApplication::translate("AttributePropertiesDB", "Rank Effect", 0));
        groupAttributeRankA->setTitle(QApplication::translate("AttributePropertiesDB", "A", 0));
        spinAttributeRankA->setSuffix(QApplication::translate("AttributePropertiesDB", " %", 0));
        groupAttributeRankB->setTitle(QApplication::translate("AttributePropertiesDB", "B", 0));
        spinAttributeRankB->setSuffix(QApplication::translate("AttributePropertiesDB", " %", 0));
        groupAttributeRankC->setTitle(QApplication::translate("AttributePropertiesDB", "C", 0));
        spinAttributeRankC->setSuffix(QApplication::translate("AttributePropertiesDB", " %", 0));
        groupAttributeRankD->setTitle(QApplication::translate("AttributePropertiesDB", "D", 0));
        spinAttributeRankD->setSuffix(QApplication::translate("AttributePropertiesDB", " %", 0));
        groupAttributeRankE->setTitle(QApplication::translate("AttributePropertiesDB", "E", 0));
        spinAttributeRankE->setSuffix(QApplication::translate("AttributePropertiesDB", " %", 0));
    } // retranslateUi

};

namespace Ui {
    class AttributePropertiesDB: public Ui_AttributePropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTEPROPERTIESDB_H
