#include <iostream>
using namespace std;

int main() {
	const int num = 5;  
	int num3[num];
	
	cout << "Ingresa los 5 n�meros para ver cual es el mayor:" << endl; 
	for (int i = 0; i < num; ++i) {
		cout << "Ingrese un n�mero en la posici�n " << i + 1 << ": ";
		cin >> num3[i]; 
	}
	
	int mayor = num3[0];
	
	for (int i = 0; i < num; ++i) {
		if (num3[i] > mayor){ 
			mayor= num3[i];
			
		}
	}
	
	cout << "El numero mayor es: " << mayor << endl;
	
	return 0;
}
