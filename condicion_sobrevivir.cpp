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
		cout << "El barco sufrió daños 1.Si 2.No" << endl;
		cin >> salir;
		
		if(salir == 1) {
			cout << "Fue muy grave 1.Si o 2.No" << endl;
			cin >> salir;
			
			if(salir == 1) {
				cout << "Usted se desmayó y apareció en el Himalaya" << endl;
				cout << "¿Cómo va a tomar la noticia? 1.Bien 2.Mal" << endl;
				cin >> salir;
				
				if(salir == 2) {
					cout << "Decidió el camino del suicidio" << endl;
					cout << "*se suicida*" << endl;
					cout << "Lamentablemente murió";
				}
				else if(salir == 1) {
					cout << "*Reza un padre nuestro* y sigue adelante" << endl;    
					cout << "¿Cómo vamos a salir de esto? 1.Queriendo salir de la isla 2.Quedarme a vivir" << endl;
					cin >> salir;
					
					if(salir == 2) {
						cout << "Explotó los recursos y me vuelvo Bob el constructor" << endl;
						cout << "Construyo una vida, convivo con los animales y mi yo superior" << endl;
						cout << "¿Vino alguien? 1.Me van a rescatar 2.No me van a rescatar" << endl;
						cin >> salir;
						
						if(salir == 2) {
							cout << "Vive lo más que pueda" << endl;
							cout << "*muere por hipotermia*" << endl;
							cout << "Lamentablemente murió";
						}
						else if(salir == 1) {
							cout << "Agradezco a papá Dios" << endl;    
							cout << "Regreso a mi cerro" << endl;
							cout << "Me curo y sobrevivo" << endl;
							cout << "Me hace un documental de Netflix" << endl;
						}
					}
					else if(salir == 1) {
						cout << "Explotó recursos y hago un bote" << endl;    
						cout << "Ya hice el bote 1.Se hundió 2.Llegué" << endl;
						cin >> salir;
						
						if(salir == 1) {
							cout << "Se te desmoronó como salud mental en ingeniería ;(" << endl;
							cout << "*caíste al agua y te comió un tiburón*" << endl;
							cout << "Lamentablemente murió";
						}
						else if(salir == 2) {
							cout << "Agradezco a papá Dios" << endl;    
							cout << "Regreso a mi cerro" << endl;
							cout << "Me curo y sobrevivo" << endl;
							cout << "Me hace un documental de Netflix" << endl;
						}
					}
				}
			}
			else if(salir == 2) {
				cout << "Usted se desmayó y lo rescataron" << endl;
				cout << "Lo curan" << endl;
				cout << "Sobrevive";
			}
		}
	}
	
	return 0;
}



