#include <iostream>
using namespace std;

int global = 6;

void mostrarMensaje(int numero) {
	int valor = 0; 
		cout << "El valor de la variable local de la funcion es:  " << valor << endl;
	cout << "El  valor de la variable parametro de la funcion es:  " << numero << endl;
	cout << "El valor de la variable global de la funcion es:  " << global << endl;
}
int main(int argc, char *argv[]) {
	int numero = 3;
	mostrarMensaje(numero);
	
		return 0;
}

