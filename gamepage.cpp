#include "gamepage.h"
#include "ui_gamepage.h"

GamePage::GamePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GamePage)
{
    ui->setupUi(this);

    //create a scene
    scene = new QGraphicsScene();

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setFixedSize(702, 702);
    scene->setSceneRect(0,0,700,700);

    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //create a 7X7 grid using lines
    QGraphicsLineItem* v1 = new QGraphicsLineItem(100, 0, 100, 700);
    QGraphicsLineItem* v2 = new QGraphicsLineItem(200, 0, 200, 700);
    QGraphicsLineItem* v3 = new QGraphicsLineItem(300, 0, 300, 700);
    QGraphicsLineItem* v4 = new QGraphicsLineItem(400, 0, 400, 700);
    QGraphicsLineItem* v5 = new QGraphicsLineItem(500, 0, 500, 700);
    QGraphicsLineItem* v6 = new QGraphicsLineItem(600, 0, 600, 700);
    QGraphicsLineItem* h1 = new QGraphicsLineItem(0, 100, 700, 100);
    QGraphicsLineItem* h2 = new QGraphicsLineItem(0, 200, 700, 200);
    QGraphicsLineItem* h3 = new QGraphicsLineItem(0, 300, 700, 300);
    QGraphicsLineItem* h4 = new QGraphicsLineItem(0, 400, 700, 400);
    QGraphicsLineItem* h5 = new QGraphicsLineItem(0, 500, 700, 500);
    QGraphicsLineItem* h6 = new QGraphicsLineItem(0, 600, 700, 600);
    scene->addItem(v1);
    scene->addItem(v2);
    scene->addItem(v3);
    scene->addItem(v4);
    scene->addItem(v5);
    scene->addItem(v6);
    scene->addItem(h1);
    scene->addItem(h2);
    scene->addItem(h3);
    scene->addItem(h4);
    scene->addItem(h5);
    scene->addItem(h6);

    bool playersTurn = true;
    //bool gameover = false;
    //create a player
    player = new Player();
    //same thing for player2
    player2 = new Player2();

    scene->addItem(player);
    scene->addItem(player2);

    //to recieve keyboard events, set focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player2->setFlag(QGraphicsItem::ItemIsFocusable);

    if(playersTurn){
        player->setFocus();
        playersTurn = false;
        player->clearFocus();

    }
    else{
        player2->setFocus();
}
    show();

}


GamePage::~GamePage()
{
    delete ui;
}

