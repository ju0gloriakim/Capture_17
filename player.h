#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsItem>
#include <QPainter>
#include <QKeyEvent>
#include "block.h"

class Player : public QGraphicsItem
{
public:
    Player();
    ~Player();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void keyPressEvent(QKeyEvent* event);

private:
    Block* block;

};

#endif // PLAYER_H
