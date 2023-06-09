/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mygraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    MyGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QDockWidget *MouseTracker;
    QWidget *dockWidgetContents;
    QPushButton *pushButton;
    QTextEdit *MouseX;
    QTextEdit *MouseY;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(701, 525);
        Widget->setMinimumSize(QSize(701, 525));
        Widget->setMaximumSize(QSize(701, 525));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 1, 701, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setElideMode(Qt::ElideRight);
        tabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        tabWidget->addTab(tab_6, QString());

        horizontalLayout->addWidget(tabWidget);

        graphicsView = new MyGraphicsView(layoutWidget);
        graphicsView->setObjectName("graphicsView");
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(graphicsView);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        MouseTracker = new QDockWidget(layoutWidget);
        MouseTracker->setObjectName("MouseTracker");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 0, 61, 71));
        MouseX = new QTextEdit(dockWidgetContents);
        MouseX->setObjectName("MouseX");
        MouseX->setGeometry(QRect(50, 10, 71, 21));
        MouseX->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MouseY = new QTextEdit(dockWidgetContents);
        MouseY->setObjectName("MouseY");
        MouseY->setGeometry(QRect(50, 40, 71, 21));
        MouseY->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(dockWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 21, 21));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 21, 21));
        MouseTracker->setWidget(dockWidgetContents);

        horizontalLayout_2->addWidget(MouseTracker);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout_2->addWidget(textEdit);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\345\212\233\345\255\246\346\261\202\350\247\243\345\231\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\345\207\240\344\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\346\235\220\346\226\231", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\347\275\221\346\240\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "\347\272\246\346\235\237", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Widget", "\344\272\221\345\233\276", nullptr));
        MouseTracker->setWindowTitle(QCoreApplication::translate("Widget", "MouseTracker", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Set", nullptr));
        label->setText(QCoreApplication::translate("Widget", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
