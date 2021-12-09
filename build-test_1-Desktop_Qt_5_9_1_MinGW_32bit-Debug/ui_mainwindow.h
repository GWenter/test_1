/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *btn_red;
    QRadioButton *btn_bule;
    QRadioButton *btn_black;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *check_underline;
    QCheckBox *check_italic;
    QCheckBox *check_bold;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_red = new QRadioButton(centralWidget);
        btn_red->setObjectName(QStringLiteral("btn_red"));

        horizontalLayout->addWidget(btn_red);

        btn_bule = new QRadioButton(centralWidget);
        btn_bule->setObjectName(QStringLiteral("btn_bule"));

        horizontalLayout->addWidget(btn_bule);

        btn_black = new QRadioButton(centralWidget);
        btn_black->setObjectName(QStringLiteral("btn_black"));

        horizontalLayout->addWidget(btn_black);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        check_underline = new QCheckBox(centralWidget);
        check_underline->setObjectName(QStringLiteral("check_underline"));

        horizontalLayout_2->addWidget(check_underline);

        check_italic = new QCheckBox(centralWidget);
        check_italic->setObjectName(QStringLiteral("check_italic"));

        horizontalLayout_2->addWidget(check_italic);

        check_bold = new QCheckBox(centralWidget);
        check_bold->setObjectName(QStringLiteral("check_bold"));

        horizontalLayout_2->addWidget(check_bold);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btn_red->setText(QApplication::translate("MainWindow", "red", Q_NULLPTR));
        btn_bule->setText(QApplication::translate("MainWindow", "bule", Q_NULLPTR));
        btn_black->setText(QApplication::translate("MainWindow", "black", Q_NULLPTR));
        check_underline->setText(QApplication::translate("MainWindow", "underline", Q_NULLPTR));
        check_italic->setText(QApplication::translate("MainWindow", "italic", Q_NULLPTR));
        check_bold->setText(QApplication::translate("MainWindow", "bold", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
