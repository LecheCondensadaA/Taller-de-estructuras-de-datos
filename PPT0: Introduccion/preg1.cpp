#include <iostream>

using namespace std;

void insertionSort(int array[], int largo) {
  for (int pasos = 1; paso < largo; paso++) {
    int copia = array[paso];
    int j = paso - 1;
    while (j >=0 && copia < array[j]) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = copia;
  }
}


int main(){
	int x[3];
	int n = 3;
	cout << "Ingrese un numero" << endl << "Primer numero: " << endl;
	cin >> x[0];
	cout << "Segundo numero: " << endl;
	cin >> x[1];
	cout << "Tercer numero: " << endl;
	cin >> x[2];
	insertionSort(x, n);
	    cout << "Arreglo ordenado: ";
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
	return 0;
}
