/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionimport;
    QAction *actionexport;
    QWidget *centralwidget;
    QTableWidget *encounterEntities;
    QListWidget *entityOrder;
    QPushButton *startButton;
    QPushButton *removeEntityB;
    QPushButton *addEntityB;
    QPushButton *nextTurnB;
    QLabel *queueLabel;
    QLabel *currentTurnLabel;
    QRadioButton *atkRadioButton;
    QRadioButton *disengageRadioButton;
    QPushButton *activateActionB;
    QLabel *actionsLabels;
    QPushButton *saveButton;
    QPushButton *removeFromQueueButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(923, 478);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(923, 478));
        MainWindow->setMaximumSize(QSize(923, 478));
        actionimport = new QAction(MainWindow);
        actionimport->setObjectName("actionimport");
        actionexport = new QAction(MainWindow);
        actionexport->setObjectName("actionexport");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        encounterEntities = new QTableWidget(centralwidget);
        if (encounterEntities->columnCount() < 7)
            encounterEntities->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        encounterEntities->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        encounterEntities->setObjectName("encounterEntities");
        encounterEntities->setGeometry(QRect(310, 10, 601, 371));
        encounterEntities->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        encounterEntities->verticalHeader()->setVisible(false);
        encounterEntities->verticalHeader()->setHighlightSections(false);
        entityOrder = new QListWidget(centralwidget);
        entityOrder->setObjectName("entityOrder");
        entityOrder->setGeometry(QRect(10, 30, 256, 192));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(10, 400, 91, 24));
        removeEntityB = new QPushButton(centralwidget);
        removeEntityB->setObjectName("removeEntityB");
        removeEntityB->setGeometry(QRect(830, 400, 80, 24));
        addEntityB = new QPushButton(centralwidget);
        addEntityB->setObjectName("addEntityB");
        addEntityB->setGeometry(QRect(740, 400, 80, 24));
        nextTurnB = new QPushButton(centralwidget);
        nextTurnB->setObjectName("nextTurnB");
        nextTurnB->setGeometry(QRect(110, 400, 91, 24));
        queueLabel = new QLabel(centralwidget);
        queueLabel->setObjectName("queueLabel");
        queueLabel->setGeometry(QRect(10, 10, 49, 16));
        currentTurnLabel = new QLabel(centralwidget);
        currentTurnLabel->setObjectName("currentTurnLabel");
        currentTurnLabel->setGeometry(QRect(10, 230, 251, 16));
        atkRadioButton = new QRadioButton(centralwidget);
        atkRadioButton->setObjectName("atkRadioButton");
        atkRadioButton->setGeometry(QRect(10, 290, 91, 22));
        disengageRadioButton = new QRadioButton(centralwidget);
        disengageRadioButton->setObjectName("disengageRadioButton");
        disengageRadioButton->setGeometry(QRect(10, 320, 101, 22));
        activateActionB = new QPushButton(centralwidget);
        activateActionB->setObjectName("activateActionB");
        activateActionB->setGeometry(QRect(10, 370, 91, 24));
        actionsLabels = new QLabel(centralwidget);
        actionsLabels->setObjectName("actionsLabels");
        actionsLabels->setGeometry(QRect(10, 270, 49, 16));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(650, 400, 80, 24));
        removeFromQueueButton = new QPushButton(centralwidget);
        removeFromQueueButton->setObjectName("removeFromQueueButton");
        removeFromQueueButton->setGeometry(QRect(180, 230, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 923, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionimport);
        menuFile->addAction(actionexport);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DnD Encounter Tracker", nullptr));
        actionimport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        actionexport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        QTableWidgetItem *___qtablewidgetitem = encounterEntities->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Entity ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = encounterEntities->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = encounterEntities->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Max Hp", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = encounterEntities->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Current HP", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = encounterEntities->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Intiative", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = encounterEntities->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Engaged With", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = encounterEntities->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start Encounter", nullptr));
        removeEntityB->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        addEntityB->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        nextTurnB->setText(QCoreApplication::translate("MainWindow", "Next Turn", nullptr));
        queueLabel->setText(QCoreApplication::translate("MainWindow", "Queue:", nullptr));
        currentTurnLabel->setText(QCoreApplication::translate("MainWindow", "It is _ Turn!", nullptr));
        atkRadioButton->setText(QCoreApplication::translate("MainWindow", "Attack", nullptr));
        disengageRadioButton->setText(QCoreApplication::translate("MainWindow", "Disengage", nullptr));
        activateActionB->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        actionsLabels->setText(QCoreApplication::translate("MainWindow", "Actions:", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        removeFromQueueButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
