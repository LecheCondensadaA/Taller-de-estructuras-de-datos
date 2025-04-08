/*
E1. imprimirMatriz.cpp
 C ree una matriz de n por m, donde n y m son enteros leídos desde el teclado (en*trada estándar).
 Luego recorra la matriz almacenando elementos aleatorios entre 100 y 999. Realice además:
 - Recorra la matriz e imprima cada celda de ella. Luego codifique una función:
 void listarDigitos(int x);// lista los dígitos de x separados por espacios en blanco
 Use esta función para listar los dígitos de cada una de las celdas de su matriz
 */

#include<iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void listarDigitos(int x) {
    while (x > 0) {
        cout << x % 10 << " ";
        x /= 10;
    }
    cout << endl;
}

int main(){
    int m,n;
    srand(time(0));
    cout << "que valor tendra n¿: " << endl;
    cin >> n;
    cout << "que valor tendra m¿: " << endl;
    cin >> m;
    int arreglo[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            arreglo[i][m] = rand() % 900 + 100;
        }
    }
    cout << "Matriz de números aleatorios entre 100 y 999:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arreglo[i][j] << "\t";  // Imprime cada valor
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Dígitos de " << arreglo[i][j] << ": ";
            listarDigitos(arreglo[i][j]);
        }
    }
}
