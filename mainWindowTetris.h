#ifndef MAINWINDOWTETRIS_H
#define MAINWINDOWTETRIS_H

#include "precompiledheader.h"

namespace Ui {
class MainWindowTetris;
}

class MainWindowTetris : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowTetris(QWidget *parent = nullptr);
    ~MainWindowTetris();

private:
    Ui::MainWindowTetris *ui;
};

#endif // MAINWINDOWTETRIS_H
