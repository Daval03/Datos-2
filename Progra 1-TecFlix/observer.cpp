#include "observer.h"

Observer::Observer(){}
void Observer::setCSV(int pivote){
    this->admi.doMath(pivote);
}
string Observer::getInfo(int posicion){
    return (admi.pivote==0)?admi.dataList[posicion-9]:admi.dataList[posicion];
}
