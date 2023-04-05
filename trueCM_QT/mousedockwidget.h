#ifndef MOUSEDOCKWIDGET_H
#define MOUSEDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class MouseDockWidget;
}

class MouseDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit MouseDockWidget(QWidget *parent = nullptr);
    ~MouseDockWidget();

private:
    Ui::MouseDockWidget *ui;
};

#endif // MOUSEDOCKWIDGET_H
