#ifndef INFINITE_H
#define INFINITE_H

#include <QDialog>

namespace Ui {class Infinite;}
class Infinite : public QDialog{
    Q_OBJECT

public:
    explicit Infinite(QWidget *parent = nullptr);
    ~Infinite();

private:
    Ui::Infinite *ui;
};
#endif // INFINITE_H
