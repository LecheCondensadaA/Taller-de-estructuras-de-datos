#include <iostream>
using namespace std;
void insertionSort(int ar[], int n){
	for (int i=1; i < n; i++){
		int key = ar[i];
		int j = i - 1;
		while (j >= 0 && ar[j] > key) {
			ar[j + 1] = ar[j];
			j--;
		}
		ar[j + 1] = key;
	}
}

void mosAr(int ar[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;
}

int main() {
	int arreglo[] = {12, 11, 13, 5, 6}; //array random con n numeros
	int n = sizeof(arreglo) / sizeof(arreglo[0]);  //Obtiene el tamaño del array
	cout << "Arreglo desordenado: ";
	mosAr(arreglo, n);
	insertionSort(arreglo, n);
	cout << "Arreglo ordenado: ";
	mosAr(arreglo, n);
	return 0;
}
