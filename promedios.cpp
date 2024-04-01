#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	int nota5;
	int resultado;
	
	cout << "Ingrese su primera nota:";
	cin >> nota1;
	cout << "Ingrese su segunda nota:";
	cin >> nota2;
	cout << "Ingrese su tercera nota:";
	cin >> nota3;
	cout << "Ingrese su cuarta nota:";
	cin >> nota4;
	cout << "Ingrese su quinta nota:";
	cin >> nota5;
	
	resultado = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
	
	if (resultado < 61) {
		cout << "NO PUEDE HACERSE EL PRIVADO";
	} 
	else if(resultado >= 61 && resultado <= 75) {
		cout << "SI REALIZA TRABAJO COMUNITARIO, PUEDE HACER SU EXAMEN PRIVADO.";
	}
	else if(resultado >= 76 && resultado <= 85) {
		cout << "PROMEDIO NORMAL, PUEDE HACER SU EXAMEN PRIVADO.";
	}
	else if(resultado >= 86 && resultado <= 90) {
		cout << "PROMEDIO ALTO, SI SE GRADUA SERA CON HONORES.";
	}
	else if(resultado >= 91 && resultado <= 95) {
		cout << "PROMEDIO MUY ALTO, SI SE GRADUA SERA CON MAXIMOS HONORES.";
	}
	else if(resultado >= 96 && resultado < 100 ) {
		cout << "PUEDE EXONERARSE DE EXAMEN PRIVADO.";
	}
	return 0;
}

