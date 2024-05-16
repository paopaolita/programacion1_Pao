#include <iostream>
using namespace std;

void mensj1(char arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int mid = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				mid = j;
			}
		}
		swap(arr[i], arr[mid]);
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

