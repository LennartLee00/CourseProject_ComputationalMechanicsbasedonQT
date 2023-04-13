#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(236,1,398,400);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();

    setMouseTracking(true);
    ui->graphicsView->setMouseTracking(true);
    MouseX = findChild<QTextEdit*>("MouseX");
    MouseY = findChild<QTextEdit*>("MouseY");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{

    ui->textEdit->setText("Mouse is moving");
    int x = event->pos().x()-298;
    int y = event->pos().y()-1;

    MouseX->setText(QString::number(x));
    MouseY->setText(QString::number(y));
}
