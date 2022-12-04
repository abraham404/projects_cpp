#include<iostream>

using namespace std;

//Ejemplo de plantillas en c++ para 

/*
Una plantilla de función es una función única completa que sirve como modelo para
una familia de funciones. C
*/

template <class T>
void mostrarabs(T numero){

    if (numero<0){
        numero = -numero;
        cout<<"El valor absoluto es: "
            <<numero<<endl;
    }
}

int main(){

    int num1 = -4;
    float num2 = -4.25f;
    double num3 =  -4.23456;

    mostrarabs(num1);
    mostrarabs(num2);
    mostrarabs(num3);

    return 0;
}