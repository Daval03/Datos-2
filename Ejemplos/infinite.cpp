#include "infinite.h"
#include "ui_infinite.h"

Infinite::Infinite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Infinite){
    ui->setupUi(this);
}
Infinite::~Infinite(){
    delete ui;
}
