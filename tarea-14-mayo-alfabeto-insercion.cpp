#include <iostream>
using namespace std;

void mensj1(char arr[], int n) {
	for (int i = 1; i < n; i++) {
		char key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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
