#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	cout << "Hola, ingresa el primer n�mero: "; 
	cin >> numero1;
	cout << "Ingresa el segundo n�mero: "; 
	cin >> numero2;
    cout << "Ingresa el tercer n�mero: "; 
	cin >> numero3;
	cout << "Ingresa el cuarto n�mero: "; 
	cin >> numero4;
	cout << "Ingresa el quinto n�mero: "; 
	cin >> numero5;
	int resultadosuma = numero3 + numero4;            
	int resultadoresta = numero1 - numero5;
	int resultadomultipli = resultadoresta * resultadosuma;
	
	cout << "El resultado de la suma es: " << resultadosuma << endl;
	cout << "El resultado de la resta es: " << resultadoresta << endl;
	cout << "El resultado de la multiplicaci�n es: " << resultadomultipli << endl;
	
	
	return 0;
}

