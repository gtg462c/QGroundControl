/********************************************************************************
** Form generated from reading UI file 'ApmPlaneLevel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMPLANELEVEL_H
#define UI_APMPLANELEVEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmPlaneLevel
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *levelPushButton;
    QGroupBox *groupBox;
    QCheckBox *manualLevelCheckBox;

    void setupUi(QWidget *ApmPlaneLevel)
    {
        if (ApmPlaneLevel->objectName().isEmpty())
            ApmPlaneLevel->setObjectName(QString::fromUtf8("ApmPlaneLevel"));
        ApmPlaneLevel->resize(400, 300);
        label = new QLabel(ApmPlaneLevel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 141, 31));
        label_2 = new QLabel(ApmPlaneLevel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 271, 41));
        label_3 = new QLabel(ApmPlaneLevel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 150, 291, 16));
        levelPushButton = new QPushButton(ApmPlaneLevel);
        levelPushButton->setObjectName(QString::fromUtf8("levelPushButton"));
        levelPushButton->setGeometry(QRect(160, 180, 75, 23));
        groupBox = new QGroupBox(ApmPlaneLevel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(120, 230, 151, 51));
        manualLevelCheckBox = new QCheckBox(groupBox);
        manualLevelCheckBox->setObjectName(QString::fromUtf8("manualLevelCheckBox"));
        manualLevelCheckBox->setGeometry(QRect(30, 20, 91, 17));

        retranslateUi(ApmPlaneLevel);

        QMetaObject::connectSlotsByName(ApmPlaneLevel);
    } // setupUi

    void retranslateUi(QWidget *ApmPlaneLevel)
    {
        ApmPlaneLevel->setWindowTitle(QApplication::translate("ApmPlaneLevel", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ApmPlaneLevel", "<h2>ArduPlane Level</h2>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ApmPlaneLevel", "By Default your plane will autolevel on every boot.\n"
"To disable this action you need to turn on manual\n"
"level and perform a level to calibrate the accel offsets.", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ApmPlaneLevel", "Level your plane and click Level to set default accel offsets", 0, QApplication::UnicodeUTF8));
        levelPushButton->setText(QApplication::translate("ApmPlaneLevel", "Level", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ApmPlaneLevel", "For advanced users ONLY", 0, QApplication::UnicodeUTF8));
        manualLevelCheckBox->setText(QApplication::translate("ApmPlaneLevel", "Manual Level", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ApmPlaneLevel: public Ui_ApmPlaneLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMPLANELEVEL_H
