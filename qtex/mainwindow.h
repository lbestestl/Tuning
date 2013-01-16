#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>
#include <QVector>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <AL/al.h>
#include <AL/alut.h>
#include "sqlite3.h"


namespace Ui {
class MainWindow;
}

static int callback(void *NotUsed, int argc, char **argv, char **azColName);


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    void eventPushButton();
    void eventComboBox();
    void makeWidgetToArray();
//    int callback(void *NotUsed, int argc, char **argv, char **azColName);
    char **database();

    Ui::MainWindow *ui;
    QVector<QComboBox*> octaveComboBox;
    QVector<QComboBox*> scaleComboBox;
    QVector<QPushButton*> playPushButton;
    QComboBox* tuningComboBox;
    sqlite3* mydb;
    char* dbErrMsg;
    bool eventFlag;

private slots:
    void pushButtonsLogic(int index);
    void comboBoxesLogic(int index);

};

#endif // MAINWINDOW_H
