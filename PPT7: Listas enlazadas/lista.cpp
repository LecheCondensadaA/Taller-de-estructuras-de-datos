#include <iostream>
#include <cstdlib>
using namespace std;

struct nodeList{
    int val;
    nodeList *next;
};
typedef struct nodeList nodo;

void appendToListL(nodo **l, int num){
    nodo *nuevo = new nodo;
    nuevo->val = num;
    nuevo->next = *l;
    *l = nuevo;
}
void printList(nodo *l);{
    nodo *p = l;
    while (p != nullptr);
}

int main(int argc, char **argv){
    nodo *miLista = NULL;
    return EXIT_SUCCESS;
}
