// No.4 Medidas de distancias.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
	int x1 = 0, m1 = 0, m2 = 0 ,m3 = 0 ; 
	cout << "Ingresar un Entero de unidad:" << endl;  cin >> x1; 
	cout << "Tener en cuenta que la conversión se efectuará de la siguiente manera:" << endl; 
	cout << "Millas a yarda" << endl;
	cout << "Millas a pies" << endl;
	cout << "Millas a Pulgadas" << endl;
	cout << "En la cual su valor entero ingresado sera de millas" << endl; 
	cout << x1; cout << "millas" <<endl; 
	if (x1 > 0)
	{		
		m1 = (x1 * 1760);
		m2 = (x1 * 5280); 
		m3 = (x1 * 63360);
		cout << "Millas a yardas:" << endl; 
		cout << m1; cout << "yardas" <<endl;
		cout << "Millas a pies:" << endl;
		cout << m2; cout << "pies" <<endl;
		cout << "Millas a pulgadas:" << endl;
		cout << m3; cout << "pulgadas" << endl;

	}
	else 
	{
		cout << "Ingresar un valor entero positivo/ valor numerico no se aceptan caracteres de letras" << endl;
	}

	return 0; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
