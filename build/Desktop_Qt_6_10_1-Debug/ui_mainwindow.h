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
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QColumnView *TablePlot;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QColumnView *TubeSelect;
    QColumnView *TrajectoryPlot;
    QWidget *layoutWidget;
    QVBoxLayout *leftTableLayout;
    QLabel *GeoInfo;
    QTableWidget *GeoInfoTable;
    QSpacerItem *verticalSpacer;
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
        MainWindow->resize(1200, 1600);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
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
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(300, 460, 881, 471));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        TablePlot = new QColumnView(horizontalLayoutWidget_2);
        TablePlot->setObjectName("TablePlot");

        horizontalLayout_3->addWidget(TablePlot);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(300, 10, 881, 441));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TubeSelect = new QColumnView(horizontalLayoutWidget);
        TubeSelect->setObjectName("TubeSelect");
        TubeSelect->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(TubeSelect);

        TrajectoryPlot = new QColumnView(horizontalLayoutWidget);
        TrajectoryPlot->setObjectName("TrajectoryPlot");

        horizontalLayout->addWidget(TrajectoryPlot);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 282, 921));
        leftTableLayout = new QVBoxLayout(layoutWidget);
        leftTableLayout->setObjectName("leftTableLayout");
        leftTableLayout->setContentsMargins(0, 0, 0, 0);
        GeoInfo = new QLabel(layoutWidget);
        GeoInfo->setObjectName("GeoInfo");
        GeoInfo->setMinimumSize(QSize(0, 30));
        GeoInfo->setMaximumSize(QSize(400, 30));
        GeoInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83); color: white; font-weight: bold; padding-left: 5px;"));
        GeoInfo->setTextFormat(Qt::TextFormat::AutoText);
        GeoInfo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        GeoInfo->setMargin(-3);
        GeoInfo->setIndent(0);

        leftTableLayout->addWidget(GeoInfo);

        GeoInfoTable = new QTableWidget(layoutWidget);
        if (GeoInfoTable->columnCount() < 2)
            GeoInfoTable->setColumnCount(2);
        if (GeoInfoTable->rowCount() < 7)
            GeoInfoTable->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(1, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(2, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(3, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(4, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(5, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        GeoInfoTable->setItem(6, 0, __qtablewidgetitem6);
        GeoInfoTable->setObjectName("GeoInfoTable");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GeoInfoTable->sizePolicy().hasHeightForWidth());
        GeoInfoTable->setSizePolicy(sizePolicy);
        GeoInfoTable->setMinimumSize(QSize(280, 9));
        GeoInfoTable->setMaximumSize(QSize(400, 16777215));
        GeoInfoTable->setStyleSheet(QString::fromUtf8("QTableWidget { \n"
"  gridline-color: rgba(255, 255, 255, 0);\n"
"  border: 1px solid rgba(0, 17, 255, 0.47);\n"
"}\n"
"QTableWidget::item {\n"
"  padding: 5px;\n"
"  border: 1px solid rgb(3, 95, 180);\n"
"  color: rgb(255, 255, 255);\n"
"}"));
        GeoInfoTable->setFrameShape(QFrame::Shape::NoFrame);
        GeoInfoTable->setFrameShadow(QFrame::Shadow::Raised);
        GeoInfoTable->setLineWidth(0);
        GeoInfoTable->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        GeoInfoTable->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        GeoInfoTable->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        GeoInfoTable->setAutoScrollMargin(13);
        GeoInfoTable->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        GeoInfoTable->setAlternatingRowColors(true);
        GeoInfoTable->setShowGrid(true);
        GeoInfoTable->setGridStyle(Qt::PenStyle::SolidLine);
        GeoInfoTable->setRowCount(7);
        GeoInfoTable->setColumnCount(2);
        GeoInfoTable->horizontalHeader()->setVisible(false);
        GeoInfoTable->horizontalHeader()->setMinimumSectionSize(18);
        GeoInfoTable->horizontalHeader()->setDefaultSectionSize(100);
        GeoInfoTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        GeoInfoTable->horizontalHeader()->setStretchLastSection(true);
        GeoInfoTable->verticalHeader()->setVisible(false);
        GeoInfoTable->verticalHeader()->setCascadingSectionResizes(false);
        GeoInfoTable->verticalHeader()->setDefaultSectionSize(23);
        GeoInfoTable->verticalHeader()->setHighlightSections(true);
        GeoInfoTable->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        GeoInfoTable->verticalHeader()->setStretchLastSection(false);

        leftTableLayout->addWidget(GeoInfoTable, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        leftTableLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 23));
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
        GeoInfo->setText(QCoreApplication::translate("MainWindow", "Geographical information", nullptr));

        const bool __sortingEnabled = GeoInfoTable->isSortingEnabled();
        GeoInfoTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = GeoInfoTable->item(0, 0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Current Selected Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = GeoInfoTable->item(1, 0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Ownship / Torpedo Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = GeoInfoTable->item(2, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Ownship / Torpedo Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = GeoInfoTable->item(3, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Ownship / Target Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = GeoInfoTable->item(4, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Ownship / Target Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = GeoInfoTable->item(5, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Torpedo / Target Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = GeoInfoTable->item(6, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Torpedo / Target Range", nullptr));
        GeoInfoTable->setSortingEnabled(__sortingEnabled);

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
