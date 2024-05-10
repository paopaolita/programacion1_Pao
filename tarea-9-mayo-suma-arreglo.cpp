#include <iostream>
using namespace std;

int main() {
	const int num = 5;  
	int num2[num];
	int suma = 0;
	
	cout << "Ingresa los 5 números para realizar la suma: " << endl;
	
	for (int i = 0; i < num; ++i) {
		cout << "Ingrese un número en la posición " << i + 1 << ": ";
		cin >> num2[i]; 
		suma += num2[i];  
	}
	
	cout << "La suma total de los números ingresados es: " << suma << endl;
	
	return 0;
}
