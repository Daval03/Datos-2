#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "administrador.h"
#include "csvreader.h"
#include <QtGui>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
namespace Ui {
class MainWindow;}

class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setNumeros();
    int nivel=0;
    Administrador admi;
    void setBotones();
    QNetworkAccessManager *manager;
    QNetworkRequest request;
    QNetworkAccessManager *manager1;
    QNetworkRequest request1;
    QNetworkAccessManager *manager2;
    QNetworkRequest request2;
    QNetworkAccessManager *manager3;
    QNetworkRequest request3;
    QNetworkAccessManager *manager4;
    QNetworkRequest request4;
    QNetworkAccessManager *manager5;
    QNetworkRequest request5;
    QNetworkAccessManager *manager6;
    QNetworkRequest request6;
    QNetworkAccessManager *manager7;
    QNetworkRequest request7;
    QNetworkAccessManager *manager8;
    QNetworkRequest request8;
private slots:
    void on_L1_clicked();
    void on_B1_clicked();
    void on_B2_clicked();
    void on_B3_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B6_clicked();
    void on_B7_clicked();
    void on_B8_clicked();
    void on_B9_clicked();
    void on_B10_clicked();
    void on_B11_clicked();
    void on_B12_clicked();
    void on_B13_clicked();
    void on_B14_clicked();
    void on_B15_clicked();
    void on_B16_clicked();
    void on_B17_clicked();
    void on_Left_clicked();
    void on_Right_clicked();
    void on_L2_clicked();
    void on_L3_clicked();
    void on_L4_clicked();
    void on_L5_clicked();
    void on_L6_clicked();
    void on_L7_clicked();
    void on_L8_clicked();
    void on_L9_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
