/********************************************************************************
** Form generated from reading UI file 'newclasswidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLASSWIDGET_H
#define UI_NEWCLASSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include <utils/classnamevalidatinglineedit.h>
#include <utils/filenamevalidatinglineedit.h>
#include <utils/pathchooser.h>

namespace Utils {

class Ui_NewClassWidget
{
public:
    QFormLayout *formLayout;
    QLabel *classNameLabel;
    Utils::ClassNameValidatingLineEdit *classLineEdit;
    QLabel *baseClassLabel;
    QComboBox *baseClassComboBox;
    QLabel *classTypeLabel;
    QComboBox *classTypeComboBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *headerLabel;
    Utils::FileNameValidatingLineEdit *headerFileLineEdit;
    QLabel *sourceLabel;
    Utils::FileNameValidatingLineEdit *sourceFileLineEdit;
    QLabel *generateFormLabel;
    QCheckBox *generateFormCheckBox;
    QLabel *formLabel;
    Utils::FileNameValidatingLineEdit *formFileLineEdit;
    QLabel *pathLabel;
    Utils::PathChooser *pathChooser;

    void setupUi(QWidget *Utils__NewClassWidget)
    {
        if (Utils__NewClassWidget->objectName().isEmpty())
            Utils__NewClassWidget->setObjectName(QString::fromUtf8("Utils__NewClassWidget"));
        Utils__NewClassWidget->resize(418, 291);
        formLayout = new QFormLayout(Utils__NewClassWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        classNameLabel = new QLabel(Utils__NewClassWidget);
        classNameLabel->setObjectName(QString::fromUtf8("classNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, classNameLabel);

        classLineEdit = new Utils::ClassNameValidatingLineEdit(Utils__NewClassWidget);
        classLineEdit->setObjectName(QString::fromUtf8("classLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, classLineEdit);

        baseClassLabel = new QLabel(Utils__NewClassWidget);
        baseClassLabel->setObjectName(QString::fromUtf8("baseClassLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, baseClassLabel);

        baseClassComboBox = new QComboBox(Utils__NewClassWidget);
        baseClassComboBox->setObjectName(QString::fromUtf8("baseClassComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(baseClassComboBox->sizePolicy().hasHeightForWidth());
        baseClassComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, baseClassComboBox);

        classTypeLabel = new QLabel(Utils__NewClassWidget);
        classTypeLabel->setObjectName(QString::fromUtf8("classTypeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, classTypeLabel);

        classTypeComboBox = new QComboBox(Utils__NewClassWidget);
        classTypeComboBox->setObjectName(QString::fromUtf8("classTypeComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, classTypeComboBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        headerLabel = new QLabel(Utils__NewClassWidget);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, headerLabel);

        headerFileLineEdit = new Utils::FileNameValidatingLineEdit(Utils__NewClassWidget);
        headerFileLineEdit->setObjectName(QString::fromUtf8("headerFileLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, headerFileLineEdit);

        sourceLabel = new QLabel(Utils__NewClassWidget);
        sourceLabel->setObjectName(QString::fromUtf8("sourceLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, sourceLabel);

        sourceFileLineEdit = new Utils::FileNameValidatingLineEdit(Utils__NewClassWidget);
        sourceFileLineEdit->setObjectName(QString::fromUtf8("sourceFileLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, sourceFileLineEdit);

        generateFormLabel = new QLabel(Utils__NewClassWidget);
        generateFormLabel->setObjectName(QString::fromUtf8("generateFormLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, generateFormLabel);

        generateFormCheckBox = new QCheckBox(Utils__NewClassWidget);
        generateFormCheckBox->setObjectName(QString::fromUtf8("generateFormCheckBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, generateFormCheckBox);

        formLabel = new QLabel(Utils__NewClassWidget);
        formLabel->setObjectName(QString::fromUtf8("formLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, formLabel);

        formFileLineEdit = new Utils::FileNameValidatingLineEdit(Utils__NewClassWidget);
        formFileLineEdit->setObjectName(QString::fromUtf8("formFileLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, formFileLineEdit);

        pathLabel = new QLabel(Utils__NewClassWidget);
        pathLabel->setObjectName(QString::fromUtf8("pathLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, pathLabel);

        pathChooser = new Utils::PathChooser(Utils__NewClassWidget);
        pathChooser->setObjectName(QString::fromUtf8("pathChooser"));

        formLayout->setWidget(8, QFormLayout::FieldRole, pathChooser);


        retranslateUi(Utils__NewClassWidget);

        QMetaObject::connectSlotsByName(Utils__NewClassWidget);
    } // setupUi

    void retranslateUi(QWidget *Utils__NewClassWidget)
    {
        classNameLabel->setText(QApplication::translate("Utils::NewClassWidget", "Class name:", 0, QApplication::UnicodeUTF8));
        baseClassLabel->setText(QApplication::translate("Utils::NewClassWidget", "Base class:", 0, QApplication::UnicodeUTF8));
        classTypeLabel->setText(QApplication::translate("Utils::NewClassWidget", "Type information:", 0, QApplication::UnicodeUTF8));
        classTypeComboBox->clear();
        classTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("Utils::NewClassWidget", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Utils::NewClassWidget", "Inherits QObject", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Utils::NewClassWidget", "Inherits QWidget", 0, QApplication::UnicodeUTF8)
        );
        headerLabel->setText(QApplication::translate("Utils::NewClassWidget", "Header file:", 0, QApplication::UnicodeUTF8));
        sourceLabel->setText(QApplication::translate("Utils::NewClassWidget", "Source file:", 0, QApplication::UnicodeUTF8));
        generateFormLabel->setText(QApplication::translate("Utils::NewClassWidget", "Generate form:", 0, QApplication::UnicodeUTF8));
        generateFormCheckBox->setText(QString());
        formLabel->setText(QApplication::translate("Utils::NewClassWidget", "Form file:", 0, QApplication::UnicodeUTF8));
        pathLabel->setText(QApplication::translate("Utils::NewClassWidget", "Path:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Utils__NewClassWidget);
    } // retranslateUi

};

} // namespace Utils

namespace Utils {
namespace Ui {
    class NewClassWidget: public Ui_NewClassWidget {};
} // namespace Ui
} // namespace Utils

#endif // UI_NEWCLASSWIDGET_H
