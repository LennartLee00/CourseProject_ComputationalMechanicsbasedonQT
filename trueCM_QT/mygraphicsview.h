// mygraphicsview.h
#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QMouseEvent>
#include<QGraphicsRectItem>
#include<QApplication>
#include<QTextEdit>
class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyGraphicsView(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
  //  void mouseReleaseEvent(QMouseEvent *event) override;

private:
    bool m_isDrawing;
    QPoint m_startPos;
    QPoint m_endPos;
    QGraphicsRectItem *m_rectItem;
};

#endif // MYGRAPHICSVIEW_H
