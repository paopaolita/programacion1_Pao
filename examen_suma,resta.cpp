#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numero1;
	double numero2;
	char signo;
	cout << "Bienvenido a la calcualdora de sumas y restas Signos para usar, suma: +, resta: - " << endl; 
	cout << "�Que tipo de operaci�n desea hacer?: " ; 
	cin >> signo;
	cout << "Ingresar primer n�mero: " ; 
	cin >> numero1;
	cout << "Ingresar segundo n�mero: " ; 
	cin >> numero2;
	
	if(signo == '+'){
		double resultadosuma = numero1 + numero2; 
		cout << "Resultado de la suma es: " << resultadosuma;
	} 
	
	else if (signo == '-') { 
		double resultadoresta = numero1 - numero2; 
		cout << "Resultado de la resta es: " << resultadoresta;
	}
	else {
		cout << "No eligio un signo valido";
	}
	return 0;
}

