#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	const int tam = 15;
	int arr[tam];
	

	srand(time(0));
	
	cout << "Números aleatorios generados: ";
	for (int i = 0; i < tam; i++) {
		arr[i] = rand() % 100; 
		cout << arr[i] << " ";
	}
	cout << endl;
	

	int max = arr[0];
	int min = arr[0];
	
	for (int i = 1; i < tam; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << "El número más grande es: " << max << endl;
	cout << "El número más pequeño es: " << min << endl;
	
	return 0;
}


