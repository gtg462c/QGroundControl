/********************************************************************************
** Form generated from reading UI file 'AntennaTrackerConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANTENNATRACKERCONFIG_H
#define UI_ANTENNATRACKERCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AntennaTrackerConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *connectPushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *panAngleLineEdit;
    QLineEdit *panPwmLineEdit;
    QLineEdit *pwnCenterLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QLabel *panTrimLabel;
    QCheckBox *panRevCheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *tiltAngleLineEdit;
    QLineEdit *tiltPwmLineEdit;
    QLineEdit *tiltCenterLineEdit;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QSlider *horizontalSlider_2;
    QLabel *tiltTrimLabel;
    QCheckBox *tiltRevCheckBox;

    void setupUi(QWidget *AntennaTrackerConfig)
    {
        if (AntennaTrackerConfig->objectName().isEmpty())
            AntennaTrackerConfig->setObjectName(QString::fromUtf8("AntennaTrackerConfig"));
        AntennaTrackerConfig->resize(1171, 560);
        label = new QLabel(AntennaTrackerConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 151, 31));
        label->setScaledContents(false);
        label_2 = new QLabel(AntennaTrackerConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 46, 13));
        comboBox = new QComboBox(AntennaTrackerConfig);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 50, 69, 22));
        comboBox_2 = new QComboBox(AntennaTrackerConfig);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(160, 50, 69, 22));
        comboBox_3 = new QComboBox(AntennaTrackerConfig);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(240, 50, 69, 22));
        connectPushButton = new QPushButton(AntennaTrackerConfig);
        connectPushButton->setObjectName(QString::fromUtf8("connectPushButton"));
        connectPushButton->setGeometry(QRect(320, 50, 75, 23));
        groupBox = new QGroupBox(AntennaTrackerConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 80, 581, 131));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        panAngleLineEdit = new QLineEdit(groupBox);
        panAngleLineEdit->setObjectName(QString::fromUtf8("panAngleLineEdit"));

        verticalLayout_2->addWidget(panAngleLineEdit);

        panPwmLineEdit = new QLineEdit(groupBox);
        panPwmLineEdit->setObjectName(QString::fromUtf8("panPwmLineEdit"));

        verticalLayout_2->addWidget(panPwmLineEdit);

        pwnCenterLineEdit = new QLineEdit(groupBox);
        pwnCenterLineEdit->setObjectName(QString::fromUtf8("pwnCenterLineEdit"));

        verticalLayout_2->addWidget(pwnCenterLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(-180);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);

        panTrimLabel = new QLabel(groupBox);
        panTrimLabel->setObjectName(QString::fromUtf8("panTrimLabel"));
        panTrimLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(panTrimLabel);


        horizontalLayout->addLayout(verticalLayout_3);

        panRevCheckBox = new QCheckBox(groupBox);
        panRevCheckBox->setObjectName(QString::fromUtf8("panRevCheckBox"));

        horizontalLayout->addWidget(panRevCheckBox);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 5);

        verticalLayout_4->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(AntennaTrackerConfig);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 220, 581, 131));
        verticalLayout_8 = new QVBoxLayout(groupBox_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tiltAngleLineEdit = new QLineEdit(groupBox_2);
        tiltAngleLineEdit->setObjectName(QString::fromUtf8("tiltAngleLineEdit"));

        verticalLayout_6->addWidget(tiltAngleLineEdit);

        tiltPwmLineEdit = new QLineEdit(groupBox_2);
        tiltPwmLineEdit->setObjectName(QString::fromUtf8("tiltPwmLineEdit"));

        verticalLayout_6->addWidget(tiltPwmLineEdit);

        tiltCenterLineEdit = new QLineEdit(groupBox_2);
        tiltCenterLineEdit->setObjectName(QString::fromUtf8("tiltCenterLineEdit"));

        verticalLayout_6->addWidget(tiltCenterLineEdit);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_11);

        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(-180);
        horizontalSlider_2->setMaximum(180);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(horizontalSlider_2);

        tiltTrimLabel = new QLabel(groupBox_2);
        tiltTrimLabel->setObjectName(QString::fromUtf8("tiltTrimLabel"));
        tiltTrimLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(tiltTrimLabel);


        horizontalLayout_2->addLayout(verticalLayout_7);

        tiltRevCheckBox = new QCheckBox(groupBox_2);
        tiltRevCheckBox->setObjectName(QString::fromUtf8("tiltRevCheckBox"));

        horizontalLayout_2->addWidget(tiltRevCheckBox);

        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 5);

        verticalLayout_8->addLayout(horizontalLayout_2);


        retranslateUi(AntennaTrackerConfig);

        QMetaObject::connectSlotsByName(AntennaTrackerConfig);
    } // setupUi

    void retranslateUi(QWidget *AntennaTrackerConfig)
    {
        AntennaTrackerConfig->setWindowTitle(QApplication::translate("AntennaTrackerConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AntennaTrackerConfig", "<h2>Antenna Tracker</h2>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AntennaTrackerConfig", "Interface", 0, QApplication::UnicodeUTF8));
        connectPushButton->setText(QApplication::translate("AntennaTrackerConfig", "Connect", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AntennaTrackerConfig", "Pan", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AntennaTrackerConfig", "Angle", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AntennaTrackerConfig", "PWM", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AntennaTrackerConfig", "Center PWM", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AntennaTrackerConfig", "Trim", 0, QApplication::UnicodeUTF8));
        panTrimLabel->setText(QApplication::translate("AntennaTrackerConfig", "0", 0, QApplication::UnicodeUTF8));
        panRevCheckBox->setText(QApplication::translate("AntennaTrackerConfig", "Rev", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("AntennaTrackerConfig", "Tilt", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AntennaTrackerConfig", "Angle", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AntennaTrackerConfig", "PWM", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("AntennaTrackerConfig", "Center PWM", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("AntennaTrackerConfig", "Trim", 0, QApplication::UnicodeUTF8));
        tiltTrimLabel->setText(QApplication::translate("AntennaTrackerConfig", "0", 0, QApplication::UnicodeUTF8));
        tiltRevCheckBox->setText(QApplication::translate("AntennaTrackerConfig", "Rev", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AntennaTrackerConfig: public Ui_AntennaTrackerConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANTENNATRACKERCONFIG_H