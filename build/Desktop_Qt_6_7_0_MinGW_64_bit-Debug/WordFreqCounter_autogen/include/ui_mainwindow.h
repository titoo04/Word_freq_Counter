/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QLabel *freqLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *openFile;
    QPushButton *writeFile;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *calculate;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(971, 541);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setFrame(false);
        lineEdit->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(lineEdit);

        findButton = new QPushButton(centralwidget);
        findButton->setObjectName("findButton");

        horizontalLayout_2->addWidget(findButton);

        freqLabel = new QLabel(centralwidget);
        freqLabel->setObjectName("freqLabel");

        horizontalLayout_2->addWidget(freqLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(38, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        openFile = new QPushButton(centralwidget);
        openFile->setObjectName("openFile");

        horizontalLayout_3->addWidget(openFile);

        writeFile = new QPushButton(centralwidget);
        writeFile->setObjectName("writeFile");

        horizontalLayout_3->addWidget(writeFile);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");

        horizontalLayout->addWidget(clear);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        calculate = new QPushButton(centralwidget);
        calculate->setObjectName("calculate");

        horizontalLayout->addWidget(calculate);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 971, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(clear, &QPushButton::clicked, textEdit, qOverload<>(&QTextEdit::clear));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Word Frequency Counter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<h2>Word Counter</h2>", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Find a word", nullptr));
        findButton->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        freqLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Paste your text here:", nullptr));
        openFile->setText(QCoreApplication::translate("MainWindow", "Open a file", nullptr));
        writeFile->setText(QCoreApplication::translate("MainWindow", "Save content to file", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear all", nullptr));
        calculate->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
