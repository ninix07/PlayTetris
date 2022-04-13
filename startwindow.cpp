#include "startwindow.h"
#include "ui_startwindow.h"
#include "mainWindowTetris.h"
#include "howtoplay.h"
#include "tetrixboard.h"
#include "precompiledheader.h"





StartWindow::StartWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Play Tetris");
    this->setWindowIcon(QIcon(":Images/Icon.jpg"));

}

StartWindow::~StartWindow()
{
    delete ui;
}



void StartWindow::on_startButton_clicked()
{
    this -> hide();
    MainWindowTetris = new class MainWindowTetris(this);
    MainWindowTetris -> show();



}
void StartWindow:: on_howButton_clicked()
{
    How =new howToPlay(this);
    How-> show();
}


