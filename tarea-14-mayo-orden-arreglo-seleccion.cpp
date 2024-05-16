#include <iostream>
using namespace std;

void mensj1(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int camb = i;
		for (int p = i + 1; p < n; p++) {
			if (arr[p] < arr[camb]) {
				camb = p;
			}
		}
		swap(arr[i], arr[camb]);
	}
}

int main() {
	int arr[10] = {35, 27, 987, 1, 5, 6, 7, 3, 8, 4};
	int n = 10;
	
	mensj1(arr, n);
	
	cout << "Orden de arreglo: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

