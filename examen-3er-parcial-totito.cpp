#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void imprimirTablero(char tab[3][3]) {
	cout << "Tablero actual:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
}

bool verificarGanador(char tab[3][3], char jugador) {
	for (int i = 0; i < 3; i++) {
		if (tab[i][0] == jugador && tab[i][1] == jugador && tab[i][2] == jugador)
			return true;
		if (tab[0][i] == jugador && tab[1][i] == jugador && tab[2][i] == jugador)
			return true;
	}
	if ((tab[0][0] == jugador && tab[1][1] == jugador && tab[2][2] == jugador) ||
		(tab[0][2] == jugador && tab[1][1] == jugador && tab[2][0] == jugador))
		return true;
	
	return false;
}

bool esEmpate(char tab[3][3]) {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (tab[i][j] != 'X' && tab[i][j] != 'O')
				return false;
	return true;
}

void jugar(char tab[3][3], char jugador) {
	int fila, columna;
	bool movimientoValido = false;
	
	while (!movimientoValido) {
		cout << "Jugador " << jugador << ", ingrese fila y columna (0-2): ";
		cin >> fila >> columna;
		
		if (cin.fail() || fila < 0 || fila > 2 || columna < 0 || columna > 2 || tab[fila][columna] == 'X' || tab[fila][columna] == 'O') {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Movimiento no válido. Intente de nuevo." << endl;
		} else {
			tab[fila][columna] = jugador;
			movimientoValido = true;
		}
	}
}

void iniciarTablero(char tab[3][3]) {
	char contador = '1';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tab[i][j] = contador++;
		}
	}
}

void mostrarInstrucciones() {
	string reg;
	cout << "¡Buenos días! Vamos a explicar las reglas del juego." << endl;
	cout << "¿Estás listo? (si/no): ";
	cin >> reg;
	if (reg == "si" || reg == "Si") {
		cout << "Muy bien, empecemos:" << endl;
		cout << "Los números del tablero se dividen de la siguiente manera:" << endl;
		cout << "Fila 0 --> 1 2 3" << endl;
		cout << "Fila 1 --> 4 5 6" << endl;
		cout << "Fila 2 --> 7 8 9" << endl;
		cout << "Primero se pone el número de la fila de manera horizontal, luego la columna vertical." << endl;
	} else {
		cout << "Entonces, ¿para qué preguntas? ¡Jajaja!" << endl;
	}
}

int main() {
	char tab[3][3];
	char jugadorActual;
	bool finDelJuego;
	
	mostrarInstrucciones();  
	
	do {
		iniciarTablero(tab);
		srand(time(NULL));
		jugadorActual = (rand() % 2 == 0) ? 'X' : 'O';
		finDelJuego = false;
		
		while (!finDelJuego) {
			imprimirTablero(tab);
			jugar(tab, jugadorActual);
			
			if (verificarGanador(tab, jugadorActual)) {
				imprimirTablero(tab);
				cout << "¡El jugador " << jugadorActual << " ha ganado!" << endl;
				finDelJuego = true;
			} else if (esEmpate(tab)) {
				imprimirTablero(tab);
				cout << "¡Es un empate!" << endl;
				finDelJuego = true;
			}
			
			jugadorActual = (jugadorActual == 'X') ? 'O' : 'X';
		}
		
		string respuesta;
		cout << "¿Desea volver a jugar? (s/n): ";
		cin >> respuesta;
		if (respuesta != "s" && respuesta != "S") {
			break;
		}
	} while (true);
	
	return 0;
}
