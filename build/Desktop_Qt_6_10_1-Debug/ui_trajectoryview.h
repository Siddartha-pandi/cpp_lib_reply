/********************************************************************************
** Form generated from reading UI file 'trajectoryview.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAJECTORYVIEW_H
#define UI_TRAJECTORYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrajectoryView
{
public:
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QLabel *acousticLabel;
    QGraphicsView *acousticGraphWidget;
    QLabel *demonLabel;
    QGraphicsView *demonGraphWidget;
    QLabel *geoHeaderLabel;
    QTableWidget *geoTable;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *rightLayout;
    QHBoxLayout *topRightLayout;
    QVBoxLayout *tubeSelectLayout;
    QPushButton *replayButton;
    QColumnView *TubeSelect;
    QGraphicsView *TrajectoryPlot;
    QColumnView *TablePlot;

    void setupUi(QWidget *TrajectoryView)
    {
        if (TrajectoryView->objectName().isEmpty())
            TrajectoryView->setObjectName("TrajectoryView");
        TrajectoryView->resize(1635, 943);
        mainLayout = new QHBoxLayout(TrajectoryView);
        mainLayout->setSpacing(10);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(10, 10, 10, 10);
        leftLayout = new QVBoxLayout();
        leftLayout->setSpacing(5);
        leftLayout->setObjectName("leftLayout");
        leftLayout->setContentsMargins(0, 0, 0, 0);
        acousticLabel = new QLabel(TrajectoryView);
        acousticLabel->setObjectName("acousticLabel");
        acousticLabel->setMinimumSize(QSize(0, 30));
        acousticLabel->setMaximumSize(QSize(400, 30));
        acousticLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83); color: white; font-weight: bold; padding-left: 5px;"));
        acousticLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        leftLayout->addWidget(acousticLabel);

        acousticGraphWidget = new QGraphicsView(TrajectoryView);
        acousticGraphWidget->setObjectName("acousticGraphWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(acousticGraphWidget->sizePolicy().hasHeightForWidth());
        acousticGraphWidget->setSizePolicy(sizePolicy);
        acousticGraphWidget->setMinimumSize(QSize(280, 0));
        acousticGraphWidget->setMaximumSize(QSize(400, 16777215));
        acousticGraphWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50); border: 1px solid rgb(255, 255, 255);"));
        acousticGraphWidget->setRenderHints(QPainter::RenderHint::Antialiasing);

        leftLayout->addWidget(acousticGraphWidget);

        demonLabel = new QLabel(TrajectoryView);
        demonLabel->setObjectName("demonLabel");
        demonLabel->setMinimumSize(QSize(0, 30));
        demonLabel->setMaximumSize(QSize(400, 30));
        demonLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83); color: white; font-weight: bold; padding-left: 5px;"));
        demonLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        leftLayout->addWidget(demonLabel);

        demonGraphWidget = new QGraphicsView(TrajectoryView);
        demonGraphWidget->setObjectName("demonGraphWidget");
        sizePolicy.setHeightForWidth(demonGraphWidget->sizePolicy().hasHeightForWidth());
        demonGraphWidget->setSizePolicy(sizePolicy);
        demonGraphWidget->setMinimumSize(QSize(280, 0));
        demonGraphWidget->setMaximumSize(QSize(400, 16777215));
        demonGraphWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50); border: 1px solid rgb(255, 255, 255);"));
        demonGraphWidget->setRenderHints(QPainter::RenderHint::Antialiasing);

        leftLayout->addWidget(demonGraphWidget);

        geoHeaderLabel = new QLabel(TrajectoryView);
        geoHeaderLabel->setObjectName("geoHeaderLabel");
        geoHeaderLabel->setMinimumSize(QSize(0, 30));
        geoHeaderLabel->setMaximumSize(QSize(400, 30));
        geoHeaderLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83); color: white; font-weight: bold; padding-left: 5px;"));
        geoHeaderLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        leftLayout->addWidget(geoHeaderLabel);

        geoTable = new QTableWidget(TrajectoryView);
        if (geoTable->columnCount() < 2)
            geoTable->setColumnCount(2);
        if (geoTable->rowCount() < 7)
            geoTable->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        geoTable->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        geoTable->setItem(1, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        geoTable->setItem(2, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        geoTable->setItem(3, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        geoTable->setItem(4, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        geoTable->setItem(5, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        geoTable->setItem(6, 0, __qtablewidgetitem6);
        geoTable->setObjectName("geoTable");
        sizePolicy.setHeightForWidth(geoTable->sizePolicy().hasHeightForWidth());
        geoTable->setSizePolicy(sizePolicy);
        geoTable->setMinimumSize(QSize(280, 9));
        geoTable->setMaximumSize(QSize(400, 16777215));
        geoTable->setStyleSheet(QString::fromUtf8("QTableWidget { \n"
"  gridline-color: rgba(255, 255, 255, 0);\n"
"  border: 2px solid rgb(255, 255, 255);\n"
"}\n"
"QTableWidget::item {\n"
"  padding: 5px;\n"
"  border: 1px solid rgb(255, 255, 255);\n"
"  background-color: rgb(50, 50, 50);\n"
"  color: rgb(255, 255, 255);\n"
"}"));
        geoTable->setFrameShape(QFrame::Shape::NoFrame);
        geoTable->setFrameShadow(QFrame::Shadow::Raised);
        geoTable->setLineWidth(0);
        geoTable->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        geoTable->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        geoTable->setShowGrid(true);
        geoTable->setGridStyle(Qt::PenStyle::SolidLine);
        geoTable->setRowCount(7);
        geoTable->setColumnCount(2);
        geoTable->horizontalHeader()->setVisible(false);
        geoTable->verticalHeader()->setVisible(false);

        leftLayout->addWidget(geoTable);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        leftLayout->addItem(verticalSpacer);


        mainLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setSpacing(5);
        rightLayout->setObjectName("rightLayout");
        topRightLayout = new QHBoxLayout();
        topRightLayout->setSpacing(5);
        topRightLayout->setObjectName("topRightLayout");
        tubeSelectLayout = new QVBoxLayout();
        tubeSelectLayout->setSpacing(5);
        tubeSelectLayout->setObjectName("tubeSelectLayout");
        replayButton = new QPushButton(TrajectoryView);
        replayButton->setObjectName("replayButton");
        replayButton->setMinimumSize(QSize(0, 30));
        replayButton->setMaximumSize(QSize(150, 30));
        replayButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(85, 87, 83);\n"
"  color: white;\n"
"  font-weight: bold;\n"
"  border: 1px solid rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: rgb(100, 100, 100);\n"
"}\n"
"QPushButton:pressed {\n"
"  background-color: rgb(70, 70, 70);\n"
"}"));

        tubeSelectLayout->addWidget(replayButton);

        TubeSelect = new QColumnView(TrajectoryView);
        TubeSelect->setObjectName("TubeSelect");
        TubeSelect->setMaximumSize(QSize(150, 16777215));

        tubeSelectLayout->addWidget(TubeSelect);


        topRightLayout->addLayout(tubeSelectLayout);

        TrajectoryPlot = new QGraphicsView(TrajectoryView);
        TrajectoryPlot->setObjectName("TrajectoryPlot");
        TrajectoryPlot->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50); border: 1px solid rgb(255, 255, 255);"));
        TrajectoryPlot->setFrameShape(QFrame::Shape::NoFrame);
        TrajectoryPlot->setRenderHints(QPainter::RenderHint::Antialiasing);

        topRightLayout->addWidget(TrajectoryPlot);


        rightLayout->addLayout(topRightLayout);

        TablePlot = new QColumnView(TrajectoryView);
        TablePlot->setObjectName("TablePlot");
        TablePlot->setFrameShadow(QFrame::Shadow::Sunken);

        rightLayout->addWidget(TablePlot);


        mainLayout->addLayout(rightLayout);


        retranslateUi(TrajectoryView);

        QMetaObject::connectSlotsByName(TrajectoryView);
    } // setupUi

    void retranslateUi(QWidget *TrajectoryView)
    {
        TrajectoryView->setWindowTitle(QCoreApplication::translate("TrajectoryView", "Trajectory View", nullptr));
        acousticLabel->setText(QCoreApplication::translate("TrajectoryView", "Acoustic Panoroma", nullptr));
        demonLabel->setText(QCoreApplication::translate("TrajectoryView", "Demon", nullptr));
        geoHeaderLabel->setText(QCoreApplication::translate("TrajectoryView", "Geographical information", nullptr));

        const bool __sortingEnabled = geoTable->isSortingEnabled();
        geoTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = geoTable->item(0, 0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TrajectoryView", "Current Selected Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = geoTable->item(1, 0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TrajectoryView", "Ownship / Torpedo Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = geoTable->item(2, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TrajectoryView", "Ownship / Torpedo Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = geoTable->item(3, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TrajectoryView", "Ownship / Target Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = geoTable->item(4, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TrajectoryView", "Ownship / Target Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = geoTable->item(5, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TrajectoryView", "Torpedo / Target Bearing", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = geoTable->item(6, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TrajectoryView", "Torpedo / Target Range", nullptr));
        geoTable->setSortingEnabled(__sortingEnabled);

        replayButton->setText(QCoreApplication::translate("TrajectoryView", "Replay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrajectoryView: public Ui_TrajectoryView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAJECTORYVIEW_H
