#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int salir;
	cout << "Usted se encuentra en un barco" << endl;
	cout << "El barco tiene problemas 1.Si 2.No" << endl;
	cin >> salir;
	
	if(salir == 2) {
		cout << "Se sigue el viaje" << endl;
		cout << "NO MURIO YEIY" << endl;
	}
	else if(salir == 1) {
		cout << "El barco sufri� da�os 1.Si 2.No" << endl;
		cin >> salir;
		
		if(salir == 1) {
			cout << "Fue muy grave 1.Si o 2.No" << endl;
			cin >> salir;
			
			if(salir == 1) {
				cout << "Usted se desmay� y apareci� en el Himalaya" << endl;
				cout << "�C�mo va a tomar la noticia? 1.Bien 2.Mal" << endl;
				cin >> salir;
				
				if(salir == 2) {
					cout << "Decidi� el camino del suicidio" << endl;
					cout << "*se suicida*" << endl;
					cout << "Lamentablemente muri�";
				}
				else if(salir == 1) {
					cout << "*Reza un padre nuestro* y sigue adelante" << endl;    
					cout << "�C�mo vamos a salir de esto? 1.Queriendo salir de la isla 2.Quedarme a vivir" << endl;
					cin >> salir;
					
					if(salir == 2) {
						cout << "Explot� los recursos y me vuelvo Bob el constructor" << endl;
						cout << "Construyo una vida, convivo con los animales y mi yo superior" << endl;
						cout << "�Vino alguien? 1.Me van a rescatar 2.No me van a rescatar" << endl;
						cin >> salir;
						
						if(salir == 2) {
							cout << "Vive lo m�s que pueda" << endl;
							cout << "*muere por hipotermia*" << endl;
							cout << "Lamentablemente muri�";
						}
						else if(salir == 1) {
							cout << "Agradezco a pap� Dios" << endl;    
							cout << "Regreso a mi cerro" << endl;
							cout << "Me curo y sobrevivo" << endl;
							cout << "Me hace un documental de Netflix" << endl;
						}
					}
					else if(salir == 1) {
						cout << "Explot� recursos y hago un bote" << endl;    
						cout << "Ya hice el bote 1.Se hundi� 2.Llegu�" << endl;
						cin >> salir;
						
						if(salir == 1) {
							cout << "Se te desmoron� como salud mental en ingenier�a ;(" << endl;
							cout << "*ca�ste al agua y te comi� un tibur�n*" << endl;
							cout << "Lamentablemente muri�";
						}
						else if(salir == 2) {
							cout << "Agradezco a pap� Dios" << endl;    
							cout << "Regreso a mi cerro" << endl;
							cout << "Me curo y sobrevivo" << endl;
							cout << "Me hace un documental de Netflix" << endl;
						}
					}
				}
			}
			else if(salir == 2) {
				cout << "Usted se desmay� y lo rescataron" << endl;
				cout << "Lo curan" << endl;
				cout << "Sobrevive";
			}
		}
	}
	
	return 0;
}



