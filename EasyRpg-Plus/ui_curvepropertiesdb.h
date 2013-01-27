/********************************************************************************
** Form generated from reading UI file 'curvepropertiesdb.ui'
**
** Created: Wed 16. Jan 01:02:41 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEPROPERTIESDB_H
#define UI_CURVEPROPERTIESDB_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurvePropertiesDB
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupCurveName;
    QGridLayout *gridLayout_36;
    QLineEdit *lineCurveName;
    QTabWidget *tabCurve;
    QWidget *tabCurveHp;
    QGridLayout *gridLayout_37;
    QGraphicsView *graphicsCurveHP;
    QWidget *tabCurveMp;
    QGridLayout *gridLayout_38;
    QGraphicsView *graphicsCurveMP;
    QWidget *tabCurveAttack;
    QGridLayout *gridLayout_39;
    QGraphicsView *graphicsCurveAttack;
    QWidget *tabCurveDefense;
    QGridLayout *gridLayout_40;
    QGraphicsView *graphicsCurveDefense;
    QWidget *tabCurveMind;
    QGridLayout *gridLayout_41;
    QGraphicsView *graphicsCurveMind;
    QWidget *tabCurveAgility;
    QGridLayout *gridLayout_42;
    QGraphicsView *graphicsCurveAgility;
    QWidget *tabCurveExp;
    QGridLayout *gridLayout_43;
    QGraphicsView *graphicsCurveExp;
    QGroupBox *groupCurveLvl;
    QGridLayout *gridLayout_44;
    QSpinBox *spinCurveLvl;
    QGroupBox *groupCurveValue;
    QGridLayout *gridLayout_45;
    QSpinBox *spinCurveValue;
    QGroupBox *groupCurveCreation;
    QGridLayout *gridLayout_46;
    QPushButton *pushCustomeCurve;
    QPushButton *pushCurveLow;
    QPushButton *pushNormalCurve;
    QPushButton *pushExcellentCurve;
    QPushButton *pushGeniusCurve;

    void setupUi(QWidget *CurvePropertiesDB)
    {
        if (CurvePropertiesDB->objectName().isEmpty())
            CurvePropertiesDB->setObjectName(QStringLiteral("CurvePropertiesDB"));
        CurvePropertiesDB->resize(609, 492);
        CurvePropertiesDB->setMinimumSize(QSize(0, 492));
        CurvePropertiesDB->setMaximumSize(QSize(16777215, 492));
        gridLayout = new QGridLayout(CurvePropertiesDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupCurveName = new QGroupBox(CurvePropertiesDB);
        groupCurveName->setObjectName(QStringLiteral("groupCurveName"));
        groupCurveName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupCurveName->sizePolicy().hasHeightForWidth());
        groupCurveName->setSizePolicy(sizePolicy);
        groupCurveName->setMinimumSize(QSize(0, 50));
        groupCurveName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_36 = new QGridLayout(groupCurveName);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        lineCurveName = new QLineEdit(groupCurveName);
        lineCurveName->setObjectName(QStringLiteral("lineCurveName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineCurveName->sizePolicy().hasHeightForWidth());
        lineCurveName->setSizePolicy(sizePolicy1);
        lineCurveName->setMinimumSize(QSize(0, 0));

        gridLayout_36->addWidget(lineCurveName, 0, 0, 1, 1);


        gridLayout->addWidget(groupCurveName, 0, 0, 1, 2);

        tabCurve = new QTabWidget(CurvePropertiesDB);
        tabCurve->setObjectName(QStringLiteral("tabCurve"));
        tabCurve->setTabPosition(QTabWidget::North);
        tabCurve->setTabShape(QTabWidget::Rounded);
        tabCurveHp = new QWidget();
        tabCurveHp->setObjectName(QStringLiteral("tabCurveHp"));
        gridLayout_37 = new QGridLayout(tabCurveHp);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        graphicsCurveHP = new QGraphicsView(tabCurveHp);
        graphicsCurveHP->setObjectName(QStringLiteral("graphicsCurveHP"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphicsCurveHP->sizePolicy().hasHeightForWidth());
        graphicsCurveHP->setSizePolicy(sizePolicy2);

        gridLayout_37->addWidget(graphicsCurveHP, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveHp, QString());
        tabCurveMp = new QWidget();
        tabCurveMp->setObjectName(QStringLiteral("tabCurveMp"));
        gridLayout_38 = new QGridLayout(tabCurveMp);
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        graphicsCurveMP = new QGraphicsView(tabCurveMp);
        graphicsCurveMP->setObjectName(QStringLiteral("graphicsCurveMP"));
        sizePolicy2.setHeightForWidth(graphicsCurveMP->sizePolicy().hasHeightForWidth());
        graphicsCurveMP->setSizePolicy(sizePolicy2);

        gridLayout_38->addWidget(graphicsCurveMP, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveMp, QString());
        tabCurveAttack = new QWidget();
        tabCurveAttack->setObjectName(QStringLiteral("tabCurveAttack"));
        gridLayout_39 = new QGridLayout(tabCurveAttack);
        gridLayout_39->setObjectName(QStringLiteral("gridLayout_39"));
        graphicsCurveAttack = new QGraphicsView(tabCurveAttack);
        graphicsCurveAttack->setObjectName(QStringLiteral("graphicsCurveAttack"));
        sizePolicy2.setHeightForWidth(graphicsCurveAttack->sizePolicy().hasHeightForWidth());
        graphicsCurveAttack->setSizePolicy(sizePolicy2);

        gridLayout_39->addWidget(graphicsCurveAttack, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveAttack, QString());
        tabCurveDefense = new QWidget();
        tabCurveDefense->setObjectName(QStringLiteral("tabCurveDefense"));
        gridLayout_40 = new QGridLayout(tabCurveDefense);
        gridLayout_40->setObjectName(QStringLiteral("gridLayout_40"));
        graphicsCurveDefense = new QGraphicsView(tabCurveDefense);
        graphicsCurveDefense->setObjectName(QStringLiteral("graphicsCurveDefense"));
        sizePolicy2.setHeightForWidth(graphicsCurveDefense->sizePolicy().hasHeightForWidth());
        graphicsCurveDefense->setSizePolicy(sizePolicy2);

        gridLayout_40->addWidget(graphicsCurveDefense, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveDefense, QString());
        tabCurveMind = new QWidget();
        tabCurveMind->setObjectName(QStringLiteral("tabCurveMind"));
        gridLayout_41 = new QGridLayout(tabCurveMind);
        gridLayout_41->setObjectName(QStringLiteral("gridLayout_41"));
        graphicsCurveMind = new QGraphicsView(tabCurveMind);
        graphicsCurveMind->setObjectName(QStringLiteral("graphicsCurveMind"));
        sizePolicy2.setHeightForWidth(graphicsCurveMind->sizePolicy().hasHeightForWidth());
        graphicsCurveMind->setSizePolicy(sizePolicy2);

        gridLayout_41->addWidget(graphicsCurveMind, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveMind, QString());
        tabCurveAgility = new QWidget();
        tabCurveAgility->setObjectName(QStringLiteral("tabCurveAgility"));
        gridLayout_42 = new QGridLayout(tabCurveAgility);
        gridLayout_42->setObjectName(QStringLiteral("gridLayout_42"));
        graphicsCurveAgility = new QGraphicsView(tabCurveAgility);
        graphicsCurveAgility->setObjectName(QStringLiteral("graphicsCurveAgility"));
        sizePolicy2.setHeightForWidth(graphicsCurveAgility->sizePolicy().hasHeightForWidth());
        graphicsCurveAgility->setSizePolicy(sizePolicy2);

        gridLayout_42->addWidget(graphicsCurveAgility, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveAgility, QString());
        tabCurveExp = new QWidget();
        tabCurveExp->setObjectName(QStringLiteral("tabCurveExp"));
        gridLayout_43 = new QGridLayout(tabCurveExp);
        gridLayout_43->setObjectName(QStringLiteral("gridLayout_43"));
        graphicsCurveExp = new QGraphicsView(tabCurveExp);
        graphicsCurveExp->setObjectName(QStringLiteral("graphicsCurveExp"));
        sizePolicy2.setHeightForWidth(graphicsCurveExp->sizePolicy().hasHeightForWidth());
        graphicsCurveExp->setSizePolicy(sizePolicy2);

        gridLayout_43->addWidget(graphicsCurveExp, 0, 0, 1, 1);

        tabCurve->addTab(tabCurveExp, QString());

        gridLayout->addWidget(tabCurve, 1, 0, 1, 2);

        groupCurveLvl = new QGroupBox(CurvePropertiesDB);
        groupCurveLvl->setObjectName(QStringLiteral("groupCurveLvl"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupCurveLvl->sizePolicy().hasHeightForWidth());
        groupCurveLvl->setSizePolicy(sizePolicy3);
        groupCurveLvl->setMinimumSize(QSize(0, 55));
        groupCurveLvl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_44 = new QGridLayout(groupCurveLvl);
        gridLayout_44->setObjectName(QStringLiteral("gridLayout_44"));
        spinCurveLvl = new QSpinBox(groupCurveLvl);
        spinCurveLvl->setObjectName(QStringLiteral("spinCurveLvl"));
        spinCurveLvl->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinCurveLvl->setAccelerated(false);
        spinCurveLvl->setMinimum(1);

        gridLayout_44->addWidget(spinCurveLvl, 0, 0, 1, 1);


        gridLayout->addWidget(groupCurveLvl, 2, 0, 1, 1);

        groupCurveValue = new QGroupBox(CurvePropertiesDB);
        groupCurveValue->setObjectName(QStringLiteral("groupCurveValue"));
        sizePolicy3.setHeightForWidth(groupCurveValue->sizePolicy().hasHeightForWidth());
        groupCurveValue->setSizePolicy(sizePolicy3);
        groupCurveValue->setMinimumSize(QSize(0, 55));
        groupCurveValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_45 = new QGridLayout(groupCurveValue);
        gridLayout_45->setObjectName(QStringLiteral("gridLayout_45"));
        spinCurveValue = new QSpinBox(groupCurveValue);
        spinCurveValue->setObjectName(QStringLiteral("spinCurveValue"));
        spinCurveValue->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinCurveValue->setAccelerated(false);
        spinCurveValue->setMinimum(1);

        gridLayout_45->addWidget(spinCurveValue, 0, 0, 1, 1);


        gridLayout->addWidget(groupCurveValue, 2, 1, 1, 1);

        groupCurveCreation = new QGroupBox(CurvePropertiesDB);
        groupCurveCreation->setObjectName(QStringLiteral("groupCurveCreation"));
        sizePolicy.setHeightForWidth(groupCurveCreation->sizePolicy().hasHeightForWidth());
        groupCurveCreation->setSizePolicy(sizePolicy);
        groupCurveCreation->setMinimumSize(QSize(40, 0));
        gridLayout_46 = new QGridLayout(groupCurveCreation);
        gridLayout_46->setObjectName(QStringLiteral("gridLayout_46"));
        pushCustomeCurve = new QPushButton(groupCurveCreation);
        pushCustomeCurve->setObjectName(QStringLiteral("pushCustomeCurve"));

        gridLayout_46->addWidget(pushCustomeCurve, 0, 0, 1, 2);

        pushCurveLow = new QPushButton(groupCurveCreation);
        pushCurveLow->setObjectName(QStringLiteral("pushCurveLow"));

        gridLayout_46->addWidget(pushCurveLow, 1, 0, 1, 1);

        pushNormalCurve = new QPushButton(groupCurveCreation);
        pushNormalCurve->setObjectName(QStringLiteral("pushNormalCurve"));

        gridLayout_46->addWidget(pushNormalCurve, 1, 1, 1, 1);

        pushExcellentCurve = new QPushButton(groupCurveCreation);
        pushExcellentCurve->setObjectName(QStringLiteral("pushExcellentCurve"));

        gridLayout_46->addWidget(pushExcellentCurve, 2, 0, 1, 1);

        pushGeniusCurve = new QPushButton(groupCurveCreation);
        pushGeniusCurve->setObjectName(QStringLiteral("pushGeniusCurve"));

        gridLayout_46->addWidget(pushGeniusCurve, 2, 1, 1, 1);


        gridLayout->addWidget(groupCurveCreation, 3, 0, 1, 2);


        retranslateUi(CurvePropertiesDB);

        tabCurve->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CurvePropertiesDB);
    } // setupUi

    void retranslateUi(QWidget *CurvePropertiesDB)
    {
        CurvePropertiesDB->setWindowTitle(QApplication::translate("CurvePropertiesDB", "Form", 0));
        groupCurveName->setTitle(QApplication::translate("CurvePropertiesDB", "Name", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveHp), QApplication::translate("CurvePropertiesDB", "Max HP", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveMp), QApplication::translate("CurvePropertiesDB", "Max Mp", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveAttack), QApplication::translate("CurvePropertiesDB", "Attack", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveDefense), QApplication::translate("CurvePropertiesDB", "Defense", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveMind), QApplication::translate("CurvePropertiesDB", "Mind", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveAgility), QApplication::translate("CurvePropertiesDB", "Agility", 0));
        tabCurve->setTabText(tabCurve->indexOf(tabCurveExp), QApplication::translate("CurvePropertiesDB", "Experience", 0));
        groupCurveLvl->setTitle(QApplication::translate("CurvePropertiesDB", " Level", 0));
        spinCurveLvl->setSpecialValueText(QString());
        spinCurveLvl->setPrefix(QApplication::translate("CurvePropertiesDB", "Lvl ", 0));
        groupCurveValue->setTitle(QApplication::translate("CurvePropertiesDB", "Value", 0));
        spinCurveValue->setSpecialValueText(QString());
        spinCurveValue->setPrefix(QString());
        groupCurveCreation->setTitle(QApplication::translate("CurvePropertiesDB", "Curve Creation", 0));
        pushCustomeCurve->setText(QApplication::translate("CurvePropertiesDB", "Custome Curve ...", 0));
        pushCurveLow->setText(QApplication::translate("CurvePropertiesDB", "Low Curve", 0));
        pushNormalCurve->setText(QApplication::translate("CurvePropertiesDB", "NormalCurve", 0));
        pushExcellentCurve->setText(QApplication::translate("CurvePropertiesDB", "Execellent Curve", 0));
        pushGeniusCurve->setText(QApplication::translate("CurvePropertiesDB", "Genius Curve", 0));
    } // retranslateUi

};

namespace Ui {
    class CurvePropertiesDB: public Ui_CurvePropertiesDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEPROPERTIESDB_H
