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

int option_a (int a);
float option_b (float a);
int option_c (int a, int b);

//ejercicio completo
int main(){
    int n1, n2, resultado = 0;
    char opcion;
    
    cout<<"Hola bienvenido/a! Seleccione una opcion:"<<endl
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
        resultado = option_a(n1);
        break;
    case 'B':
        resultado = option_b(n1);
        break;
    case 'C':
        resultado = option_c(n1, n2);
        break;
    
    default: cout<<"Tan dificil no era";
        break;
    }

    return 0;
}


// -- FUNCIONES --

//Funcion para el valor 'A'

int option_a (int a){

    //VARIABLES
    int numero, numeroInvertido;

    do
    {
        cout<<"Ingrese un valor mayor o igual a 10: ";
        cin>>numero;
    } while (numero < 10);

// Algoritmo para invertir el valor digitado por el usuario

    while (numero > 1)
    {
        numeroInvertido = numero % 10;

        cout<<numeroInvertido;

        numero = numero / 10;
        
    }

    a = numeroInvertido;
    
    return a;
}

//Funcion para el valor 'B'

float option_b(float a){

//VARIABLES
    int numero, suma;

//Algoritmo que suma individualmente los valores de un número

    cout<<"ingrese un numero: ";
    cin>>numero;

    while(numero != 0){
        suma += numero % 10;
        numero /= 10;
    }

    a = suma;
    cout<<a<<endl;
    
    return a;
}


//Funcion para el valor 'C'

//Algoritmo tomará dos valores e indicará si el primero es múltiplo del segundo

int option_c(int a, int b){

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