/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *marksWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *marksLayout;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_4;
    QPushButton *clearButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *midMarkLabel;
    QLabel *label_2;
    QLabel *markCountLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 420);
        MainWindow->setMaximumSize(QSize(630, 420));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        marksWidget = new QWidget(centralWidget);
        marksWidget->setObjectName(QStringLiteral("marksWidget"));
        marksWidget->setGeometry(QRect(0, 0, 600, 200));
        gridLayoutWidget = new QWidget(marksWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 611, 201));
        marksLayout = new QGridLayout(gridLayoutWidget);
        marksLayout->setSpacing(20);
        marksLayout->setContentsMargins(11, 11, 11, 11);
        marksLayout->setObjectName(QStringLiteral("marksLayout"));
        marksLayout->setSizeConstraint(QLayout::SetFixedSize);
        marksLayout->setContentsMargins(5, 5, 5, 5);
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(140, 220, 482, 191));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(gridLayoutWidget_2);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(50, 50));
        pushButton_1->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(20);
        pushButton_1->setFont(font);

        gridLayout->addWidget(pushButton_1, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(50, 50));
        pushButton_6->setMaximumSize(QSize(50, 50));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(50, 50));
        pushButton_8->setMaximumSize(QSize(50, 50));
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(50, 50));
        pushButton_10->setMaximumSize(QSize(50, 50));
        pushButton_10->setFont(font);

        gridLayout->addWidget(pushButton_10, 1, 5, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(50, 50));
        pushButton_7->setMaximumSize(QSize(50, 50));
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(50, 50));
        pushButton_9->setMaximumSize(QSize(50, 50));
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 1, 4, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(50, 50));
        pushButton_3->setMaximumSize(QSize(50, 50));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(50, 50));
        pushButton_5->setMaximumSize(QSize(50, 50));
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(50, 50));
        pushButton_2->setMaximumSize(QSize(50, 50));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget_2);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setMinimumSize(QSize(50, 50));
        pushButton_0->setMaximumSize(QSize(50, 50));
        pushButton_0->setFont(font);

        gridLayout->addWidget(pushButton_0, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(50, 50));
        pushButton_4->setMaximumSize(QSize(50, 50));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 0, 4, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMinimumSize(QSize(200, 40));
        QFont font1;
        font1.setPointSize(16);
        clearButton->setFont(font1);

        gridLayout->addWidget(clearButton, 2, 1, 1, 5);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 220, 121, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        midMarkLabel = new QLabel(verticalLayoutWidget);
        midMarkLabel->setObjectName(QStringLiteral("midMarkLabel"));
        midMarkLabel->setFont(font);

        verticalLayout->addWidget(midMarkLabel);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette;
        QBrush brush(QColor(81, 81, 81, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(96, 96, 96, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_2->setPalette(palette);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        markCountLabel = new QLabel(verticalLayoutWidget);
        markCountLabel->setObjectName(QStringLiteral("markCountLabel"));
        QPalette palette1;
        QBrush brush2(QColor(98, 103, 112, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        markCountLabel->setPalette(palette1);
        markCountLabel->setFont(font);

        verticalLayout->addWidget(markCountLabel);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273", 0));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "10", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", 0));
        clearButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\321\203\320\273\320\270\321\202\321\214", 0));
        label->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273:", 0));
        midMarkLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\276\321\206\320\265\320\275\320\276\320\272:", 0));
        markCountLabel->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
