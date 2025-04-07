/* Reciba, desde los argumentos del programa, dos número enteros, l y r , y
cree un código que analice cada entero en [l, r ] e imprima aquellos que
son primos. */

#include <iostream>

using namespace std;

bool esPrimo(int x){
	if (x <= 1){
		return false;
	}
	for (int i = 2; i <= x/2; i++){
		if (x % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int l = 1;
	int r = 8;
	for (int i = l; i<=r ;i++){
		 if (esPrimo(i)==true){
		 	cout<<i<<endl;
		 }
	}
	return 0;
}
