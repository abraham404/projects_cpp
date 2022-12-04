#include<iostream>

using namespace std;

//Ejemplo de plantillas en c++ que retorna un valor 

/*
Una plantilla de función es una función única completa que sirve como modelo para
una familia de funciones. C
*/

template <class T>
T abs(T numero){

    if (numero<0){
        numero = -numero;

        return numero;
    }
}

int main(){

    int num1 = -4;
    float num2 = -4.25f;
    double num3 =  -4.23456;

    cout<<"El valor de num1 es: "<<abs(num1)<<endl;
    cout<<"El valor de num2 es: "<<abs(num2)<<endl;
    cout<<"El valor de num3 es: "<<abs(num3)<<endl;

    return 0;
}