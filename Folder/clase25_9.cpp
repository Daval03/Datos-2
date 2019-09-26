#include "clase25_9_19.h"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <math.h>
using std::time;
using namespace std;
clase25_9_19::clase25_9_19() {}
int clase25_9_19::fibo(int numero) {
    if(numero==0 || numero==1){
        return numero;
    }else{
        return fibo(numero-2)+fibo(numero-1);
    }
}
int clase25_9_19::fiboDynamic(int numero) {
    int fibo[numero+2];
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2;i<=numero;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }return fibo[numero];
}
int clase25_9_19::max(int a[]) {
    return maxaux(a,0,num);
}
int clase25_9_19::maxaux(int a[], int inf, int sup) {
    if(inf==sup)return a[inf];
    int medio = (inf+sup)/2;
    int maxizq= maxaux(a,inf,medio);
    int maxder=maxaux(a,medio+1,sup);
    return maximo(maxizq,maxder);
}
bool clase25_9_19::maximo(int izq, int der) {
    return izq>der?true:false;
}
int main(){
    int numero=40;
    clase25_9_19 hola;
    auto start = std::chrono::system_clock::now();
    int res=hola.fibo(numero);
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout<< "elapsed time: " << elapsed_seconds.count() << "\t"<<"resultado:"<<res<<"\n";

    auto start1 = std::chrono::system_clock::now();
    int res1=hola.fibo(numero);
    auto end1 = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds1 = end1-start1;
    std::time_t end_time1 = std::chrono::system_clock::to_time_t(end1);
    std::cout<< "elapsed time: " << elapsed_seconds1.count() << "\t"<<"resultado:"<<res1<<"\n";
}
