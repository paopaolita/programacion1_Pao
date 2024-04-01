// Problema 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
using namespace std; 

int main()
{
   
    string a = "si"; 
    string  b = "no";
    string c ;
    cout << "Llegar a la universidad" << endl; 
    cout << "Proceder a levantarse" << endl;
    cout << "Proceder a preguntarse:" << endl;
    cout << "¿Tiene deseo de ir a la Universidad?" << endl; cin >> c;
    if (c == b)
    {
        cout << "Proceder a dormirse nuevamente (ya mañana será otro día)" << endl;
        cout << "FIN 1" << endl;
    }
    else if (c == a)
    {
        cout << "Proceder a realizar sus correspondientes actividades:" << endl;
        cout << "Bañarse" << endl;
        cout << "Cambiarse" << endl;
        cout << "Cocinar" << endl;
        cout << "Limpieza personal u aseo" << endl;
        cout << "Peinarse" << endl;
        cout << "Alistar sus cosas y retirarse de su casa/apartamento" << endl;
        cout << "¿Tiene vehículo propio" << endl; cin >> c; 
        if (c == a)
        {
            cout << "Proceder a meter sus cosas correspondientes dentro del vehículo personal" << endl;
            cout << "Proceder arrrancarlo" << endl;
            cout << "¿Encendió el vehículo?" << endl; cin >> c; 
            if (c == b)
            {
                cout << "¿Puede hacer algo al respecto" << endl; cin >> c; 
                if (c == b)
                {
                    cout << "Proceder a rendirse" << endl;
                    cout << "Proceder a notificar la falta a decanatura" << endl;
                    cout << "FIN 2" << endl;
                }
                else if (c == a)
                {
                    cout << "Intentar nuevamente " << endl;
                    cout << "¿Encendió el vehículo?" << endl; cin >> c; 
                    if (c == b)
                    {
                        cout << "Proceder a rendirse" << endl;
                        cout << "Proceder a notificar la falta a decanatura" << endl;
                        cout << "FIN 2" << endl;
                        
                    }
                    else if (c == a)
                    {
                        cout << "Proceder a conducir a la Universidad con cuidado y respetando las reglas de transito" << endl;
                        cout << "¿Hubo algún percance durante el manejo?" << endl; cin >> c;
                        if (c == a)
                        {
                            cout << "Lamentablemente llegará tarde a la Universidad" << endl;
                            cout << "FIN 4" << endl;
                        }
                        else
                        {
                            cout << "Va a poder llegar temprano a la Universidad felicdades" << endl;
                            cout << "FIN 3" << endl;
                        }
                    }
                }
            }
            else if (c == a)
            {
                cout << "Proceder a conducir a la Universidad con cuidado y respetando las reglas de transito" << endl;
                cout << "¿Hubo algún percance durante el manejo?" << endl; cin >> c;
                if (c == a)
                {
                    cout << "Lamentablemente llegará tarde a la Universidad" << endl;
                    cout << "FIN 4" << endl;
                }
                else
                {
                    cout << "Va a poder llegar temprano a la Universidad felicdades" << endl;
                    cout << "FIN 3" << endl;
                }

            }           
        }
        else if (c == b)
        {
            cout << "Proceder a esperar en la estación correspondiente" << endl; 
            cout << "¿Pudo llegar a tiempo?" << endl; cin >> c;
            if (c == a)
            {
                cout << "Proceder a subir en el bus y bajarse en las estaciones correspondientes" << endl;
                cout << "¿Hubo algún percance?" << endl; cin >> c; 
                if (c == a)
                {
                    cout << "Notificar al respecto la situación y lamentablemente va a llegar tarde" << endl;
                    cout << "FIN 5" << endl;
                }
                else
                {
                    cout << "Afortunadamente va a llegar a tiempo" << endl;
                    cout << "FIN 6" << endl;
                }
            }
            else if (c == b)
            {
                cout << "Puede realizar algo al respecto" << endl; cin >> c; 
                if (c == b)
                {
                    cout << "Proceder a rendirse y notificar al respecto" << endl;
                    cout << "FIN 7" << endl;
                }
                else if (c == a)
                {
                    cout << "Proceder a buscar otro bus y medio de transporte " << endl;
                    cout << "Lamentablemente va a llegar tarde" << endl;
                    cout << "FIN 8" << endl;
                }
            }
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
