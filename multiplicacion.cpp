#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "hola, pon un n�mero: "; 
	int numero1;
	cin >> numero1;
	cout << "hola, pon otro n�mero: "; 
	int numero2;
	cin >> numero2;
	int resultado;
	resultado = numero1 * numero2;
		cout << "Resultado es: " << resultado;
	return 0;
}

