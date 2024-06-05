/*7) Escribir un programa que imprima el menú mostrado a continuación y solicite al usuario
elegir una opción, la cual se debe ejecutar para luego volver a mostrar el menú repetidas
veces, hasta que el usuario decida salir:
‘A’: Invertir número.
‘B’: Sumatoria de dígitos.
‘C’: Decir si son múltiplos.
‘D’: Salir.
Dependiendo del carácter ingresado por el usuario, realizar la acción indicada en el
menú: A: leer un número e invertir sus dígitos para luego imprimirlo en orden inverso; B:
solicitar un número e imprimir la suma de sus dígitos; C: solicitar el ingreso de dos
números y decir si el primero es múltiplo del segundo; D: terminar el programa.
Si el usuario ingresa un carácter que no es la opción D, se debe ejecutar lo que
corresponda y volver a mostrar el menú para permitirle elegir otra opción. Si el carácter
ingresado por el usuario no es A, B, C ni D, mostrarle un mensaje de error y continuar
mostrándole el menú y solicitando una opción hasta que ingrese una que sea válida.
Implementar las funciones que considere necesarias.*/


#include <iostream>
#include <string>
using namespace std;

//prototipos

void option_a (int a);
int option_b (int a);
void option_c (int a, int b);

//ejercicio completo
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


// -- FUNCIONES --

//Funcion para el valor 'A'

void option_a (int a){

    //VARIABLES
    int numeroInvertido;

    do
    {
        cout<<"Ingrese un valor mayor o igual a 10: ";
        cin>>a;
    } while (a < 10);

// Algoritmo para invertir el valor digitado por el usuario

    while (a >= 1)
    {
        numeroInvertido = a % 10;

        cout<<numeroInvertido;

        a = a / 10;
        
    }

}

//Funcion para el valor 'B'

int option_b(int a){

//VARIABLES
    int suma = 0;

//Algoritmo que suma individualmente los valores de un número
    

    while(a > 0){
        suma += a % 10;
        a /= 10;
    }

    // int intSuma = static_cast<int>(suma);
    
    return suma;
}


//Funcion para el valor 'C'

//Algoritmo tomará dos valores e indicará si el primero es múltiplo del segundo

void option_c(int a, int b){

    if (a % b == 0)
    {
        cout<<"El número "<<a<<" es mútiplo de "<<b;
    } else {
        cout<<"El número "<<a<<" NO es mútiplo de "<<b;
    }
}