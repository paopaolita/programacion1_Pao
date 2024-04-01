#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double peso;
	double altura;
	cout << "Ingrese su peso en kilogramos: ";
	cin >> peso;
	cout << "Ingrese su altura en metros: ";
	cin >> altura;
	double resultado;
	
	resultado = peso / (altura * altura);
	
	if (resultado < 18.5) {
		cout << "Peso bajo";	
	}
	else if (resultado >= 18.5 && resultado <= 25) {
		cout << "Peso normal";	
	}
	else if (resultado >= 25 && resultado <= 30) {
		cout << "Sobre peso";	
    }
	else if (resultado > 30) {
		cout << "Usted esta muy obeso";	
	}
	return 0;
}

