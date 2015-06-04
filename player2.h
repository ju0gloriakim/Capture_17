#ifndef PLAYER2_H
#define PLAYER2_H

#include <QGraphicsItem>
#include <QPainter>
#include <QKeyEvent>
#include "block.h"
#include "player.h"

class Player2 : public Player
{
public:
    Player2();
    ~Player2();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void keyPressEvent(QKeyEvent* event);

private:
    Block* block;

};

#endif // PLAYER2_H
