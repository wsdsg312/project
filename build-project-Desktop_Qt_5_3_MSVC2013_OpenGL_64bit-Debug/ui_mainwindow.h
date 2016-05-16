/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCircle;
    QAction *actionMasker;
    QAction *actionImport_Boards;
    QAction *actionExport_Boards;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_2;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuPrepare;
    QMenu *menuProcess;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(766, 480);
        MainWindow->setMouseTracking(true);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        actionMasker = new QAction(MainWindow);
        actionMasker->setObjectName(QStringLiteral("actionMasker"));
        actionImport_Boards = new QAction(MainWindow);
        actionImport_Boards->setObjectName(QStringLiteral("actionImport_Boards"));
        actionExport_Boards = new QAction(MainWindow);
        actionExport_Boards->setObjectName(QStringLiteral("actionExport_Boards"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMouseTracking(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 31, 21));
        QIcon icon;
        icon.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 0, 31, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 0, 161, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 0, 31, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 0, 31, 23));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 0, 31, 23));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 0, 31, 23));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(470, 0, 31, 23));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/build-menu-Desktop_Qt_5_3_MSVC2013_OpenGL_64bit-Debug/debug/image/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon6);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(380, 0, 51, 20));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 20, 791, 461));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 766, 23));
        menuPrepare = new QMenu(menuBar);
        menuPrepare->setObjectName(QStringLiteral("menuPrepare"));
        menuProcess = new QMenu(menuBar);
        menuProcess->setObjectName(QStringLiteral("menuProcess"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPrepare->menuAction());
        menuBar->addAction(menuProcess->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuPrepare->addAction(actionCircle);
        menuProcess->addAction(actionMasker);
        menuTools->addAction(actionImport_Boards);
        menuTools->addAction(actionExport_Boards);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", 0));
        actionMasker->setText(QApplication::translate("MainWindow", "Masker", 0));
        actionImport_Boards->setText(QApplication::translate("MainWindow", "Import Boards", 0));
        actionExport_Boards->setText(QApplication::translate("MainWindow", "Export Boards", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        lineEdit->setInputMask(QString());
        lineEdit->setText(QApplication::translate("MainWindow", "F:\\QT\\Tools\\QtCreator\\bin", 0));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        lineEdit_2->setText(QApplication::translate("MainWindow", "0/0", 0));
        menuPrepare->setTitle(QApplication::translate("MainWindow", "Prepare", 0));
        menuProcess->setTitle(QApplication::translate("MainWindow", "Process", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
