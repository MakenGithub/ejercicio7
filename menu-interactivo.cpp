#include "opciones.hpp"

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1 = 0, n2 = 0;
    char opcion;
    
    cout<<"Hola bienvenido/a!"<<endl;

    do
    {
    
        cout<<"\nSeleccione una opcion:"<<endl
        <<"A: Invertir numeros."<<endl
        <<"B: Sumar digitos."<<endl
        <<"C: Verificar multiplo."<<endl
        <<"D: Salir."<<endl
        <<"Gracias vieja"<<endl;
        cin>>opcion;

        opcion = toupper(opcion);

        switch (opcion)
        {
        case 'A':
            option_a(n1);
            break;

        case 'B':
                do
        {
            cout<<"ingrese un número: ";
            cin>>n1;
        } while (n1 < 9);
            
            cout<<"El valor de los dígitos sumados es: "<<option_b(n1);
            break;

        case 'C':
        
            //Primer valor. Deberá ser mayor a 0
            do
            {
                cout<<"Ingrese primer valor: ";
                cin>>n1;
            } while (n1 <= 0);

            //Segundo valor. Deberá ser mayor a 0
            do
            {
                cout<<"Ingrese primer valor: ";
                cin>>n2;
            } while (n2 <= 0);

                option_c(n1, n2);
                break;
        
        case 'D':
                break;
            
            default: cout<<"Tan dificil no era";
                break;
            }

        //Fin de ciclo si "opcion == D"
        } while (opcion != 'D');

        cout<<"\n¡Muchas gracias por usar nuestro sistema!";

    return 0;
}