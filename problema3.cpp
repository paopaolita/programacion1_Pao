// problema3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <math.h> 
using namespace std; 

int main()
{
    string a = "si"; 
    string b = "no"; 
    string c;
    cout << "Adquisición de tarjeta de debito" << endl; 
    cout << "¿Es mayor de edad?" << endl; cin >> c;
    if (c == a)
    {
        cout << "Proceder a dirigirse a un banco de confianza" << endl;
        cout << "¿Tiene los documentos necesarios?" << endl; cin >> c;
        if (c == a)
        {
            cout << "Se procede alistar los documentos" << endl;
            cout << "Se procede a dirigirse al banco a presentar los documentos" << endl;
            cout << "¿Fueron los documentos aceptados?" << endl; cin >> c; 
            if (c == a)
            {
                cout << "Proceder a esperar la fecha para recoger la tarjeta" << endl;
                cout << "Se procede a presentarse al banco en la fecha correspondiente y firmar los documentos necesarios" << endl;
                cout << "Posteriormente se debe utilizar la tarjeta correctamente" << endl;
                cout << "FIN 1" << endl;
            }
            else if (c == b)
            {
                cout << "¿Le urge tener la tarjeta?" << endl; cin >> c;
                if (c == a)
                {
                    cout << "Probar nuevamente en otro banco" << endl;
                    cout << "¿Fueron los datos aprobados?" << endl; cin >> c;
                    if (c == a)
                    {
                        cout << "Proceder a esperar la fecha para recoger la tarjeta" << endl;
                        cout << "Se procede a presentarse al banco en la fecha correspondiente y firmar los documentos necesarios" << endl;
                        cout << "Posteriormente se debe utilizar la tarjeta correctamente" << endl;
                        cout << "FIN 1" << endl;
                    }
                    else if (c == b)
                    {
                        cout << "Proceder a rendirse" << endl;
                        cout << "FIN 2" << endl;
                    }
                }
                else if (c == b)
                {
                    cout << "Realizarlo en otro momento determinado" << endl;
                    cout << "FIN 3" << endl;
                }
            }
        }
        else if (c == b)
        {
            cout << "Se procede a buscar y tramitar los documentos necesarios" << endl;
            cout << "Posteriormente se procede a dirigirse y presentar al banco a presentar los documentos " << endl;
            cout << "¿Fueron los documentos aceptados?" << endl; cin >> c;
            if (c == a)
            {
                cout << "Proceder a esperar la fecha para recoger la tarjeta" << endl;
                cout << "Se procede a presentarse al banco en la fecha correspondiente y firmar los documentos necesarios" << endl;
                cout << "Posteriormente se debe utilizar la tarjeta correctamente" << endl;
                cout << "FIN 1" << endl;
            }
            else if (c == b)
            {
                cout << "Le urge tanto la tarjeta" << endl; cin >> c; 
                if (c == a)
                {
                    cout << "Probar nuevamente en otro banco" << endl;
                    cout << "¿Fueron los datos aprobados?" << endl; cin >> c;
                    if (c == a)
                    {
                        cout << "Proceder a esperar la fecha para recoger la tarjeta" << endl;
                        cout << "Se procede a presentarse al banco en la fecha correspondiente y firmar los documentos necesarios" << endl;
                        cout << "Posteriormente se debe utilizar la tarjeta correctamente" << endl;
                        cout << "FIN 1" << endl;
                    }
                    else if (c == b)
                    {
                        cout << "Proceder a rendirse" << endl;
                        cout << "FIN 2" << endl;
                    }
                }
                else if (c == b)
                {
                    cout << "Proceder a realizarlo en otro momento" << endl; 
                    cout << "FIN 3" << endl; 
                }
            }                    
        }
        
    }
    else if (c == b)
    {
        cout << "¿Necesita de verdad tener una tarjeta de debito?" << endl; cin >> c; 
        if (c == a)
        {
            cout << "Pedir ayuda a un padre o familiar" << endl;
            cout << "Posteriormente presentar los documentos necesarios" << endl;
            cout << "¿Fueron los documentos aceptados?" << endl; cin >> c;
            if (c == a)
            {
                cout << "Proceder a esperar la fecha para recoger la tarjeta" << endl;
                cout << "Se procede a presentarse al banco en la fecha correspondiente y firmar los documentos necesarios" << endl;
                cout << "Posteriormente se debe utilizar la tarjeta correctamente y bajo la vigilancia de los padres" << endl;
                cout << "FIN 4" << endl;
            }
            else if (c == b)
            {
                cout << "Proceder a probar de nuevo en otro banco" << endl; 
                cout << "Proceder nuevamente a presentar los documentos" << endl;
                cout << "¿Fueron los documentos aceptados?" << endl; cin >> c;
                if (c == a)
                {
                    cout << "Proceder a esperar la fecha para recoger la tarjeta" << endl;
                    cout << "Se procede a presentarse al banco en la fecha correspondiente y firmar los documentos necesarios" << endl;
                    cout << "Posteriormente se debe utilizar la tarjeta correctamente y bajo la vigilancia de los padres" << endl;
                    cout << "FIN 4" << endl;
                }
                else if (c == b)
                {
                    cout << "Proceder a rendirse e intentarlo nuevamente cuando se cumpla la mayoría de edad " << endl; 
                    cout << "FIN 6" << endl; 
                }
            }
        }
        else if (c == b)
        {
            cout << "Esperar a cumplir la mayoría de edad" << endl; 
            cout << "FIN 5" << endl; 
        }
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
