/********************************************************************************
** Form generated from reading UI file 'QGCPX4FirmwareUpdate.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPX4FIRMWAREUPDATE_H
#define UI_QGCPX4FIRMWAREUPDATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPX4FirmwareUpdate
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *firmwareSelectTab;
    QGridLayout *gridLayout_2;
    QListWidget *fileList;
    QLineEdit *fileLineEdit;
    QPushButton *selectFileButton;
    QWidget *settingsBackupTab;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit;
    QPushButton *settingsStoreButton;
    QWidget *flashTab;
    QGridLayout *gridLayout_4;
    QLabel *fileLabel;
    QProgressBar *progressBar;
    QLabel *statusLabel;
    QPushButton *flashButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *QGCPX4FirmwareUpdate)
    {
        if (QGCPX4FirmwareUpdate->objectName().isEmpty())
            QGCPX4FirmwareUpdate->setObjectName(QString::fromUtf8("QGCPX4FirmwareUpdate"));
        QGCPX4FirmwareUpdate->resize(400, 300);
        gridLayout = new QGridLayout(QGCPX4FirmwareUpdate);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(QGCPX4FirmwareUpdate);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        firmwareSelectTab = new QWidget();
        firmwareSelectTab->setObjectName(QString::fromUtf8("firmwareSelectTab"));
        gridLayout_2 = new QGridLayout(firmwareSelectTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, -1, 6, 6);
        fileList = new QListWidget(firmwareSelectTab);
        fileList->setObjectName(QString::fromUtf8("fileList"));

        gridLayout_2->addWidget(fileList, 0, 0, 1, 2);

        fileLineEdit = new QLineEdit(firmwareSelectTab);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));

        gridLayout_2->addWidget(fileLineEdit, 1, 0, 1, 1);

        selectFileButton = new QPushButton(firmwareSelectTab);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));

        gridLayout_2->addWidget(selectFileButton, 1, 1, 1, 1);

        tabWidget->addTab(firmwareSelectTab, QString());
        settingsBackupTab = new QWidget();
        settingsBackupTab->setObjectName(QString::fromUtf8("settingsBackupTab"));
        gridLayout_3 = new QGridLayout(settingsBackupTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit = new QLineEdit(settingsBackupTab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 0, 1, 1);

        settingsStoreButton = new QPushButton(settingsBackupTab);
        settingsStoreButton->setObjectName(QString::fromUtf8("settingsStoreButton"));

        gridLayout_3->addWidget(settingsStoreButton, 0, 1, 1, 1);

        tabWidget->addTab(settingsBackupTab, QString());
        flashTab = new QWidget();
        flashTab->setObjectName(QString::fromUtf8("flashTab"));
        gridLayout_4 = new QGridLayout(flashTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        fileLabel = new QLabel(flashTab);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));

        gridLayout_4->addWidget(fileLabel, 0, 0, 1, 1);

        progressBar = new QProgressBar(flashTab);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout_4->addWidget(progressBar, 1, 0, 1, 1);

        statusLabel = new QLabel(flashTab);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        gridLayout_4->addWidget(statusLabel, 2, 0, 1, 1);

        flashButton = new QPushButton(flashTab);
        flashButton->setObjectName(QString::fromUtf8("flashButton"));

        gridLayout_4->addWidget(flashButton, 3, 0, 1, 1);

        tabWidget->addTab(flashTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(QGCPX4FirmwareUpdate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(QGCPX4FirmwareUpdate);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(QGCPX4FirmwareUpdate);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 3, 1, 1);


        retranslateUi(QGCPX4FirmwareUpdate);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QGCPX4FirmwareUpdate);
    } // setupUi

    void retranslateUi(QWidget *QGCPX4FirmwareUpdate)
    {
        QGCPX4FirmwareUpdate->setWindowTitle(QApplication::translate("QGCPX4FirmwareUpdate", "Form", 0, QApplication::UnicodeUTF8));
        selectFileButton->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Select File", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(firmwareSelectTab), QApplication::translate("QGCPX4FirmwareUpdate", "Firmware", 0, QApplication::UnicodeUTF8));
        settingsStoreButton->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Select File", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(settingsBackupTab), QApplication::translate("QGCPX4FirmwareUpdate", "Settings", 0, QApplication::UnicodeUTF8));
        fileLabel->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Filename", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Status", 0, QApplication::UnicodeUTF8));
        flashButton->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Flash Firmware", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(flashTab), QApplication::translate("QGCPX4FirmwareUpdate", "Flash Firmware", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Prev", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Next", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("QGCPX4FirmwareUpdate", "Flash", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCPX4FirmwareUpdate: public Ui_QGCPX4FirmwareUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPX4FIRMWAREUPDATE_H
