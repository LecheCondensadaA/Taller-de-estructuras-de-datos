#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq; // es un maximo heap por default
    int x;

    do {
        cout << "ingrese un numero distinto a 0:" << endl;
        cin >> x;
        pq.push(x);
    } while (x != 0);

    cout << "Elemento con maxima prioridad: " << pq.top() << endl;

    pq.pop();

    cout << "Se realizo un pop \n \n Ahora el elemento con maxima prioridad es: " << pq.top() << endl;

    return 0;
}
