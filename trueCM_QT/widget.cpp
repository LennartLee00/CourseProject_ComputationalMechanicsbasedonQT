#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(180,10,450,340);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

Widget::~Widget()
{
    delete ui;
}

