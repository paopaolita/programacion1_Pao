#include <iostream>
using namespace std;

int main() {
	const int num = 5;  
	double num2[num];
	double suma = 0.0;
	
	cout << "Ingresa tus 5 notas para calcular el promedio: " << endl;
	
	for (int i = 0; i < num; ++i) {
		cout << "Ingrese un número en la posición " << i + 1 << ": ";
		cin >> num2[i]; 
		suma += num2[i];  
	}
	
	double prom = suma / num;
	
	cout << "Su promedio es: " << prom << endl;
	
	return 0;
}

