#include <iostream>
using namespace std;

int main() {
	
	const int tam1 = 1;
	const int tam2 = 4;
	const int tam3 = 10;
	const int tam4 = 25;
	const int tam5 = 17;
	
	int arr1[tam1];
	int arr2[tam2];
	int arr3[tam3];
	int arr4[tam4];
	int arr5[tam5];
	
	auto uvrmostrar = [](int* arr, int tam) {
		for (int i = 0; i < tam; i++) {
			cout << "Ingrese un n�mero para el arreglo de tama�o " << tam << ": ";
			cin >> arr[i];
			cout << "N�mero ingresado: " << arr[i] << endl;
		}
	}; //se investigo uso de auto para facilidad https://learn.microsoft.com/es-es/cpp/cpp/auto-cpp?view=msvc-170
	
	
	uvrmostrar(arr1, tam1);
	uvrmostrar(arr2, tam2);
	uvrmostrar(arr3, tam3);
	uvrmostrar(arr4, tam4);
	uvrmostrar(arr5, tam5);
	
	return 0;
}



