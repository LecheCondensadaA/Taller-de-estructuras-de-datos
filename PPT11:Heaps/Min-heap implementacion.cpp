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
        }


}
