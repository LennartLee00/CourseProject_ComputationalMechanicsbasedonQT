#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QTextEdit>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private:
    Ui::Widget *ui;
    // 在堆上创建一个场景
    QGraphicsScene *scene ;
    void mouseMoveEvent(QMouseEvent *event);

    QTextEdit* MouseX;
    QTextEdit* MouseY;

};
#endif // WIDGET_H
