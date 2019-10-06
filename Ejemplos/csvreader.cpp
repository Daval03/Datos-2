#include <iostream>
#include <fstream>
#include <vector>
#include "sstream"
#include "csvreader.h"
#include <boost/algorithm/string.hpp>
using namespace std;
CSVReader::CSVReader(string filename, string delm) {
    this->fileName=filename;
    this->delimitacion=delm;
}
void CSVReader::setData(string file, string deli){
    this->fileName=file;
    this->delimitacion=deli;
}
CSVReader::CSVReader() {}
vector<std::string> CSVReader::getData(int inicio,int limite) {
    ifstream file(fileName);
    vector<std::string>dataList;
    string line = "";
    int i=1;
    while(getline(file, line)){
        if(inicio<i && i<=limite){
            dataList.push_back(line);
        }i++;
    }
    file.close();
    return dataList;
}
vector<std::string> CSVReader::getFirstData(int inicio,int final){
    ifstream file(fileName);
    vector<std::string>dataList;
    string line = "";
    int i=1;
    for(int j=0;j<9;j++){
        dataList.push_back("");
    }while(getline(file, line)){
        if(inicio<i && i<=final){
            dataList.push_back(line);
        }i++;
    }
    file.close();
    return dataList;
}
