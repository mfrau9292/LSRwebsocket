/********************************************************************************
** Form generated from reading UI file 'viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Viewer
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Viewer)
    {
        if (Viewer->objectName().isEmpty())
            Viewer->setObjectName(QStringLiteral("Viewer"));
        Viewer->resize(800, 600);
        Viewer->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        centralwidget = new QWidget(Viewer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Viewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Viewer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Viewer->setMenuBar(menubar);
        statusbar = new QStatusBar(Viewer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Viewer->setStatusBar(statusbar);

        retranslateUi(Viewer);

        QMetaObject::connectSlotsByName(Viewer);
    } // setupUi

    void retranslateUi(QMainWindow *Viewer)
    {
        Viewer->setWindowTitle(QApplication::translate("Viewer", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Viewer: public Ui_Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
