/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jan 15 17:19:40 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QComboBox *comboBox_11;
    QComboBox *comboBox_12;
    QComboBox *comboBox_13;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(420, 450);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 80, 61, 29));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(30, 130, 61, 29));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(30, 180, 61, 29));
        comboBox_4 = new QComboBox(centralWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(30, 230, 61, 29));
        comboBox_5 = new QComboBox(centralWidget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(30, 280, 61, 29));
        comboBox_6 = new QComboBox(centralWidget);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(30, 330, 61, 29));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 80, 61, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 130, 61, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 180, 61, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 230, 61, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 280, 61, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 330, 61, 31));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(260, 25, 130, 19));
        horizontalSlider->setSliderPosition(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 85, 21, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 135, 21, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 185, 21, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 235, 21, 21));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(260, 85, 64, 23));
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 285, 21, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 335, 21, 21));
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(260, 135, 64, 23));
        lcdNumber_2->setFrameShadow(QFrame::Sunken);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(260, 185, 64, 23));
        lcdNumber_3->setFrameShadow(QFrame::Sunken);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4 = new QLCDNumber(centralWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(260, 235, 64, 23));
        lcdNumber_4->setFrameShadow(QFrame::Sunken);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_5 = new QLCDNumber(centralWidget);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(260, 285, 64, 23));
        lcdNumber_5->setFrameShadow(QFrame::Sunken);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_6 = new QLCDNumber(centralWidget);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(260, 335, 64, 23));
        lcdNumber_6->setFrameShadow(QFrame::Sunken);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);
        comboBox_7 = new QComboBox(centralWidget);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(100, 80, 41, 29));
        comboBox_8 = new QComboBox(centralWidget);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(100, 130, 41, 29));
        comboBox_9 = new QComboBox(centralWidget);
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));
        comboBox_9->setGeometry(QRect(100, 180, 41, 29));
        comboBox_10 = new QComboBox(centralWidget);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        comboBox_10->setGeometry(QRect(100, 230, 41, 29));
        comboBox_11 = new QComboBox(centralWidget);
        comboBox_11->setObjectName(QStringLiteral("comboBox_11"));
        comboBox_11->setGeometry(QRect(100, 280, 41, 29));
        comboBox_12 = new QComboBox(centralWidget);
        comboBox_12->setObjectName(QStringLiteral("comboBox_12"));
        comboBox_12->setGeometry(QRect(100, 330, 41, 29));
        comboBox_13 = new QComboBox(centralWidget);
        comboBox_13->setObjectName(QStringLiteral("comboBox_13"));
        comboBox_13->setGeometry(QRect(30, 20, 191, 29));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 85, 21, 21));
        label_7->setStyleSheet(QStringLiteral(""));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/img/black.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(370, 135, 21, 21));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/img/black.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 185, 21, 21));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/img/black.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 235, 21, 21));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/img/black.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(370, 285, 21, 21));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/img/black.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(370, 335, 21, 21));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/img/black.png")));
        label_12->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(5);
        comboBox_2->setCurrentIndex(10);
        comboBox_3->setCurrentIndex(3);
        comboBox_4->setCurrentIndex(8);
        comboBox_5->setCurrentIndex(12);
        comboBox_6->setCurrentIndex(5);
        comboBox_9->setCurrentIndex(1);
        comboBox_10->setCurrentIndex(1);
        comboBox_11->setCurrentIndex(1);
        comboBox_12->setCurrentIndex(2);
        comboBox_13->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EasyTuner", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Mute", 0)
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Mute", 0)
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Mute", 0)
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Mute", 0)
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Mute", 0)
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Mute", 0)
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Play", 0));
        label->setText(QApplication::translate("MainWindow", "%", 0));
        label_2->setText(QApplication::translate("MainWindow", "%", 0));
        label_3->setText(QApplication::translate("MainWindow", "%", 0));
        label_4->setText(QApplication::translate("MainWindow", "%", 0));
        label_5->setText(QApplication::translate("MainWindow", "%", 0));
        label_6->setText(QApplication::translate("MainWindow", "%", 0));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        comboBox_11->clear();
        comboBox_11->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        comboBox_12->clear();
        comboBox_12->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        comboBox_13->clear();
        comboBox_13->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "*Custom", 0)
         << QApplication::translate("MainWindow", "*Standard", 0)
         << QApplication::translate("MainWindow", "Admiral", 0)
         << QApplication::translate("MainWindow", "All Fourths", 0)
         << QApplication::translate("MainWindow", "Augmented Fourths", 0)
         << QApplication::translate("MainWindow", "Balalaika", 0)
         << QApplication::translate("MainWindow", "Buzzard", 0)
         << QApplication::translate("MainWindow", "Charango", 0)
         << QApplication::translate("MainWindow", "Cittern Tuning One", 0)
         << QApplication::translate("MainWindow", "Cittern Tuning Two", 0)
         << QApplication::translate("MainWindow", "Dobro", 0)
         << QApplication::translate("MainWindow", "Drop D", 0)
         << QApplication::translate("MainWindow", "Face", 0)
         << QApplication::translate("MainWindow", "Four and Twenty", 0)
         << QApplication::translate("MainWindow", "Hot Type", 0)
         << QApplication::translate("MainWindow", "Layover", 0)
         << QApplication::translate("MainWindow", "Lefty", 0)
         << QApplication::translate("MainWindow", "Magic Farmer", 0)
         << QApplication::translate("MainWindow", "Major Sixth", 0)
         << QApplication::translate("MainWindow", "Major Third", 0)
         << QApplication::translate("MainWindow", "Mandoguitar", 0)
         << QApplication::translate("MainWindow", "Minor Sixth", 0)
         << QApplication::translate("MainWindow", "Minor Third", 0)
         << QApplication::translate("MainWindow", "Modal D", 0)
         << QApplication::translate("MainWindow", "Modal G", 0)
         << QApplication::translate("MainWindow", "Open A", 0)
         << QApplication::translate("MainWindow", "Open C", 0)
         << QApplication::translate("MainWindow", "Open D", 0)
         << QApplication::translate("MainWindow", "Open D Minor", 0)
         << QApplication::translate("MainWindow", "Open G", 0)
         << QApplication::translate("MainWindow", "Open G Minor", 0)
         << QApplication::translate("MainWindow", "Overtone", 0)
         << QApplication::translate("MainWindow", "Pelican", 0)
         << QApplication::translate("MainWindow", "Pentatonic", 0)
         << QApplication::translate("MainWindow", "Processional", 0)
         << QApplication::translate("MainWindow", "Slow Motion", 0)
         << QApplication::translate("MainWindow", "Spirit", 0)
         << QApplication::translate("MainWindow", "Tarboulton", 0)
         << QApplication::translate("MainWindow", "Toulouse", 0)
         << QApplication::translate("MainWindow", "Triqueen", 0)
        );
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
