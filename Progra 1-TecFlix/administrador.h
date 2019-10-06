#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "csvreader.h"
#include <QString>
#include <sstream>
using namespace std;
class Administrador{
private:
    CSVReader MetaData;
    void setLista();
public:
    std::vector<std::string> dataList;
    std::vector<std::string> pagina;
    std::vector<QString> links;
    QString split(string dato);
    void setLinks();
    void setPagina(int inicio,int final);
    void doMath(int pivote);
    void hacerpagina();
    void casoinicial();
    int limite,inicio,pivote;
    Administrador();
    void setDatosCSV();
};

#endif // ADMINISTRADOR_H
