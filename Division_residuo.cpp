#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	
	cout << "Hola, ingresa el primer n�mero: "; 
	cin >> numero1;
	cout << "Ingresa el segundo n�mero: "; 
	cin >> numero2;
	
	int resultadodiv = numero1 / numero2;            
	int residuo = numero1 % numero2;
	
	cout << "El resultado de la divisi�n es: " << resultadodiv << endl;
	cout << "El residuo de la divisi�n es: " << residuo << endl;
	
	
	return 0;
}

