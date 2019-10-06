#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include"QDebug"
#include <unistd.h>
#include <QUrl>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QDesktopServices>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    manager = new QNetworkAccessManager();
    QObject::connect(manager, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(1000, 1000, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L1->width();
        int h = ui->L1->height();
        ui->L1->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager1 = new QNetworkAccessManager();
    QObject::connect(manager1, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(2000, 2000, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L2->width();
        int h = ui->L2->height();
        ui->L2->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager2 = new QNetworkAccessManager();
    QObject::connect(manager2, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(200, 200, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L3->width();
        int h = ui->L3->height();
        ui->L3->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager3 = new QNetworkAccessManager();
    QObject::connect(manager3, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(200, 200, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L4->width();
        int h = ui->L4->height();
        ui->L4->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager4 = new QNetworkAccessManager();
    QObject::connect(manager4, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(200, 200, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L5->width();
        int h = ui->L5->height();
        ui->L5->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager5 = new QNetworkAccessManager();
    QObject::connect(manager5, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(200, 200, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L6->width();
        int h = ui->L6->height();
        ui->L6->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager6 = new QNetworkAccessManager();
    QObject::connect(manager6, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(2000, 2000, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L7->width();
        int h = ui->L7->height();
        ui->L7->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager7 = new QNetworkAccessManager();
    QObject::connect(manager7, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(200, 200, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L8->width();
        int h = ui->L8->height();
        ui->L8->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
    manager8 = new QNetworkAccessManager();
    QObject::connect(manager8, &QNetworkAccessManager::finished,this, [=](QNetworkReply *reply) {
        QString res;
        QString answer = reply->readAll();
        QRegExp rx("https");// match a comma or a space
        QStringList list = answer.split(rx, QString::SkipEmptyParts);
        res=("https" + list.takeAt(13).left(114));
        qDebug()<<res;
        QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
        QUrl url;
        url.setUrl(res);
        QNetworkRequest request(url);
        QNetworkReply *replyy = netAccManager->get(request);
        QEventLoop loop;
        QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        QByteArray bytes = replyy->readAll();
        QImage img(200, 200, QImage::Format_Indexed8);
        img.loadFromData(bytes);
        int w = ui->L9->width();
        int h = ui->L9->height();
        ui->L9->setIcon(QPixmap::fromImage(img).scaled(w,h,Qt::KeepAspectRatio));
    });
}
MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::setNumeros(){
    QString res1= QString::number(0+(17*nivel));
    QString res2= QString::number(1+(17*nivel));
    QString res3= QString::number(2+(17*nivel));
    QString res4= QString::number(3+(17*nivel));
    QString res5= QString::number(4+(17*nivel));
    QString res6= QString::number(5+(17*nivel));
    QString res7= QString::number(6+(17*nivel));
    QString res8= QString::number(7+(17*nivel));
    QString res9= QString::number(8+(17*nivel));
    QString res10= QString::number(9+(17*nivel));
    QString res11= QString::number(10+(17*nivel));
    QString res12= QString::number(11+(17*nivel));
    QString res13= QString::number(12+(17*nivel));
    QString res14= QString::number(13+(17*nivel));
    QString res15= QString::number(14+(17*nivel));
    QString res16= QString::number(15+(17*nivel));
    QString res17= QString::number(16+(17*nivel));
    ui->B1->setText(res1);
    ui->B2->setText(res2);
    ui->B3->setText(res3);
    ui->B4->setText(res4);
    ui->B5->setText(res5);
    ui->B6->setText(res6);
    ui->B7->setText(res7);
    ui->B8->setText(res8);
    ui->B9->setText(res9);
    ui->B10->setText(res10);
    ui->B11->setText(res11);
    ui->B12->setText(res12);
    ui->B13->setText(res13);
    ui->B14->setText(res14);
    ui->B15->setText(res15);
    ui->B16->setText(res16);
    ui->B17->setText(res17);
}
void MainWindow::on_L1_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[0]);
    secondwindos.exec();
}
void MainWindow::on_L2_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[1]);
    secondwindos.exec();
}
void MainWindow::on_L3_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[2]);
    secondwindos.exec();
}
void MainWindow::on_L4_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[3]);
    secondwindos.exec();
}
void MainWindow::on_L5_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[4]);
    secondwindos.exec();
}
void MainWindow::on_L6_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[5]);
    secondwindos.exec();
}
void MainWindow::on_L7_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[6]);
    secondwindos.exec();
}
void MainWindow::on_L8_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[7]);
    secondwindos.exec();
}
void MainWindow::on_L9_clicked(){
    Dialog secondwindos;
    secondwindos.setModal(true);
    secondwindos.setInfo(admi.pagina[8]);
    secondwindos.exec();
}
void MainWindow::on_B1_clicked(){
    if(admi.pivote+1==0+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==0+(17*nivel)){ //0-9//9-18//18-27
        admi.setPagina(0,9);
    }else{
        admi.casoinicial();
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B2_clicked(){
    if(admi.pivote+1==1+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==1+(17*nivel)){ //0-9//9-18//18-27
        admi.setPagina(0,9);
    }else{
        admi.doMath(1+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B3_clicked(){
    if(admi.pivote+1==2+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==2+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(2+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B4_clicked(){
    if(admi.pivote+1==3+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==3+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(3+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B5_clicked(){
    if(admi.pivote+1==4+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==4+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(4+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B6_clicked(){
    if(admi.pivote+1==5+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==5+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(5+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B7_clicked(){
    if(admi.pivote+1==6+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==6+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(6+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B8_clicked(){
    if(admi.pivote+1==7+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==7+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(7+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B9_clicked(){
    if(admi.pivote+1==8+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==8+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(8+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B10_clicked(){
    if(admi.pivote+1==9+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==9+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(9+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B11_clicked(){
    if(admi.pivote+1==10+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==10+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(10+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B12_clicked(){
    if(admi.pivote+1==11+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==11+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(11+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B13_clicked(){
    if(admi.pivote+1==12+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==12+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(12+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B14_clicked(){
    if(admi.pivote+1==13+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==13+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(13+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B15_clicked(){
    if(admi.pivote+1==14+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==14+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(14+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B16_clicked(){
    if(admi.pivote+1==15+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==15+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(15+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_B17_clicked(){
    if(admi.pivote+1==16+(17*nivel)){
        admi.setPagina(18,27);
    }else if(admi.pivote-1==16+(17*nivel)){
        admi.setPagina(0,9);
    }else{
        admi.doMath(16+(17*nivel));
        admi.setPagina(9,18);
    }setBotones();
}
void MainWindow::on_Left_clicked(){
    if(nivel!=0){
        this->nivel--;
        setNumeros();
    }
}
void MainWindow::on_Right_clicked(){
    if(nivel<33){
        this->nivel++;
        setNumeros();
    }
}
void MainWindow::setBotones(){
    QUrl url;
    url.setUrl(admi.links[0]);
    request.setUrl(url);
    manager->get(request);

    url.setUrl(admi.links[1]);
    request1.setUrl(url);
    manager1->get(request1);

    url.setUrl(admi.links[2]);
    request2.setUrl(url);
    manager2->get(request2);

    url.setUrl(admi.links[3]);
    request3.setUrl(url);
    manager3->get(request3);

    url.setUrl(admi.links[4]);
    request4.setUrl(url);
    manager4->get(request4);

    url.setUrl(admi.links[5]);
    request5.setUrl(url);
    manager5->get(request5);

    url.setUrl(admi.links[6]);
    request6.setUrl(url);
    manager6->get(request6);

    url.setUrl(admi.links[7]);
    request7.setUrl(url);
    manager7->get(request7);

    url.setUrl(admi.links[8]);
    request8.setUrl(url);
    manager8->get(request8);
}
