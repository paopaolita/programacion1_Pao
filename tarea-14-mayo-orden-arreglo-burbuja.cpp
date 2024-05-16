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
	int arr[10] = {5, 2, 9, 1, 5, 6, 7, 3, 8, 4};
	int n = 10;
	
	mensj1(arr, n);
	
	cout << "Orden de arreglo: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

