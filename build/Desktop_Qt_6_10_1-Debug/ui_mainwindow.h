/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFileOpen;
    QAction *actionFileClose;
    QAction *actionFileExit;
    QAction *actionViewParameter;
    QAction *actionViewEvent;
    QAction *actionViewTrajectory;
    QAction *actionPrintParameterView;
    QAction *actionPrintEventView;
    QAction *actionPrintTrajectoryView;
    QWidget *centralwidget;
    QHBoxLayout *mainHorizontalLayout;
    QVBoxLayout *leftTableLayout;
    QLabel *label_left_header;
    QTableWidget *tableWidget_left;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *rightVerticalLayout;
    QHBoxLayout *rightTopLayout;
    QColumnView *columnView_2;
    QColumnView *columnView;
    QColumnView *columnView_3;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QMenu *menuView;
    QMenu *menuPrint;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1635, 943);
        actionFileOpen = new QAction(MainWindow);
        actionFileOpen->setObjectName("actionFileOpen");
        actionFileClose = new QAction(MainWindow);
        actionFileClose->setObjectName("actionFileClose");
        actionFileExit = new QAction(MainWindow);
        actionFileExit->setObjectName("actionFileExit");
        actionViewParameter = new QAction(MainWindow);
        actionViewParameter->setObjectName("actionViewParameter");
        actionViewEvent = new QAction(MainWindow);
        actionViewEvent->setObjectName("actionViewEvent");
        actionViewTrajectory = new QAction(MainWindow);
        actionViewTrajectory->setObjectName("actionViewTrajectory");
        actionPrintParameterView = new QAction(MainWindow);
        actionPrintParameterView->setObjectName("actionPrintParameterView");
        actionPrintEventView = new QAction(MainWindow);
        actionPrintEventView->setObjectName("actionPrintEventView");
        actionPrintTrajectoryView = new QAction(MainWindow);
        actionPrintTrajectoryView->setObjectName("actionPrintTrajectoryView");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainHorizontalLayout = new QHBoxLayout(centralwidget);
        mainHorizontalLayout->setSpacing(10);
        mainHorizontalLayout->setObjectName("mainHorizontalLayout");
        mainHorizontalLayout->setContentsMargins(10, 10, 10, 10);
        leftTableLayout = new QVBoxLayout();
        leftTableLayout->setObjectName("leftTableLayout");
        label_left_header = new QLabel(centralwidget);
        label_left_header->setObjectName("label_left_header");
        label_left_header->setMinimumSize(QSize(0, 30));
        label_left_header->setMaximumSize(QSize(400, 30));
        label_left_header->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83); color: white; font-weight: bold; padding-left: 5px;"));
        label_left_header->setTextFormat(Qt::TextFormat::AutoText);
        label_left_header->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_left_header->setMargin(-3);
        label_left_header->setIndent(0);

        leftTableLayout->addWidget(label_left_header);

        tableWidget_left = new QTableWidget(centralwidget);
        if (tableWidget_left->columnCount() < 2)
            tableWidget_left->setColumnCount(2);
        if (tableWidget_left->rowCount() < 7)
            tableWidget_left->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(1, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(2, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(3, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(4, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(5, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_left->setItem(6, 0, __qtablewidgetitem6);
        tableWidget_left->setObjectName("tableWidget_left");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_left->sizePolicy().hasHeightForWidth());
        tableWidget_left->setSizePolicy(sizePolicy);
        tableWidget_left->setMinimumSize(QSize(280, 9));
        tableWidget_left->setMaximumSize(QSize(400, 16777215));
        tableWidget_left->setStyleSheet(QString::fromUtf8("QTableWidget { \n"
"  gridline-color: rgb(186, 189, 182);\n"
"}\n"
"QTableWidget::item {\n"
"  padding: 5px;\n"
"}"));
        tableWidget_left->setFrameShape(QFrame::Shape::NoFrame);
        tableWidget_left->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget_left->setLineWidth(0);
        tableWidget_left->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        tableWidget_left->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        tableWidget_left->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        tableWidget_left->setAutoScrollMargin(13);
        tableWidget_left->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        tableWidget_left->setAlternatingRowColors(true);
        tableWidget_left->setShowGrid(true);
        tableWidget_left->setGridStyle(Qt::PenStyle::SolidLine);
        tableWidget_left->setRowCount(7);
        tableWidget_left->setColumnCount(2);
        tableWidget_left->horizontalHeader()->setVisible(false);
        tableWidget_left->horizontalHeader()->setMinimumSectionSize(18);
        tableWidget_left->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_left->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_left->horizontalHeader()->setStretchLastSection(true);
        tableWidget_left->verticalHeader()->setVisible(false);
        tableWidget_left->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_left->verticalHeader()->setDefaultSectionSize(23);
        tableWidget_left->verticalHeader()->setHighlightSections(true);
        tableWidget_left->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_left->verticalHeader()->setStretchLastSection(false);

        leftTableLayout->addWidget(tableWidget_left);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        leftTableLayout->addItem(verticalSpacer);


        mainHorizontalLayout->addLayout(leftTableLayout);

        rightVerticalLayout = new QVBoxLayout();
        rightVerticalLayout->setObjectName("rightVerticalLayout");
        rightTopLayout = new QHBoxLayout();
        rightTopLayout->setSpacing(5);
        rightTopLayout->setObjectName("rightTopLayout");
        columnView_2 = new QColumnView(centralwidget);
        columnView_2->setObjectName("columnView_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(columnView_2->sizePolicy().hasHeightForWidth());
        columnView_2->setSizePolicy(sizePolicy1);
        columnView_2->setMinimumSize(QSize(80, 0));
        columnView_2->setMaximumSize(QSize(150, 16777215));

        rightTopLayout->addWidget(columnView_2);

        columnView = new QColumnView(centralwidget);
        columnView->setObjectName("columnView");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(columnView->sizePolicy().hasHeightForWidth());
        columnView->setSizePolicy(sizePolicy2);

        rightTopLayout->addWidget(columnView);


        rightVerticalLayout->addLayout(rightTopLayout);

        columnView_3 = new QColumnView(centralwidget);
        columnView_3->setObjectName("columnView_3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(columnView_3->sizePolicy().hasHeightForWidth());
        columnView_3->setSizePolicy(sizePolicy3);
        columnView_3->setFrameShape(QFrame::Shape::StyledPanel);
        columnView_3->setFrameShadow(QFrame::Shadow::Raised);
        columnView_3->setLineWidth(0);

        rightVerticalLayout->addWidget(columnView_3);


        mainHorizontalLayout->addLayout(rightVerticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1635, 23));
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName("menuFIle");
        menuFIle->setAutoFillBackground(true);
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuPrint = new QMenu(menubar);
        menuPrint->setObjectName("menuPrint");
        menuExit = new QMenu(menubar);
        menuExit->setObjectName("menuExit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFIle->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuPrint->menuAction());
        menubar->addAction(menuExit->menuAction());
        menuFIle->addAction(actionFileOpen);
        menuFIle->addAction(actionFileClose);
        menuFIle->addSeparator();
        menuFIle->addAction(actionFileExit);
        menuView->addAction(actionViewParameter);
        menuView->addAction(actionViewEvent);
        menuView->addAction(actionViewTrajectory);
        menuPrint->addAction(actionPrintParameterView);
        menuPrint->addAction(actionPrintEventView);
        menuPrint->addAction(actionPrintTrajectoryView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFileOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionFileOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionFileClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionFileExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewParameter->setText(QCoreApplication::translate("MainWindow", "Parameter", nullptr));
        actionViewEvent->setText(QCoreApplication::translate("MainWindow", "Event", nullptr));
        actionViewTrajectory->setText(QCoreApplication::translate("MainWindow", "Trajectory", nullptr));
        actionPrintParameterView->setText(QCoreApplication::translate("MainWindow", "Parameter View", nullptr));
        actionPrintEventView->setText(QCoreApplication::translate("MainWindow", "Event View", nullptr));
        actionPrintTrajectoryView->setText(QCoreApplication::translate("MainWindow", "Trajectory View", nullptr));
        label_left_header->setText(QCoreApplication::translate("MainWindow", "Geographical information", nullptr));

        const bool __sortingEnabled = tableWidget_left->isSortingEnabled();
        tableWidget_left->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableWidget_left->item(0, 0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Current Selected Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_left->item(1, 0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Ownship / Torpedo Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_left->item(2, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Ownship / Torpedo Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_left->item(3, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Ownship / Target Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_left->item(4, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Ownship / Target Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_left->item(5, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Torpedo / Target Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_left->item(6, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Torpedo / Target Range", nullptr));
        tableWidget_left->setSortingEnabled(__sortingEnabled);

        menuFIle->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuPrint->setTitle(QCoreApplication::translate("MainWindow", "Print", nullptr));
        menuExit->setTitle(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
