/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(800, 600);
        verticalLayout_4 = new QVBoxLayout(MyWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableWidget = new QTableWidget(MyWidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_2->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(MyWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_1 = new QLineEdit(MyWidget);
        lineEdit_1->setObjectName("lineEdit_1");

        horizontalLayout->addWidget(lineEdit_1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(MyWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(MyWidget);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_9 = new QLabel(MyWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(MyWidget);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_9->addWidget(lineEdit_9);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_10 = new QLabel(MyWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(MyWidget);
        lineEdit_10->setObjectName("lineEdit_10");

        horizontalLayout_10->addWidget(lineEdit_10);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        pushButton_2 = new QPushButton(MyWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_11->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(MyWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_11->addWidget(pushButton_3);

        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_11->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_11);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "\345\255\270\350\231\237\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MyWidget", "\347\217\255\347\264\232\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("MyWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("MyWidget", "\351\233\273\350\251\261\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\346\226\260\345\242\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\205\245", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
