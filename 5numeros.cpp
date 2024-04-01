#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	cout << "Hola, ingresa el primer número: "; 
	cin >> numero1;
	cout << "Ingresa el segundo número: "; 
	cin >> numero2;
    cout << "Ingresa el tercer número: "; 
	cin >> numero3;
	cout << "Ingresa el cuarto número: "; 
	cin >> numero4;
	cout << "Ingresa el quinto número: "; 
	cin >> numero5;
	int resultadosuma = numero3 + numero4;            
	int resultadoresta = numero1 - numero5;
	int resultadomultipli = resultadoresta * resultadosuma;
	
	cout << "El resultado de la suma es: " << resultadosuma << endl;
	cout << "El resultado de la resta es: " << resultadoresta << endl;
	cout << "El resultado de la multiplicación es: " << resultadomultipli << endl;
	
	
	return 0;
}

