#include <iostream>
using namespace std;

void mensj1(int arr[][2], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j][0] > arr[j + 1][0]) {
			
				swap(arr[j][0], arr[j + 1][0]);
				swap(arr[j][1], arr[j + 1][1]);
			}
		}
	}
}

int main() {
	const int num = 10;
	const int num1 = 2;
	int arr[num][num1];
	
	cout << "Ingrese los números para el arreglo 10x2:" << endl;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num1; j++) {
			cout << "Ingrese el número para la posición [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	

	cout << "\nArreglo antes de ordenar:" << endl;
	for (int i = 0; i < num; i++) {
		cout << arr[i][0] << "-" << arr[i][1] << " ";
	}
	cout << endl;
	

	mensj1(arr, num);
	

	cout << "\nArreglo después de ordenar por la primera columna:" << endl;
	for (int i = 0; i < num; i++) {
		cout << arr[i][0] << "-" << arr[i][1] << " ";
	}
	cout << endl;
	
	return 0;
}
