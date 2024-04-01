#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int salir;
	cout << "¿Quiero salir de viaje? 1.Si 2.No" << endl;
	cin >> salir;
	
	if(salir == 2) {
		cout << "Entonces quedese en casita y no moleste >:(";
	}
	else if(salir == 1) {
		cout << "¿Quiero ir a un lugar lejano? 1.Si 2.No" << endl;
		cin >> salir;
		
		if(salir == 1) {
			cout << "Elija su transporte: 1.Acuatico o 2. Aereo" << endl;
			cin >> salir;
			
			if(salir == 1) {
				cout << "Usted está apunto de movilizarse mediante un transporte acuatico" << endl;
				cout << "¿Cuentas con boletos para el barco? 1.Si 2.No" << endl;
				cin >> salir;
				
				if(salir == 1) {
					cout << "Disfrute el viaje" << endl;
					cout << "Ha llegado a su destino :D";
				}
				else if(salir == 2) {
					cout << "Lo siento no puedes viajar";	
				}
			}
			else if(salir == 2) {
				cout << "Usted está apunto de movilizarse mediante un transporte aereo" << endl;
				cout << "¿Cuentas con boletos para el avión? 1.Si 2.No" << endl;
				cin >> salir;
				
				if(salir == 1) {
					cout << "Disfrute el viaje" << endl;
					cout << "Ha llegado a su destino :D";
				}
				else if(salir == 2) {
					cout << "Lo siento no puedes viajar";	
				}
			}
		}
		else if (salir == 2) {
			cout << "Usted hara un viaje corto" << endl;
			cout << "Escoja su transporte 1.Carro 2.A pie" << endl;
			cin >> salir;
			
//			if(salir == 1) {
//				cout << "Disfrute el viaje" << endl;
//				cout << "Ha llegado a su destino :D";
//			}
//			else if(salir == 2) {
//				cout << "Espero no te duelan las patitas" << endl;	
//				cout << "Ha llegado a su destino :D";
//			}
//		}
	}
	


		
	return 0;
}

