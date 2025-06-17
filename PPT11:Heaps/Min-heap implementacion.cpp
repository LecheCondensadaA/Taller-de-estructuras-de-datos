#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MinHeap {
private:
        vector<int> heap;

        void heapifyUp(int indice) {
            while (indice > 0 && heap[parent(indice)] > heap[indice]) {
                swap(heap[parent(indice)], heap[indice]);
                indice = parent(indice);
            }
        }

        void heapifyDown(int indice) {
            int izq = leftChild(indice); //define hijo izquierdo
            int der = rightChild(indice); //define hijo izquierdo
            int chikito = indice;

            if (izq < heap.size() && heap[izq] < heap[chikito]) // chikito al hijo izquierdo si este es menor al derecho
                chikito = izq;

            if (der < heap.size() && heap[der] < heap[chikito]) // chikito al hijo derecho si este es menor al izquierdo
                chikito = der;

            if (chikito != indice){
                swap(heap[indice], heap[chikito]);
                heapifyDown(chikito);
            }
        }

        int parent(int i) { return (i-1)/2; } //calcula el indice dell padre/ancestro
        int leftChild(int i) { return 2*i+1; } //calcula el indice del hijo izquierdo en posicion i
        int rightChild(int i) { return 2*i+2; } //calcula el indice del hijo derecho en posicion i

public:
    void inserta(int val){
        heap.push_back(val);
        heapifyUp(heap.size()-1);
    }

    int extraeMin() {
        if (heap.empty()) throw runtime_error("El Heap esta vacio"); //si el heap esta vacio lanza el aviso

        int raiz = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return raiz;
    }

    bool empty() const { return heap.empty(); }
};

int main(){
    MinHeap h;
    //insertamos 10, 5 y 20 y lo ordenara automaticamente
    h.inserta(10);
    h.inserta(5);
    h.inserta(20);

    cout << "Extraido: " << h.extraeMin() << "\n"; // va a extraer el 5
    cout << "Extraido: " << h.extraeMin() << "\n"; // va a extraer el 10

    return 0;
}
