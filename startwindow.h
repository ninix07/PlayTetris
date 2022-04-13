#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include "mainWindowTetris.h"
#include "howtoplay.h"
#include "tetrixboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StartWindow; }
QT_END_NAMESPACE

class StartWindow : public QMainWindow
{
    Q_OBJECT

public:
    StartWindow(QWidget *parent = nullptr);
    ~StartWindow();

private slots:
    void on_startButton_clicked();
    void on_howButton_clicked();

private:
    Ui::StartWindow *ui;
    MainWindowTetris *MainWindowTetris;
    howToPlay *How;

};
#endif // STARTWINDOW_H
