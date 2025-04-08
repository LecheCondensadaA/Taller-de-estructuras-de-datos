/*Codifique un programa que lea dos enteros desde los argumentos del programa, n y m, y cree 2
vectores de enteros de largos n y m respectivamente. En una función: void llemarAleatorio(vector<int> &v);
llene cada uno de los vectores con valores aleatorios (entre 0 y 100) y luego los imprima por
separado */
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

//main bruh
int main(){
    srand(time(0));
    int n = 2;
    int m = 6;
    vector<int> vec1(n);
    vector<int> vec2(m);
    llenarAleatorio(vec1);
    llenarAleatorio(vec2);
    cout<<"Primer vector: ";
    for (int i=0; i<n; i++){
        cout<<vec1[i]<< " ";
    }
    cout<<endl<<"Segundo vector: ";
    for (int i=0; i<m; i++){
        cout<<vec2[i] << " ";
    }
}
