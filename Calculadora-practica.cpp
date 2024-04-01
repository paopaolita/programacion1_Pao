#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numero1;
	double numero2;
	char signo;
	
	cout << "Bienvenido a la calcualdora :D Signos para usar, suma: +, resta: -, multiplicación: *, división: /" << endl; 
	cout << "¿Que tipo de operación desea hacer?: " ; 
	cin >> signo;
	cout << "Ingresar primer número: " ; 
	cin >> numero1;
	cout << "Ingresar segundo número: " ; 
	cin >> numero2;
	
	if(signo == '+'){
		double resultadosuma = numero1 + numero2; 
		cout << "Resultado de la suma es: " << resultadosuma;
	} 
	
	else if (signo == '-') { 
		double resultadoresta = numero1 - numero2; 
		cout << "Resultado de la resta es: " << resultadoresta;
	}
	else if (signo == '*') { 
		double resultadomultipli = numero1 * numero2; 
		cout << "Resultado de la multiplicación es: " << resultadomultipli;
	}
	else if (signo == '/') { 
		double resultadodivision = numero1 / numero2; 
		cout << "Resultado de la división es: " << resultadodivision;
	}
	
	else {
		cout << "No eligio un signo valido";
	}
	return 0;
}

