#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
using namespace std;
int main(){
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1){//creamos el socket
        return 1;
    }
    int port = 54000;//primero establecemos la arquitectura, con la que nos vamos a establecer con el server
    string ipAddress = "127.0.0.1";
    sockaddr_in hint;//Es como la estructura para el server, con el que nos conectaremos
    hint.sin_family = AF_INET;//esta vara si no la endendi muy bien, pero ser clasifica como burocracia
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

    int connectRes = connect(sock, (sockaddr*)&hint, sizeof(hint));//segundo hacemos contacto con el so
    if (connectRes == -1){//Establecer la coneccion del socket server
        return 1;
    }
    char buf[4096];//El loop donde se quedara hasta que, registre la info que el mae escribio en la terminal
    string datoIngresado;
    do{
        cout << "> ";
        getline(cin, datoIngresado);//Registramos lo que, el compa escribe
        int sendRes = send(sock, datoIngresado.c_str(), datoIngresado.size() + 1, 0);//le enviamos los bytes al server
        if (sendRes == -1){
            cout <<"No se pudo enviar la info al server!\r\n";
            continue;
        }memset(buf, 0, 4096);//espera al que me respondan
        int bytesReceived = recv(sock, buf, 4096, 0);//son los bytes de info que me devolvio el server
        if (bytesReceived == -1){
            cout<<"Error con obtener la respuesta del server\r\n";
        }else{//esto se le indica al socket, que el server recibio la info
            cout<<"> El server recibio la info!!!\r\n";
        }
    }while(true);
    close(sock);//cierra el socket
    return 0;
}
