// 6. Cantidad de healdos a solicitar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int hl = 0; 
    cout << "Programa para determinar que sabor de helado desea en su helado" << endl; 
    cout << "¿Qué cantidad de helados desea colocar" << endl; cin >> hl; 
    if (hl > 0 && hl <= 6)
    {
        for (int i = 1; i <= hl; i++)
        {
            cout << "¿Que sabor de helado desea para la bola No."; cout << i; cout <<"?" << endl; 
            cout << "Sabor Fresa" << endl; 
            cout << "Sabor Vainilla" << endl;
            cout << "Sabor Chocolate" << endl;
            cout << "Sabor Galleta Oreo" << endl;
            cout << "Sabor Naranja" << endl;
            cout << "Sabor Limon" << endl;
            cout << "_____________________" << endl;
        }
    }
    else
    {
        cout << "Por favor tomar en cuenta que la cantidad máxima es 6" << endl; 
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
