#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> min_pq;
    int x;

    do {
        cout << "ingrese un numero distinto a 0:" << endl;
        cin >> x;
        min_pq.push(x);
    } while (x != 0); //se realizara aunque sea 1 vez

    cout << "Elemento con maxima prioridad: " << min_pq.top() << endl;

    min_pq.pop();

    cout << "Se realizo un pop \n \nAhora el elemento con maxima prioridad es: " << min_pq.top() << endl;

    return 0;
}
