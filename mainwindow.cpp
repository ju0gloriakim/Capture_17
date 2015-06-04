#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::begin() {
    QWidget* page = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout;

    QMessageBox* message = new QMessageBox;
    message->setText("start");
    message->show();

    game = new GamePage(this);
    layout->addWidget(game);

    QPushButton* quitButton = new QPushButton("Quit");
    QObject::connect(quitButton, SIGNAL(clicked()), this, SLOT(game_over()));
    layout->addWidget(quitButton);

    page->setLayout(layout);
    setCentralWidget(page);
}

void MainWindow::howTo(){
    QWidget* page = new QWidget;

    QVBoxLayout* layout = new QVBoxLayout;

    instruction = new Instruction(this);
    layout->addWidget(instruction);

    QPushButton* startButton = new QPushButton("Start");
    QObject::connect(startButton, SIGNAL(clicked()), this, SLOT(begin()));
    layout->addWidget(startButton);

    page->setLayout(layout);
    setCentralWidget(page);

}
void MainWindow::game_over() {

    // Take the current board game out of the central widget of MainWindow
    QWidget* wid = this->centralWidget();
    wid->setParent(nullptr);
    // Line above will delete the widget gracefully (no memory errors)

    // Display something which says that you lost, maybe display high score.

    // Reset the MainWindow with the initial startup screen
    ui->setupUi(this);


}


MainWindow::~MainWindow()
{
    delete ui;
}
