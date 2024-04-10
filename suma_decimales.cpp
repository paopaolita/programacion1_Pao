#include <iostream>
using namespace std;

	double calculadora(double num1, double num2, double num3){
		double resultado;
	     resultado = num1 + num2 + num3;
		return resultado;
	}
		
		void mostrarMensaje(){
			system("cls");
			cout << "Hola, ingresa el primer numero: ";
			
		}
			void mostrarMensaje2(){
				system("cls");
				cout << "Hola, ingresa el segundo numero: ";
				
			}
				void mostrarMensaje3(){
					system("cls");
					cout << "Hola, ingresa el tercer numero: ";
					
				}
			int main(int argc, char *argv[]) {
				double num1, num2, num3;
				int control = 1;
				do {
					mostrarMensaje();
					cin >> num1;
					mostrarMensaje2();
					cin >> num2;
					mostrarMensaje3();
					cin >> num3;
					
					double resultado = calculadora(num1, num2, num3);
					cout << endl << "Su resultado es: " << resultado;
					
					cout << endl << "Desea continuar? 1. Si, 2. No";
					cin >> control;
					if (control != 1 && control != 2) {
						control = 1;
						cout << "Por favor siga instrucciones";
					}
					
				}while (control==1);
	return 0;
}

