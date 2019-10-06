#include "linkedlist.h"
#include <iostream>
LinkedList::LinkedList() {
    first=nullptr;
    last= nullptr;
}
LinkedList::LinkedList(string dato) {
    nodoL *temp=new nodoL;
    temp->element=dato;
    temp->next= nullptr;
    first=temp;
    last=temp;
    size++;
}
void LinkedList::addDato(string value) {
    nodoL *temp=new nodoL;
    temp->element=value;
    temp->next=nullptr;
    if(first==nullptr){
        first=temp;
        last=temp;
        temp= nullptr;
    }else{
        last->next=temp;
        last=temp;
    }size++;
}
void LinkedList::editSelection(int position,string value) {
    nodoL *temp=new nodoL;
    temp=first;
    for (int i=0;i<size;i++){
        if (position==i){
            temp->element=value;
        }temp=temp->next;
    }
}
string LinkedList::FindSelection(int position) {
    nodoL *temp=new nodoL;
    temp=first;
    for (int i=0;i<size;i++){
        if (position==i){
            return temp->element;
        }temp=temp->next;
    }
}
