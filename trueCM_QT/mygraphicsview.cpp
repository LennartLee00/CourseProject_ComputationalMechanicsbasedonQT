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
              if(!m_isDrawing){
                  m_isDrawing = true;
                  m_startPos = event->pos()+QPoint(298,1)-QPoint(66,8);
                  QTextEdit *textEdit = qobject_cast<QTextEdit *>(parent()->findChild<QObject *>("textEdit"));
                  if (textEdit) {
                      textEdit->setText("起始点已记录：");
                  }

                  m_rectItem = new QGraphicsRectItem;
                  QPen pen(Qt::black);
                  pen.setWidth(2);
                  m_rectItem->setPen(pen);

                  scene()->addItem(m_rectItem);
              }
             else{
                  QTextEdit *textEdit = qobject_cast<QTextEdit *>(parent()->findChild<QObject *>("textEdit"));
                  if (textEdit) {
                      textEdit->setText("终点已记录");
                  }


                  m_isDrawing = false;
              }
        }


}

void MyGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    if (m_isDrawing) {
        QRectF rect(m_startPos, event->pos()+QPoint(298,-1)-QPoint(66,8));
         m_rectItem->setRect(rect.normalized());
    }

    QWidget *parent = parentWidget();
    if (parent) {
        QMouseEvent newEvent(QEvent::MouseMove, mapTo(parent, event->pos()), event->windowPos(), event->screenPos(), event->button(), event->buttons(), event->modifiers());
        QApplication::sendEvent(parent, &newEvent);
    }
}

//void MyGraphicsView::mouseReleaseEvent(QMouseEvent *event)
//{
//    setMouseTracking(true);
//    if (event->button() == Qt::LeftButton) {
//       // m_isDrawing = false;
//    }
//}


