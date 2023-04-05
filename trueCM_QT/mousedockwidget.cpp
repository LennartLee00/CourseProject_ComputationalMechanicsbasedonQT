#include "mousedockwidget.h"
#include "ui_mousedockwidget.h"

MouseDockWidget::MouseDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::MouseDockWidget)
{
    ui->setupUi(this);
}

MouseDockWidget::~MouseDockWidget()
{
    delete ui;
}
