#include "administrador.h"
#include "QDebug"

Administrador::Administrador() {
    this->MetaData.setData("/home/aldo/Escritorio/movie_metadata.csv","\n");
    this->pivote=0;
    this->inicio=0;
    this->limite=18;
    this->dataList=this->MetaData.getFirstData(inicio,limite);
    hacerpagina();
    setPagina(9,18);
}
void Administrador::casoinicial(){
    this->dataList=this->MetaData.getFirstData(0,18);
}
void Administrador::hacerpagina(){
    for(int i=0;i<9;i++){
        pagina.push_back("");
        links.push_back("");
    }
}
QString Administrador::split(string dato){
    stringstream ss(dato);
    string res;
    int i=0;
    while(getline(ss,res,',')){
        if(i==17){
            QString qstr = QString::fromStdString(res);
            return qstr;
        }i++;
    }
}
void Administrador::setLinks(){
    for(int i=0;i<9;i++){
        QString res=split(pagina[i]);
        links[i]=res;
    }
}
void Administrador::setPagina(int inicio,int final){
    int j=0;
    for(;inicio<final;inicio++){
        pagina[j].assign(dataList[inicio]);
        j++;
    }setLinks();
}
void Administrador::doMath(int res){
    this->pivote=res;
    this->inicio=(pivote-1)*9;
    this->limite=(pivote+2)*9;
    this->dataList=this->MetaData.getData(inicio,limite);
}
