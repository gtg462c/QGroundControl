/********************************************************************************
** Form generated from reading UI file 'QGCHilFlightGearConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILFLIGHTGEARCONFIGURATION_H
#define UI_QGCHILFLIGHTGEARCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilFlightGearConfiguration
{
public:
    QGridLayout *gridLayout;
    QComboBox *aircraftComboBox;
    QLabel *optionsLabel;
    QLabel *aircraftPlaintextInfoLabel;
    QPlainTextEdit *optionsPlainTextEdit;
    QPushButton *startButton;
    QPushButton *stopButton;
    QCheckBox *sensorHilCheckBox;
    QLabel *barometerOffsetLabel;
    QLineEdit *barometerOffsetLineEdit;

    void setupUi(QWidget *QGCHilFlightGearConfiguration)
    {
        if (QGCHilFlightGearConfiguration->objectName().isEmpty())
            QGCHilFlightGearConfiguration->setObjectName(QString::fromUtf8("QGCHilFlightGearConfiguration"));
        QGCHilFlightGearConfiguration->resize(237, 209);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCHilFlightGearConfiguration->sizePolicy().hasHeightForWidth());
        QGCHilFlightGearConfiguration->setSizePolicy(sizePolicy);
        QGCHilFlightGearConfiguration->setLayoutDirection(Qt::LeftToRight);
        QGCHilFlightGearConfiguration->setAutoFillBackground(false);
        gridLayout = new QGridLayout(QGCHilFlightGearConfiguration);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        aircraftComboBox = new QComboBox(QGCHilFlightGearConfiguration);
        aircraftComboBox->setObjectName(QString::fromUtf8("aircraftComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aircraftComboBox->sizePolicy().hasHeightForWidth());
        aircraftComboBox->setSizePolicy(sizePolicy1);
        aircraftComboBox->setEditable(true);

        gridLayout->addWidget(aircraftComboBox, 1, 0, 1, 2);

        optionsLabel = new QLabel(QGCHilFlightGearConfiguration);
        optionsLabel->setObjectName(QString::fromUtf8("optionsLabel"));

        gridLayout->addWidget(optionsLabel, 4, 0, 1, 1);

        aircraftPlaintextInfoLabel = new QLabel(QGCHilFlightGearConfiguration);
        aircraftPlaintextInfoLabel->setObjectName(QString::fromUtf8("aircraftPlaintextInfoLabel"));

        gridLayout->addWidget(aircraftPlaintextInfoLabel, 0, 0, 1, 1);

        optionsPlainTextEdit = new QPlainTextEdit(QGCHilFlightGearConfiguration);
        optionsPlainTextEdit->setObjectName(QString::fromUtf8("optionsPlainTextEdit"));
        sizePolicy.setHeightForWidth(optionsPlainTextEdit->sizePolicy().hasHeightForWidth());
        optionsPlainTextEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(optionsPlainTextEdit, 5, 0, 1, 2);

        startButton = new QPushButton(QGCHilFlightGearConfiguration);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(startButton, 7, 0, 1, 1);

        stopButton = new QPushButton(QGCHilFlightGearConfiguration);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        gridLayout->addWidget(stopButton, 7, 1, 1, 1);

        sensorHilCheckBox = new QCheckBox(QGCHilFlightGearConfiguration);
        sensorHilCheckBox->setObjectName(QString::fromUtf8("sensorHilCheckBox"));
        sensorHilCheckBox->setChecked(true);

        gridLayout->addWidget(sensorHilCheckBox, 2, 0, 1, 1);

        barometerOffsetLabel = new QLabel(QGCHilFlightGearConfiguration);
        barometerOffsetLabel->setObjectName(QString::fromUtf8("barometerOffsetLabel"));

        gridLayout->addWidget(barometerOffsetLabel, 3, 0, 1, 1);

        barometerOffsetLineEdit = new QLineEdit(QGCHilFlightGearConfiguration);
        barometerOffsetLineEdit->setObjectName(QString::fromUtf8("barometerOffsetLineEdit"));

        gridLayout->addWidget(barometerOffsetLineEdit, 3, 1, 1, 1);


        retranslateUi(QGCHilFlightGearConfiguration);

        QMetaObject::connectSlotsByName(QGCHilFlightGearConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilFlightGearConfiguration)
    {
        QGCHilFlightGearConfiguration->setWindowTitle(QApplication::translate("QGCHilFlightGearConfiguration", "Form", 0, QApplication::UnicodeUTF8));
        optionsLabel->setText(QApplication::translate("QGCHilFlightGearConfiguration", "<html><head/><body><p>Additional Options:</p></body></html>", 0, QApplication::UnicodeUTF8));
        aircraftPlaintextInfoLabel->setText(QApplication::translate("QGCHilFlightGearConfiguration", "Airframe:", 0, QApplication::UnicodeUTF8));
        optionsPlainTextEdit->setPlainText(QApplication::translate("QGCHilFlightGearConfiguration", "--roll=0 --pitch=0 --vc=0 --heading=300 --timeofday=noon --disable-hud-3d --disable-fullscreen --geometry=400x300 --disable-anti-alias-hud --wind=0@0 --turbulence=0.0 --prop:/sim/frame-rate-throttle-hz=30 --control=mouse --disable-sound --disable-random-objects --disable-ai-models --shading-flat --fog-disable --disable-specular-highlight --disable-random-objects --disable-panel --disable-clouds --fdm=jsb --units-meters --prop:/engines/engine/running=true", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("QGCHilFlightGearConfiguration", "Start", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("QGCHilFlightGearConfiguration", "Stop", 0, QApplication::UnicodeUTF8));
        sensorHilCheckBox->setText(QApplication::translate("QGCHilFlightGearConfiguration", "Sensor HIL", 0, QApplication::UnicodeUTF8));
        barometerOffsetLabel->setText(QApplication::translate("QGCHilFlightGearConfiguration", "Barometer Offset [kPa]:", 0, QApplication::UnicodeUTF8));
        barometerOffsetLineEdit->setText(QApplication::translate("QGCHilFlightGearConfiguration", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCHilFlightGearConfiguration: public Ui_QGCHilFlightGearConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILFLIGHTGEARCONFIGURATION_H
