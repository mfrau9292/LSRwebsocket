#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>

namespace Ui {
class Viewer;
}

class Viewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Viewer(QWidget *parent = 0);
    ~Viewer();
    display(QString data);
private slots:
    void on_Viewer_destroyed();

private:
    Ui::Viewer *ui;
};

#endif // VIEWER_H
