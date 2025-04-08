/*Codifique un programa que lea un entero desde los argumentos del programa, n, y cree un
 v ector de *enteros de largo n. Reutilice la función:
 void llenarAleatorio(vector<int> &v);
 llenando el vectores con valores aleatorios (entre 0 y 100) y luego imprimalo.
 En otra función:
 int moda(vector<int> &v);
 encuentra el elemento más repetido y retorne la posición de la primera vez que este aparece en
 el vector.*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;
//funciones
void llenarAleatorio(vector<int> &v){
    for (int i=0; i<v.size(); i++){
        v[i] = rand() % 100 + 1;
    }
}
void moda(vector<int> &v){

}

//main bruh
int main(){
    srand(time(0));
    int n = 10;
    vector<int> vec(n);
    llenarAleatorio(vec);
    cout<<"Vector: ";
    for (int i=0; i<n; i++){
        cout<<vec1[i]<< " ";
    }
}
