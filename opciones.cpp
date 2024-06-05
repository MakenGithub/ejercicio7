#include <iostream>
#include <string>

#include "opciones.hpp"

using namespace std;

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