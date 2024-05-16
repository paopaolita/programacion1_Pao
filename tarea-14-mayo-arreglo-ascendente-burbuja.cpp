#include <iostream>
using namespace std;

void mensj1(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int p = 0; p < n - i - 1; p++) {
			if (arr[p] > arr[p + 1]) {
				swap(arr[p], arr[p + 1]);
			}
		}
	}
}

int main() {
	int arr[8] = {556, 200, 39, 11, 5, 45, 7, 3};
	int n = 8;
	
	mensj1(arr, n);
	
	cout << "Orden de arreglo ascendente: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
