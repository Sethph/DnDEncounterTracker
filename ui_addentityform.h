/********************************************************************************
** Form generated from reading UI file 'addentityform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDENTITYFORM_H
#define UI_ADDENTITYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addEntityForm
{
public:
    QLineEdit *nameLineEdit;
    QLineEdit *levelLineEdit;
    QLineEdit *maxHPLineEdit;
    QLineEdit *currentHPLineEdit;
    QLineEdit *initiativeLineEdit;
    QPushButton *addButton;
    QPushButton *cancelButton;
    QLabel *nameLabel;
    QLabel *levelLabel;
    QLabel *maxHPLabel;
    QLabel *currentHPLabel;
    QLabel *initiativeLabel;

    void setupUi(QWidget *addEntityForm)
    {
        if (addEntityForm->objectName().isEmpty())
            addEntityForm->setObjectName("addEntityForm");
        addEntityForm->resize(226, 232);
        addEntityForm->setFocusPolicy(Qt::NoFocus);
        nameLineEdit = new QLineEdit(addEntityForm);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(80, 20, 113, 24));
        levelLineEdit = new QLineEdit(addEntityForm);
        levelLineEdit->setObjectName("levelLineEdit");
        levelLineEdit->setGeometry(QRect(80, 50, 113, 24));
        maxHPLineEdit = new QLineEdit(addEntityForm);
        maxHPLineEdit->setObjectName("maxHPLineEdit");
        maxHPLineEdit->setGeometry(QRect(80, 80, 113, 24));
        currentHPLineEdit = new QLineEdit(addEntityForm);
        currentHPLineEdit->setObjectName("currentHPLineEdit");
        currentHPLineEdit->setGeometry(QRect(80, 110, 113, 24));
        initiativeLineEdit = new QLineEdit(addEntityForm);
        initiativeLineEdit->setObjectName("initiativeLineEdit");
        initiativeLineEdit->setGeometry(QRect(80, 140, 113, 24));
        addButton = new QPushButton(addEntityForm);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(20, 180, 80, 24));
        cancelButton = new QPushButton(addEntityForm);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(120, 180, 80, 24));
        nameLabel = new QLabel(addEntityForm);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(10, 20, 49, 21));
        levelLabel = new QLabel(addEntityForm);
        levelLabel->setObjectName("levelLabel");
        levelLabel->setGeometry(QRect(10, 50, 49, 21));
        maxHPLabel = new QLabel(addEntityForm);
        maxHPLabel->setObjectName("maxHPLabel");
        maxHPLabel->setGeometry(QRect(10, 80, 61, 21));
        currentHPLabel = new QLabel(addEntityForm);
        currentHPLabel->setObjectName("currentHPLabel");
        currentHPLabel->setGeometry(QRect(10, 110, 61, 21));
        initiativeLabel = new QLabel(addEntityForm);
        initiativeLabel->setObjectName("initiativeLabel");
        initiativeLabel->setGeometry(QRect(10, 140, 49, 21));

        retranslateUi(addEntityForm);

        QMetaObject::connectSlotsByName(addEntityForm);
    } // setupUi

    void retranslateUi(QWidget *addEntityForm)
    {
        addEntityForm->setWindowTitle(QCoreApplication::translate("addEntityForm", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("addEntityForm", "Add", nullptr));
        cancelButton->setText(QCoreApplication::translate("addEntityForm", "Cancel", nullptr));
        nameLabel->setText(QCoreApplication::translate("addEntityForm", "Name:", nullptr));
        levelLabel->setText(QCoreApplication::translate("addEntityForm", "Level:", nullptr));
        maxHPLabel->setText(QCoreApplication::translate("addEntityForm", "Max HP:", nullptr));
        currentHPLabel->setText(QCoreApplication::translate("addEntityForm", "Current HP:", nullptr));
        initiativeLabel->setText(QCoreApplication::translate("addEntityForm", "Initiative:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEntityForm: public Ui_addEntityForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDENTITYFORM_H
