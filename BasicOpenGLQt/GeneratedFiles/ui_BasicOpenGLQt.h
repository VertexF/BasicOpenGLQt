/********************************************************************************
** Form generated from reading UI file 'BasicOpenGLQt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICOPENGLQT_H
#define UI_BASICOPENGLQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicOpenGLQt
{
public:
    QWidget *centralWidget;
    QOpenGLWidget *openGLWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BasicOpenGLQt)
    {
        if (BasicOpenGLQt->objectName().isEmpty())
            BasicOpenGLQt->setObjectName(QString::fromUtf8("BasicOpenGLQt"));
        BasicOpenGLQt->resize(600, 400);
        centralWidget = new QWidget(BasicOpenGLQt);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(130, 40, 300, 200));
        BasicOpenGLQt->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BasicOpenGLQt);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        BasicOpenGLQt->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BasicOpenGLQt);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BasicOpenGLQt->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BasicOpenGLQt);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BasicOpenGLQt->setStatusBar(statusBar);

        retranslateUi(BasicOpenGLQt);

        QMetaObject::connectSlotsByName(BasicOpenGLQt);
    } // setupUi

    void retranslateUi(QMainWindow *BasicOpenGLQt)
    {
        BasicOpenGLQt->setWindowTitle(QApplication::translate("BasicOpenGLQt", "BasicOpenGLQt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicOpenGLQt: public Ui_BasicOpenGLQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICOPENGLQT_H
