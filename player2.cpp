#include "player2.h"

#include <QGraphicsScene>


Player2::Player2(): Player()
{
}

Player2::~Player2()
{

}

void Player2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(5,5,90,90);
}

void Player2::keyPressEvent(QKeyEvent *event)
{
    Player::keyPressEvent(event);
}
