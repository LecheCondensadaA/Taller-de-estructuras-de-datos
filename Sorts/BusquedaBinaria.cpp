#include <iostream>
using namespace std;

// Función de búsqueda binaria con arreglo estático
int busquedaBinaria(int arr[], int n, int x) {
    int l = 0;
    int r = n - 1;
    int m = r / 2;  // Inicialización del punto medio

    while (l <= r) {
        if (x == arr[m]) {
            return m;  // Elemento encontrado
        } else if (x < arr[m]) {
            r = m - 1;  // Buscar en la mitad izquierda
        } else {
            l = m + 1;  // Buscar en la mitad derecha
        }
        m = (l + r) / 2;  // Recalcular el punto medio
    }
    return -1;  // Elemento no encontrado
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};  // Arreglo ordenado
    int n = sizeof(arr) / sizeof(arr[0]);   // Tamaño del arreglo
    int x = 12;  // Elemento a buscar

    int resultado = busquedaBinaria(arr, n, x);

    if (resultado != -1) {
        cout << "Elemento encontrado en la posición: " << resultado << endl;
    } else {
        cout << "Elemento no encontrado." << endl;
    }

    return 0;
}
