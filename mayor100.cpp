#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	cout << "hola, pon un número para multiplicar: "; 
	cin >> numero1;
	cout << "hola, pon el otro numero: "; 
	cin >> numero2;
	int resultado;
	resultado = numero1 * numero2;
	
	if ( resultado <= 99)
		
		cout << "Resultado menor a 100: " << resultado;
	
	if ( resultado >= 100)
		
		
		cout << "Resultado mayor a 100: " << resultado;
	
	return 0;
}

