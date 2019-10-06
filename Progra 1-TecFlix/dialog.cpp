#include "dialog.h"
#include "ui_dialog.h"
#include <sstream>
using namespace std;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui2(new Ui::Dialog){
    ui2->setupUi(this);
}
Dialog::~Dialog(){
    delete ui2;
}
void Dialog::setInfo(string info){
    stringstream ss(info);
    while(ss.good()){
        string res;
        getline(ss,res,',');
        QString qstr=QString::fromStdString(res);
        pelicula.push_back(qstr);
    }
    setInfoUi();
}
void Dialog::setInfoUi(){
    ui2->E1->setText(pelicula[11]);
    ui2->E2->setText(pelicula[1]);
    ui2->E3->setText(pelicula[9]);
    ui2->E4->setText(pelicula[3]);
    ui2->E5->setText(pelicula[10]);
    ui2->E6->setText(pelicula[6]);
    ui2->E7->setText(pelicula[16]);
    ui2->E8->setText(pelicula[19]);
    ui2->E9->setText(pelicula[20]);
    ui2->E10->setText(pelicula[23]);
    ui2->E11->setText(pelicula[21]);
    ui2->E12->setText(pelicula[25]);
    ui2->E13->setText(pelicula[26]);
    ui2->E14->setText(pelicula[18]);
    ui2->E15->setText(pelicula[27]);
    ui2->E16->setText(pelicula[8]);
    ui2->E17->setText(pelicula[22]);
    ui2->ELD->setText(pelicula[4]);
    ui2->ETT->setText(pelicula[13]);
    ui2->E33->setText(pelicula[14]);

}

void Dialog::on_PWeb_clicked(){
    QDesktopServices::openUrl(QUrl(pelicula[17]));
}
