#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	cout << "hola, pon un n�mero para restar: "; 
	cin >> numero1;
	cout << "hola, pon el otro n�mero: "; 
	cin >> numero2;
	int resultado;
	resultado = numero1 - numero2;

	if ( resultado <= 0)
	
		cout << "Resultado es negativo: " << resultado;
	
	if ( resultado >= 1)
		
	
		cout << "Resultado es positivo: " << resultado;
	
	return 0;
}

