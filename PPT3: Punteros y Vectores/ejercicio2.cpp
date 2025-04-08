/*La secuencia de Finonacci es 0,1,1,2,3,5,8,13,21,43,...
Cree esta serie almacenando sus n primeros términos en un vector. Lea n desde el teclado e
imprima el vector resultante.*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    vector<int> vec(n);

    if (n >= 1) vec[0] = 0;
    if (n >= 2) vec[1] = 1;
    for (int i=2; i<n;i++){
        vec[i] = vec[i-1] + vec[i-2];
    }
    for (int i=0; i<n;i++){
        cout<< vec[i] << " ";
    }
}

