#include "mainwindow.h"
#include "ui_mainwindow.h"


int gtemp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    makeWidgetToArray();
    eventComboBox();
    eventPushButton();
    sqlite3_open("./database/tuning.sqlite", &mydb);
}


MainWindow::~MainWindow()
{
    sqlite3_close(mydb);
    delete ui;
}


void MainWindow::makeWidgetToArray()
{
    scaleComboBox.push_back(ui->comboBox);
    scaleComboBox.push_back(ui->comboBox_2);
    scaleComboBox.push_back(ui->comboBox_3);
    scaleComboBox.push_back(ui->comboBox_4);
    scaleComboBox.push_back(ui->comboBox_5);
    scaleComboBox.push_back(ui->comboBox_6);

    octaveComboBox.push_back(ui->comboBox_7);
    octaveComboBox.push_back(ui->comboBox_8);
    octaveComboBox.push_back(ui->comboBox_9);
    octaveComboBox.push_back(ui->comboBox_10);
    octaveComboBox.push_back(ui->comboBox_11);
    octaveComboBox.push_back(ui->comboBox_12);

    playPushButton.push_back(ui->pushButton);
    playPushButton.push_back(ui->pushButton_2);
    playPushButton.push_back(ui->pushButton_3);
    playPushButton.push_back(ui->pushButton_4);
    playPushButton.push_back(ui->pushButton_5);
    playPushButton.push_back(ui->pushButton_6);

    tuningComboBox = ui->comboBox_13;
}


void MainWindow::eventComboBox()
{
    QSignalMapper* sigMap = new QSignalMapper(this);

    for (int i = 0; i < scaleComboBox.size(); ++i) {
        connect(scaleComboBox[i], SIGNAL(currentIndexChanged(QString)), sigMap, SLOT(map()));
        sigMap->setMapping(scaleComboBox[i], i);
    }
    for (int i = 0; i < octaveComboBox.size(); ++i) {
        connect(octaveComboBox[i], SIGNAL(currentIndexChanged(QString)), sigMap, SLOT(map()));
        sigMap->setMapping(octaveComboBox[i], i+6);
    }

    connect(tuningComboBox, SIGNAL(currentIndexChanged(QString)), sigMap, SLOT(map()));
    sigMap->setMapping(tuningComboBox, 12);

    connect(sigMap, SIGNAL(mapped(int)), this, SLOT(comboBoxesLogic(int)));
}


void MainWindow::eventPushButton()
{
    QSignalMapper* sigMap = new QSignalMapper(this);

    for (int i = 0; i < playPushButton.size(); ++i) {
        connect(playPushButton[i], SIGNAL(clicked()), sigMap, SLOT(map()));
        sigMap->setMapping(playPushButton[i], i);
    }

    connect(sigMap, SIGNAL(mapped(int)), this, SLOT(pushButtonsLogic(int)));
}


void MainWindow::comboBoxesLogic(int index)
{
    if (index >= 0 && index < 12) {
        tuningComboBox->setCurrentIndex(0);
    } else if (index == 12) {
        if (tuningComboBox->currentIndex() != 0) {
            for (int i = 0; i < scaleComboBox.size(); ++i) {
                std::string query = "select s";
                std::stringstream out;
                out << (6-i);
                query += out.str();
                query += " from tuning where id = ";
                std::stringstream out2;
                out2 << tuningComboBox->currentIndex();
                query += out2.str();
                int result = sqlite3_exec(mydb, query.c_str(), callback, 0, NULL);
                scaleComboBox[i]->setCurrentIndex(gtemp);
            }
            for (int i = 0; i < octaveComboBox.size(); ++i) {
                std::string query = "select o";
                std::stringstream out;
                out << (6-i);
                query += out.str();
                query += " from tuning where id = ";
                std::stringstream out2;
                out2 << tuningComboBox->currentIndex();
                query += out2.str();
                int result = sqlite3_exec(mydb, query.c_str(), callback, 0, NULL);
                octaveComboBox[i]->setCurrentIndex(gtemp);
            }
        }
    } else {
        //err
    }
}


void MainWindow::pushButtonsLogic(int index)
{
    if (index >= 0 && index < 6) {
        if (playPushButton[index]->text() == "Play") {
            for (int i = 0; i < playPushButton.size(); ++i) {
                playPushButton[i]->setText("Play");
                //stopAudio();
            }
            playPushButton[index]->setText("Stop");
            int result = 36;
            result += scaleComboBox[index]->currentIndex();
            result += octaveComboBox[index]->currentIndex();
            std::stringstream temp;
            temp << result;
            //playAudio(temp.str());
        } else {
            playPushButton[index]->setText("Play");
            //stopAudio();
        }
    } else {
        //err
    }
}


static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    gtemp = argv[0] ? atoi(argv[0]) : -1;
    return gtemp;
    //return 0;
}


char** MainWindow::database()
{
    return NULL;
}
