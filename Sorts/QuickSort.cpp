#include <iostream>
#include <algorithm>
using namespace std;

int partition(int A[], int l, int r) {
	int p = l;
	int pv = A[p];
	for (int i = l + 1; i <= r; i++) {
		if (A[i] <= pv) {
		p++;
		swap(A[i], A[p]);
		}
	}
	swap(A[l], A[p]);
	return p;
}

void quicksort(int A[], int l, int r) {
	if (l < r) {
		int p = partition(A, l, r);
		quicksort(A, l, p - 1);
		quicksort(A, p + 1, r);
	}
}

int main() {
	int A[] = {8, 3, 1, 7, 0, 10, 2};
	int n = sizeof(A) / sizeof(A[0]); //tamaño del array de tamaño n
	for (int i = 0; i < n ;i++){
		cout << A[i] << " ";
	}
	cout << endl;
	quicksort(A, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}

