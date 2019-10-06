#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

using namespace std;

int main(){
    int Receptor = socket(AF_INET, SOCK_STREAM, 0);//creamos el socket, tipo tcp
    if (Receptor == -1){
        cerr<<"No se puede crear el socket, cerrando"<<endl;
        return -1;
    }
    sockaddr_in hint;//Direccion local del socket, tanto su ip como su puerto
    hint.sin_family = AF_INET;//no se pendejadas
    hint.sin_port = htons(54000);
    inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

    bind(Receptor, (sockaddr*)&hint, sizeof(hint));
    listen(Receptor, SOMAXCONN);//El socket esta escuchando
    sockaddr_in client;//Esperamos la conecion al server
    socklen_t clientSize = sizeof(client);
    int clientSocket = accept(Receptor, (sockaddr*)&client, &clientSize);
    char host[NI_MAXHOST];    //burocracia
    char service[NI_MAXSERV];
    memset(host, 0, NI_MAXHOST);
    memset(service, 0, NI_MAXSERV);

    if (getnameinfo((sockaddr*)&client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0){
        //cout << host << "Conectado al puerto " << service << endl;
        cout << "Conectado al puero: " << service << endl;
    }
    else{
        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
        cout << host << "Conectado al puerto " << ntohs(client.sin_port) << endl;
    }
    close(Receptor);//cerramos el socket receptor
    char buf[4096];
    while (true){//while para aceptar el mensaje que el socket me envia y devolverle una respuesta
        memset(buf, 0, 4096);
        // Esperamos al que el socket me envie la info
        int bytesReceived = recv(clientSocket, buf, 4096, 0);//son los bytes de info que me devolvio el server
        if (bytesReceived == -1){
            cerr<<"Error en recv.(),cerrando"<< endl;
            break;
        }if (bytesReceived == 0){
            cout << "Socket desconectado " << endl;
            break;
        }cout <<"serverAQUI:"<<string(buf, 0, bytesReceived) << endl;//aqui indico lo que se resibio del socket, con los bytes
        send(clientSocket, buf, bytesReceived + 1, 0);//le envio al socket que el server lo resibio, que es el mismo mensaje
    }close(clientSocket);//cerrar el socket
    return 0;
}
