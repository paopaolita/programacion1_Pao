#include <iostream>
using namespace std;

void mensj1(char arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int p = 0; p < n - i - 1; p++) {
			if (arr[p] > arr[p + 1]) {
				swap(arr[p], arr[p + 1]);
			}
		}
	}
}

int main() {
	char arr[5];
	int n = 5;
	
	cout << "Ingrese 5 letras mayúsculas: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	mensj1(arr, n);
	
	cout << "Arreglo ordenado: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}


