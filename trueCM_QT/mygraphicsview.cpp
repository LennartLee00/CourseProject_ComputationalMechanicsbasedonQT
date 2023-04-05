// mygraphicsview.cpp
#include "mygraphicsview.h"

MyGraphicsView::MyGraphicsView(QWidget *parent) :
    QGraphicsView(parent),
    m_isDrawing(false),
    m_rectItem(nullptr)
{

}

void MyGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_isDrawing = true;
        m_startPos = event->pos()+QPoint(180,10);
        m_rectItem = new QGraphicsRectItem;
        scene()->addItem(m_rectItem);
    }
}

void MyGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    if (m_isDrawing) {
        QRectF rect(m_startPos, event->pos()+QPoint(180,10));
         m_rectItem->setRect(rect.normalized());
    }
}

void MyGraphicsView::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_isDrawing = false;
    }
}
