#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int numero3;
	
	cout << "Hola, ingresa el primer n�mero para realizar la suma: "; 
	cin >> numero1;
	cout << "Ingresa el segundo n�mero: "; 
	cin >> numero2;
	cout << "Ingresa el tercer n�mero para realizar la resta: "; 
	cin >> numero3;
	int resultadosuma = numero1 + numero2;            
	int resultadoresta = resultadosuma - numero3;
	
	cout << "El resultado de la suma es: " << resultadosuma << endl;
	cout << "El resultado de la resta es: " << resultadoresta << endl;
	
	return 0;
}

