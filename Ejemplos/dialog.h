#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include <string>
#include <QDesktopServices>
#include <QUrl>
using namespace std;
namespace Ui {class Dialog;}
class Dialog : public QDialog{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    Ui::Dialog *ui2;
    void setInfo(string info);
    void setInfoUi();
    vector<QString> pelicula;
private slots:
    void on_PWeb_clicked();
};

#endif // DIALOG_H
