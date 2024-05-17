#include <iostream>
#include <string>

using namespace std;

string cifrar(const string& cadena) {
	string resu = cadena;
	int longi = resu.length();
	
	for (int i = 0; i < longi; i++) {
		char cara = resu[i];
		switch (cara) {
		case 'i':
		case 'I':
			resu[i] = '1';
			break;
		case 'e':
		case 'E':
			resu[i] = '3';
			break;
		case 'a':
		case 'A':
			resu[i] = '4';
			break;
		case 'o':
		case 'O':
			resu[i] = '0';
			break;
		case 'u':
		case 'U':
			resu[i] = '*';
			break;
		default:
			break;
		}
	}
	
	return resu;
}

int main() {
	string frase, frase1;

	cout << "Ingrese una palabra o frase para cifrarla: ";
	getline(cin, frase);
	
	frase1 = cifrar(frase);
	
	cout << endl << "Frase cifrada: " << frase1 << endl;
	
	return 0;
}

