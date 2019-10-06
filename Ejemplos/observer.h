#ifndef OBSERVER_H
#define OBSERVER_H

#include"administrador.h"
class Observer{
public:
    Administrador admi;
    Observer();
    void setCSV(int pivote);
    string getInfo(int posicion);
};

#endif // OBSERVER_H
