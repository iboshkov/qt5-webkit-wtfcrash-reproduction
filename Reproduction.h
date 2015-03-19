#ifndef REPRODUCTION_H
#define REPRODUCTION_H

#include <QMainWindow>

namespace Ui {
class Reproduction;
}

class Reproduction : public QMainWindow
{
    Q_OBJECT

public:
    explicit Reproduction(QWidget *parent = 0);
    ~Reproduction();

private:
    Ui::Reproduction *ui;
};

#endif // REPRODUCTION_H
