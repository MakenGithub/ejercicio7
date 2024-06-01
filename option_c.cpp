#include <iostream>
#include <string>

using namespace std;

//Algoritmo tomará dos valores e indicará si el primero es múltiplo del segundo

int option_c(){

    int valor1, valor2;

    //Primer valor. Deberá ser mayor a 0
    do
    {
        cout<<"Ingrese primer valor: ";
        cin>>valor1;
    } while (valor1 <= 0);

    //Segundo valor. Deberá ser mayor a 0
    do
    {
        cout<<"Ingrese primer valor: ";
        cin>>valor2;
    } while (valor2 <= 0);

    if (valor1 % valor2 == 0)
    {
        cout<<"El número "<<valor1<<" es mútiplo de "<<valor2;
    } else {
        cout<<"El número "<<valor1<<" NO es mútiplo de "<<valor2;
    }
    
    return 0;
}