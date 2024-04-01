/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <string>
int main()
{
    cout<<"CONTRARTAR UN SERVICIO DE INTERNET\n";
    cout<<"Llame a la empresa\n";
    string respuestas, plan1mg="1) Te ofrecemos 1 MGs\n",plan2mg="2)Te Ofreceos 2 MGs\n",plan3mg="3)Te ofrecemos 3 MGs\n";
    cout<<"contestaron?";
    cin>> respuestas;
    
    if(respuestas=="si"||respuestas=="SI"){
        cout<<"que planes ofrecen?\n Te Ofrecemos:\n";
        cout<<plan1mg<<"\n"<<plan2mg<<"\n"<<plan3mg<<"\n Te interesa alguno?\n Elige por numero de plan\n";
        cin >> respuestas;
        if(respuestas=="1" || respuestas=="2"||respuestas=="3"){
            cout<<"cuentan con cobertura?\n";
            cin>> respuestas;
            if (respuestas=="si" || respuestas=="SI"){
                cout << "Se le agendará una cita\n";
                cout <<"se agendó la cita?\n";
                cin >> respuestas;
                    if(respuestas=="si"||respuestas=="SI"){
                    cout<<"esperar a que lleguen a instalar\n Disfrute de su servicio";
                    }else if(respuestas=="no" || respuestas=="NO"){
                    cout<<"reconciderar si quiero el servicio";
                    cin >>respuestas;
                    if(respuestas=="si"||respuestas=="SI"){
                        cout << "se re agendara su instalacion\nEsper a que llegue y disfrute de su servicio\n";
                    }else if(respuestas=="no"|| respuestas=="NO"){
                        cout << "Ya no quiero el servicio >:c";
                    }
                    }
            }else if (respuestas=="no"|| respuestas=="NO"){
                cout <<"Lo sentimos no contamos cobertura para tu servicio";
            }
   
        }else{
            cout<<"lo sentimos no contamos con nada que pueda interesarte";
        }
    }else if(respuestas=="no" || respuestas=="NO"){
        cout<<"No le contestaron, intente de nuevo otro día.";
        
    }
    
}

