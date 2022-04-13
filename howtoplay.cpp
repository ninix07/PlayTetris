#include "howtoplay.h"
#include "ui_howtoplay.h"

howToPlay::howToPlay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::howToPlay)
{
    ui->setupUi(this);
}

howToPlay::~howToPlay()
{
    delete ui;
}
