#ifndef TETRISWINDOW_H
#define TETRISWINDOW_H

#include "precompiledheader.h"
#include "tetrixboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TetrisWindow; }
QT_END_NAMESPACE

class QLCDNumber;
class QLabel;
class QPushButton;
class TetrixBoard;

class TetrisWindow : public QWidget
{
    Q_OBJECT

public:
    TetrisWindow(QWidget *parent = 0);

private:
    QLabel *createLabel(const QString &text);

    TetrixBoard *board;
    QLabel *nextPieceLabel;
    QLCDNumber *scoreLcd;
    QLCDNumber *levelLcd;
    QLCDNumber *linesLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
    QPushButton *playButton;
};
#endif // TETRISWINDOW_H
