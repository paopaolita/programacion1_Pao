#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nota1;
	int nota2;
	int nota3;
	cout << "Ingrese la primera nota del alumno: " << endl;
	cin >> nota1;
	cout << "Ingrese la segunda nota del alumno: " << endl;
	cin >> nota2;
	cout << "Ingrese la tercera nota del alumno: " << endl;
	cin >> nota3;
	if (nota1 >= 61  && nota2 >= 61 && nota3 >= 61) {
		cout << "Felicidades gano!!!!" << endl;	
	}
	else {
		cout << "Debe cursos en limpio";
	}
	return 0;
}

