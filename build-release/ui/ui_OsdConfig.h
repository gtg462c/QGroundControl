/********************************************************************************
** Form generated from reading UI file 'OsdConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSDCONFIG_H
#define UI_OSDCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OsdConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *enablePushButton;

    void setupUi(QWidget *OsdConfig)
    {
        if (OsdConfig->objectName().isEmpty())
            OsdConfig->setObjectName(QString::fromUtf8("OsdConfig"));
        OsdConfig->resize(499, 243);
        label = new QLabel(OsdConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 31));
        label->setScaledContents(false);
        label_2 = new QLabel(OsdConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 101, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/MinimOSD.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(OsdConfig);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 60, 191, 41));
        enablePushButton = new QPushButton(OsdConfig);
        enablePushButton->setObjectName(QString::fromUtf8("enablePushButton"));
        enablePushButton->setGeometry(QRect(120, 60, 91, 41));

        retranslateUi(OsdConfig);

        QMetaObject::connectSlotsByName(OsdConfig);
    } // setupUi

    void retranslateUi(QWidget *OsdConfig)
    {
        OsdConfig->setWindowTitle(QApplication::translate("OsdConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OsdConfig", "<h2>OSD</h2>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("OsdConfig", "You only need to use this if you are\n"
"having issue with your OSD not\n"
"updating", 0, QApplication::UnicodeUTF8));
        enablePushButton->setText(QApplication::translate("OsdConfig", "Enable\n"
"Telemetry", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OsdConfig: public Ui_OsdConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSDCONFIG_H
