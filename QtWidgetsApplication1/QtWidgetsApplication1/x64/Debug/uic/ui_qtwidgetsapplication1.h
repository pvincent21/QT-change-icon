/********************************************************************************
** Form generated from reading UI file 'qtwidgetsapplication1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *pushBtn;
    QPushButton *pushBtn_2;
    QPushButton *pushBtn_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(388, 310);
        widget = new QWidget(QtWidgetsApplication1Class);
        widget->setObjectName(QString::fromUtf8("widget"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 80, 75, 16));
        pushBtn = new QPushButton(widget);
        pushBtn->setObjectName(QString::fromUtf8("pushBtn"));
        pushBtn->setGeometry(QRect(30, 120, 81, 81));
        pushBtn->setTabletTracking(false);
        pushBtn->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushBtn->setStyleSheet(QString::fromUtf8("#pushBtn{\n"
"background-color: transparent;\n"
"border-image: url(:/QtWidgetsApplication1/E:/png/OFFF.png);\n"
"background:none;\n"
"background-repeat:none;\n"
"}\n"
"#pushBtn:pressed\n"
"{\n"
"border-image: url(:/QtWidgetsApplication1/E:/png/ONN.png);\n"
"}\n"
""));
        pushBtn->setIconSize(QSize(80, 80));
        pushBtn->setCheckable(false);
        pushBtn->setAutoRepeatDelay(300);
        pushBtn->setFlat(false);
        pushBtn_2 = new QPushButton(widget);
        pushBtn_2->setObjectName(QString::fromUtf8("pushBtn_2"));
        pushBtn_2->setGeometry(QRect(140, 120, 81, 81));
        pushBtn_2->setTabletTracking(false);
        pushBtn_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushBtn_2->setStyleSheet(QString::fromUtf8("#pushBtn_2{\n"
"background-color: transparent;\n"
"border-image: url(:/QtWidgetsApplication1/E:/png/OFFF.png);\n"
"background:none;\n"
"background-repeat:none;\n"
"}\n"
"#pushBtn_2:pressed\n"
"{\n"
"border-image: url(:/QtWidgetsApplication1/E:/png/ONN.png);\n"
"}\n"
""));
        pushBtn_2->setIconSize(QSize(80, 80));
        pushBtn_2->setCheckable(false);
        pushBtn_2->setAutoRepeatDelay(300);
        pushBtn_2->setFlat(false);
        pushBtn_3 = new QPushButton(widget);
        pushBtn_3->setObjectName(QString::fromUtf8("pushBtn_3"));
        pushBtn_3->setGeometry(QRect(260, 120, 81, 81));
        pushBtn_3->setTabletTracking(false);
        pushBtn_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushBtn_3->setStyleSheet(QString::fromUtf8("#pushBtn_3{\n"
"background-color: transparent;\n"
"border-image: url(:/QtWidgetsApplication1/E:/png/OFFF.png);\n"
"background:none;\n"
"background-repeat:none;\n"
"}\n"
"#pushBtn_3:pressed\n"
"{\n"
"border-image: url(:/QtWidgetsApplication1/E:/png/ONN.png);\n"
"}\n"
""));
        pushBtn_3->setIconSize(QSize(80, 80));
        pushBtn_3->setCheckable(false);
        pushBtn_3->setAutoRepeatDelay(300);
        pushBtn_3->setFlat(false);
        QtWidgetsApplication1Class->setCentralWidget(widget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 388, 22));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        label->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Hello, World !!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
