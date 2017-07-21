#ifndef PICKERWINDOW_H
#define PICKERWINDOW_H

#include <QWidget>
#include "zoom.h"

class PickerWindow : public QWidget
{
    Q_OBJECT

public:
    PickerWindow(QWidget *parent = 0);

    void start();

protected:
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    QPixmap m_pixmap;
    QImage image;
    Zoom *zoom;

signals:
    void finished(QColor color);
};

#endif // PICKERWINDOW_H
