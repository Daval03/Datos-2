#ifndef CSVREADER_H
#define CSVREADER_H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class CSVReader {
public:
    string fileName;
    string delimitacion;
    vector<std::string> getData(int inicio,int limite);
    CSVReader(string filename,string delm);
    CSVReader();
    void setData(string file,string deli);
    vector<std::string> getFirstData(int inicio,int limite);
};

#endif // CSVREADER_H
