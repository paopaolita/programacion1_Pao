#include <iostream>
using namespace std; 

void multipli(int num) {
	cout << "M�ltiplos de " << num << ": ";
	for (int wirii = 1; wirii <= 10000 ; ++wirii) {
		if (wirii % num == 0) {
			cout << wirii << " ";
		}
	}
	cout << endl;
}

void fact(int num) {
	int fact = 1;
	for (int wiro = 1; wiro <= num; ++wiro) {
		fact *= wiro;
	}
	cout << "Factorial de " << num << ": " << fact << endl;
}

void Fibo(int num) {
	int a = 0, b = 1, c;
	cout << "Serie de Fibonacci: " << num << ":" << endl;
	cout << a << " " << b << " "; 
	
	for (int wiro = 2; wiro < num; ++wiro) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	cout << endl;
}
void mostrarMensaje(){
	system("cls");
	cout << "Hola, ingresa el primer numero: ";
	
}
	void mostrarMensaje2(){
		system("cls");
		cout << "Seleccione una acci�n:" << endl;
		cout << "1. Encontrar m�ltiplos del n�mero." << endl;
		cout << "2. Calcular el factorial del n�mero." << endl;
		cout << "3. Calcular la serie de Fibonacci del n�mero." << endl;
		
	}
int main(int argc, char *argv[]) {
	int num, acc;
	int control = 1;
	do {
		mostrarMensaje();
		cin >> num;
		mostrarMensaje2();
		cin >> acc;
		
		switch (acc) {
		case 1:
			multipli(num);
			break;
		case 2:
			fact(num);
			break;
		case 3:
			Fibo(num);
			break;
		default:
			cout << "Opci�n no v�lida." << endl;
			break;
		}
		
		cout << endl << "Desea continuar? 1. Si, 2. No";
		cin >> control;
		if (control != 1 && control != 2) {
			control = 1;
			cout << "Por favor siga instrucciones";
		}
		
	}while (control==1);
	
	return 0;
}


