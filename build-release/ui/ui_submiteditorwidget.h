/********************************************************************************
** Form generated from reading UI file 'submiteditorwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMITEDITORWIDGET_H
#define UI_SUBMITEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace Utils {

class Ui_SubmitEditorWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *descriptionBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *description;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTreeView *fileView;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Utils__SubmitEditorWidget)
    {
        if (Utils__SubmitEditorWidget->objectName().isEmpty())
            Utils__SubmitEditorWidget->setObjectName(QString::fromUtf8("Utils__SubmitEditorWidget"));
        Utils__SubmitEditorWidget->resize(582, 502);
        vboxLayout = new QVBoxLayout(Utils__SubmitEditorWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        descriptionBox = new QGroupBox(Utils__SubmitEditorWidget);
        descriptionBox->setObjectName(QString::fromUtf8("descriptionBox"));
        descriptionBox->setFlat(true);
        verticalLayout = new QVBoxLayout(descriptionBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        description = new QTextEdit(descriptionBox);
        description->setObjectName(QString::fromUtf8("description"));
        description->setAcceptRichText(false);

        verticalLayout->addWidget(description);


        vboxLayout->addWidget(descriptionBox);

        groupBox = new QGroupBox(Utils__SubmitEditorWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fileView = new QTreeView(groupBox);
        fileView->setObjectName(QString::fromUtf8("fileView"));

        verticalLayout_2->addWidget(fileView);


        vboxLayout->addWidget(groupBox);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);


        vboxLayout->addLayout(buttonLayout);


        retranslateUi(Utils__SubmitEditorWidget);

        QMetaObject::connectSlotsByName(Utils__SubmitEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *Utils__SubmitEditorWidget)
    {
        Utils__SubmitEditorWidget->setWindowTitle(QApplication::translate("Utils::SubmitEditorWidget", "Subversion Submit", 0, QApplication::UnicodeUTF8));
        descriptionBox->setTitle(QApplication::translate("Utils::SubmitEditorWidget", "Des&cription", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Utils::SubmitEditorWidget", "F&iles", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Utils

namespace Utils {
namespace Ui {
    class SubmitEditorWidget: public Ui_SubmitEditorWidget {};
} // namespace Ui
} // namespace Utils

#endif // UI_SUBMITEDITORWIDGET_H
