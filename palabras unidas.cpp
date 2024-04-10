#include <iostream>
using namespace std;

	string palabra(string pal1, string pal2){
		string unidas;
        unidas = pal1 + pal2;
		return unidas;
	}
		
		void mostrarMensaje(){//No recibe nada porque no necesitamos nada
			system("cls");
			cout << "Hola ingresa la primera palabra: " << endl;

		}
			void mostrarMensaje2(){
				system("cls");
			cout << "Hola ingresa la segunda palabra: " << endl;
			}
				
			int main(int argc, char *argv[]) {
				string pal1, pal2;
				int control = 1;
				do {
					mostrarMensaje();
					cin >> pal1;
					mostrarMensaje2();
					cin >> pal2;
					
					string unidas2 = palabra(pal1, pal2);
					cout << endl << "Las palabras son: " << unidas2;
					
					cout << endl << "Desea continuar? 1. Si, 2. No";
					cin >> control;
					if (control != 1 && control != 2) {
						control = 1;
						cout << "Por favor siga instrucciones";
					}
					
				}while (control==1);
	return 0;
}

