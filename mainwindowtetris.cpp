#include "precompiledheader.h"
#include "mainWindowTetris.h"
#include "ui_mainWindowTetris.h"
#include "tetriswindow.h"

/*
*	constructor Main Window Tetris
*	@name	: MainWindowTetris
*	@param	: QWidget
*	@return : void
*/
MainWindowTetris::MainWindowTetris(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowTetris)
{
    ui->setupUi(this);
    TetrisWindow *window = new TetrisWindow;
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(window);
    setCentralWidget(new QWidget);
    centralWidget()->setLayout(layout);
    setFixedSize(500, 670);
    this->setWindowTitle("Play Tetris");
    this->setWindowIcon(QIcon(":Images/Icon.jpg"));

}
MainWindowTetris::~MainWindowTetris()
{
    delete ui;
}
