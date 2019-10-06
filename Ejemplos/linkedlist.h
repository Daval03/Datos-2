#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
using namespace std;
struct nodoL{
    string element;
    nodoL *next;
};
class LinkedList{
private:
    nodoL *first, *last;
public:
    LinkedList();
    int size=0;
    LinkedList(string dato);
    void addDato(string value);
    void editSelection(int position, string value);
    string FindSelection(int position);
};

#endif // LINKEDLIST_H
