#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double radio;
	cout << "Ingrese el radio para calcular el area de un circulo: ";
	cin >> radio;
	double pi = 3.141592132741;
	double area;
	area = pi * (radio * radio);
	cout << "El area es: " << area;
	return 0;
}

