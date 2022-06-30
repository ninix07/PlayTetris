#include "tetriswindow.h"
#include "tetrixboard.h"
#include "precompiledheader.h"

TetrisWindow::TetrisWindow(QWidget *parent)
    : QWidget(parent)
{
    board = new TetrixBoard;

    nextPieceLabel = new QLabel;
    nextPieceLabel->setFrameStyle(QFrame::Box | QFrame::Raised);
    nextPieceLabel->setAlignment(Qt::AlignCenter);
    board->setNextPieceLabel(nextPieceLabel);


    scoreLcd = new QLCDNumber(5);
    scoreLcd->setSegmentStyle(QLCDNumber::Outline);
    scoreLcd->setStyleSheet("background-color: black");

    levelLcd = new QLCDNumber(2);
    levelLcd->setSegmentStyle(QLCDNumber::Outline);
    levelLcd->setStyleSheet("background-color: black");

    linesLcd = new QLCDNumber(2);
    linesLcd->setSegmentStyle(QLCDNumber::Outline);
    linesLcd->setStyleSheet("background-color: black");

    startButton = new QPushButton(tr("&Start"));
    startButton->setFocusPolicy(Qt::NoFocus);
    quitButton = new QPushButton(tr("&Quit"));
    quitButton->setFocusPolicy(Qt::NoFocus);
    pauseButton = new QPushButton(tr("&Pause"));
    pauseButton->setFocusPolicy(Qt::NoFocus);
    playButton = new QPushButton(tr("&Play"));
    playButton->setFocusPolicy((Qt::NoFocus));

    connect(startButton, &QPushButton::clicked, board, &TetrixBoard::start);
        connect(quitButton , &QPushButton::clicked, qApp, &QCoreApplication::quit);
        connect(pauseButton, &QPushButton::clicked, board, &TetrixBoard::pause);
        connect(playButton, &QPushButton::clicked, board, &TetrixBoard::pause);

        connect(board, &TetrixBoard::scoreChanged,
                scoreLcd, QOverload<int>::of(&QLCDNumber::display));
        connect(board, &TetrixBoard::levelChanged,
                levelLcd, QOverload<int>::of(&QLCDNumber::display));
        connect(board, &TetrixBoard::linesRemovedChanged,
                linesLcd, QOverload<int>::of(&QLCDNumber::display));


        QGridLayout *layout = new QGridLayout;
        layout->addWidget(board, 0, 0, 15, 8);
        layout->addWidget(createLabel(tr("NEXT")), 0, 9);
        layout->addWidget(nextPieceLabel, 1, 9);
        layout->addWidget(createLabel(tr("LEVEL")), 2, 9);
        layout->addWidget(levelLcd, 3, 9);
        layout->addWidget(createLabel(tr("SCORE")), 4, 9);
        layout->addWidget(scoreLcd, 5, 9);
        layout->addWidget(createLabel(tr("LINES REMOVED")), 6, 9);
        layout->addWidget(linesLcd, 7, 9);
        layout->addWidget(createLabel(tr("    ")), 8, 9);
        layout->addWidget(quitButton, 9, 9);
        layout->addWidget(pauseButton, 10, 9);
        layout->addWidget(startButton, 12, 9);
        layout->addWidget(playButton, 11,9);
        setLayout(layout);
}


QLabel *TetrisWindow::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
    return label;
}


