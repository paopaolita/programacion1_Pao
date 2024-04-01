/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <string>
int main(){
    string respuesta,correo,pass,verificacion;
    cout<<"Ingresar a su cuenta\n cuenta con una?\n";
    cin >> respuesta;
    if(respuesta=="no"){
        cout<<"Desea crear una cuenta?\n";
    cin >> respuesta;
    if(respuesta=="no"){
        cout<<"Vuelva pronto\n";
    }else if(respuesta=="si"){
        cout<<"Ingresar al nombre del correo\n";
    cin >> correo;
    cout<<"\nIngresar una contraseña\n";
    cin >> pass;
    cout<<"Desea tener verificación de dos pasos?\n";
    cin >> respuesta;
    if(respuesta=="si"){
        cout<<"Ingrese un 1)Numero de telefono 2) Correo alternativo\n";
    cin >> respuesta;
    if(respuesta=="1"){
        cout<<"verifique su numero de telefono\n";
        cin >> verificacion;
    }else if(respuesta=="2"){
        cout<<"Verifique su correo\n";
        cin >>verificacion;
    }
    }else if(respuesta=="no"){
        cout<<"Cuenta creada, ahora puede iniciar sesion\n";
    }
    }
        
    }else if(respuesta=="si"){
        cout<<"Vayamos a iniciar sesion\n";
    }
    
    
    cout<< "ahora si tiene una cuenta?";
    cin >>respuesta;
    if(respuesta=="si"){
        cout<<"Ingresar a su correo\n";
    cin >> respuesta;
    if(respuesta!=correo){
        cout<<"Correo invalido, mejor cree una cuenta\n";
    }else if(respuesta==correo){
        cout<<"Ingresar a su contraseña\n";
    cin >> respuesta;
    if(respuesta!=pass){
        cout <<"contraseña invalida";
    }
    else if(respuesta==pass){
        cout<<"cuenta con verificacion de dos pasos 1)si 2)no\n";
    cin >> respuesta;
    if(respuesta=="si"){
        cout<<"para verificar por favor ingrese su numero o correo\n";
    cin >> respuesta;
    if(respuesta=="verificacion"){
        cout<<"Bienvenido!!!!";
    }else{
        cout<<"lo sentimos la verificacion fue incorrecta";
    }
    }else if(respuesta=="no"){
        cout<<"Bienvenido";
    }
        
    }
    }
    }else if(respuesta=="no"){
        cout<<"Intente crear una cuenta";
    }
    
    }


