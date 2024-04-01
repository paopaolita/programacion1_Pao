#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int lado1;
	int lado2;
	int lado3;
	cout << "Ingrese la longitud del primer lado del triangulo: " << endl;
	cin >> lado1;
	cout << "Ingrese la longitud del segundo lado del triangulo: " << endl;
	cin >> lado2;
	cout << "Ingrese la longitud del tecer lado del triangulo: " << endl;
	cin >> lado3;
	if (lado1 == lado2 && lado1 == lado3) {
		cout << "Es un triangulo equilatero" << endl;	
	}
	else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		cout << "El triángulo es isósceles." << endl;
	}
	else {
		cout << "El triangulo es escaleno";
	}

	return 0;
}

