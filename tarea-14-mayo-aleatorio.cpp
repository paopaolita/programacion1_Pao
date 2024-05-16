#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	const int tam = 15;
	int arr[tam];
	

	srand(time(0));
	
	cout << "N�meros aleatorios generados: ";
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

	cout << "El n�mero m�s grande es: " << max << endl;
	cout << "El n�mero m�s peque�o es: " << min << endl;
	
	return 0;
}


