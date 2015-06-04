#include "player.h"

#include <QGraphicsScene>


Player::Player()
{

}

Player::~Player()
{

}

QRectF Player::boundingRect() const
{
    return QRectF(5,5,90,90);
}

void Player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawRect(5,5,90,90);
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        if(x()-100 >= 0)
            setPos(x()-100, y());
    }
    else if (event->key() == Qt::Key_Right){
        if(x()+100 < 700)
            setPos(x()+100, y());
    }
    else if (event->key() == Qt::Key_Up){
        if(y()-100 >= 0)
            setPos(x(), y()-100);
    }
    else if (event->key() == Qt::Key_Down){
        if(y()+100 < 700)
            setPos(x(), y()+100);
    }
    else if (event->key() == Qt::Key_Space){
        //make block
        block = new Block;   //need "block.h"
        block->setPos(x(), y());
        scene()->addItem(block);    //need <QGraphicsScene>
        //switch to other player
        clearFocus();
    }

}
