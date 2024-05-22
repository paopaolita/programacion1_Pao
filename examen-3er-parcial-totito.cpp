#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void imprimirTablero(char tab[3][3]) {
	cout << "Tablero actual:\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tab[i][j] << " ";
		}
		cout << "\n";
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
		
		if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tab[fila][columna] != 'X' && tab[fila][columna] != 'O') {
			tab[fila][columna] = jugador;
			movimientoValido = true;
		} else {
			cout << "Movimiento no válido. Intente de nuevo.\n";
		}
	}
}

void iniciarTablero(char tab[3][3]) {
	char contador = '1';
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			tab[i][j] = contador++;
}

int main() {
	char tab[3][3];
	char jugadorActual;
	bool finDelJuego;
	
	do {
		iniciarTablero(tab);
		srand(time(NULL));
		jugadorActual = (rand() % 2 == 0) ? 'X' : 'O';
		finDelJuego = false;
		
		while (!finDelJuego) {
			system("cls");
			imprimirTablero(tab);
			jugar(tab, jugadorActual);
			
			if (verificarGanador(tab, jugadorActual)) {
				system("cls");
				imprimirTablero(tab);
				cout << "El jugador " << jugadorActual << " ha ganado!\n";
				finDelJuego = true;
			} else if (esEmpate(tab)) {
				system("cls");
				imprimirTablero(tab);
				cout << "Es un empate!\n";
				finDelJuego = true;
			}
			
			jugadorActual = (jugadorActual == 'X') ? 'O' : 'X';
		}
		
		char respuesta;
		cout << "¿Desea volver a jugar? (s/n): ";
		cin >> respuesta;
		if (respuesta != 's' && respuesta != 'S')
			break;
		
	} while (true);
	
	return 0;
}

