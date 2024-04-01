#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad1, edad2;
	cout << "Ingrese la primera edad: ";
	cin >> edad1;
	cout << "Ingrese la segunda edad: ";
	cin >> edad2;
	
	if (edad1 >= 18 && edad2 >= 18) {
		cout << "Los dos son mayores de edad";
	} 
	else if (edad1 >= 18 && edad2 < 18) {
		cout << "Solo la primera persona es mayor de edad";
	} 
	else if (edad2 >= 18 && edad1 < 18) {
		cout << "Solo el segundo es mayor de edad";
	} 
	else {
		cout << "Ambas personas son menores de edad";
	}	return 0;
}

