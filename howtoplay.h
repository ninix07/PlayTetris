#ifndef HOWTOPLAY_H
#define HOWTOPLAY_H

#include <QDialog>

namespace Ui {
class howToPlay;
}

class howToPlay : public QDialog
{
    Q_OBJECT

public:
    explicit howToPlay(QWidget *parent = nullptr);
    ~howToPlay();

private:
    Ui::howToPlay *ui;
};

#endif // HOWTOPLAY_H
