/********************************************************************************
** Form generated from reading UI file 'frequency.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCY_H
#define UI_FREQUENCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Frequency
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *freqWrite;

    void setupUi(QDialog *Frequency)
    {
        if (Frequency->objectName().isEmpty())
            Frequency->setObjectName("Frequency");
        Frequency->resize(473, 608);
        verticalLayout = new QVBoxLayout(Frequency);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(Frequency);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        freqWrite = new QPushButton(Frequency);
        freqWrite->setObjectName("freqWrite");
        freqWrite->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(freqWrite);


        retranslateUi(Frequency);

        QMetaObject::connectSlotsByName(Frequency);
    } // setupUi

    void retranslateUi(QDialog *Frequency)
    {
        Frequency->setWindowTitle(QCoreApplication::translate("Frequency", "Dialog", nullptr));
        freqWrite->setText(QCoreApplication::translate("Frequency", "Write to file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frequency: public Ui_Frequency {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCY_H
