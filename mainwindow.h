#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "instruction.h"
#include "gamepage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void begin();
    void howTo();
    void game_over();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Instruction* instruction;
    GamePage* game;
    bool quit;
};

#endif // MAINWINDOW_H
