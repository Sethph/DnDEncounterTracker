/********************************************************************************
** Form generated from reading UI file 'dialogattackform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGATTACKFORM_H
#define UI_DIALOGATTACKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAttackForm
{
public:
    QPushButton *pushButton;
    QLabel *damageDeattLabel;
    QLineEdit *damageLineEdit;

    void setupUi(QDialog *DialogAttackForm)
    {
        if (DialogAttackForm->objectName().isEmpty())
            DialogAttackForm->setObjectName("DialogAttackForm");
        DialogAttackForm->resize(248, 113);
        pushButton = new QPushButton(DialogAttackForm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 70, 83, 29));
        damageDeattLabel = new QLabel(DialogAttackForm);
        damageDeattLabel->setObjectName("damageDeattLabel");
        damageDeattLabel->setGeometry(QRect(10, 30, 101, 20));
        damageLineEdit = new QLineEdit(DialogAttackForm);
        damageLineEdit->setObjectName("damageLineEdit");
        damageLineEdit->setGeometry(QRect(120, 30, 113, 28));

        retranslateUi(DialogAttackForm);

        QMetaObject::connectSlotsByName(DialogAttackForm);
    } // setupUi

    void retranslateUi(QDialog *DialogAttackForm)
    {
        DialogAttackForm->setWindowTitle(QCoreApplication::translate("DialogAttackForm", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogAttackForm", "PushButton", nullptr));
        damageDeattLabel->setText(QCoreApplication::translate("DialogAttackForm", "Damage Dealt:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAttackForm: public Ui_DialogAttackForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGATTACKFORM_H
