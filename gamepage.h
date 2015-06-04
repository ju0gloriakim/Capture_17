#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include <QWidget>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <vector>
#include <QKeyEvent>
#include "player.h"
#include "player2.h"

namespace Ui {
class GamePage;
}
class GamePage : public QWidget
{
    Q_OBJECT

    friend class Player;
public:
    explicit GamePage(QWidget *parent = 0);
    ~GamePage();
protected:
//    void keyPressEvent(QKeyEvent* event);
    //void keyPressEvent(QKeyEvent *event, Player* player);


private:
    Ui::GamePage *ui;

    QGraphicsScene* scene;
    Block* block;
    Player* player;
    Player2* player2;
};

#endif // GAMEPAGE_H

