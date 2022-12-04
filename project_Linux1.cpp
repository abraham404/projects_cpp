#include<iostream>

using namespace std;

double convertir_tem(double);

int main(){

double cel, fah;

cout<<"Digita la temperatura en Fahrenheit: ";
cin>>fah;

cel =  convertir_tem(fah);

cout<<"\nLa Temperatura en celcios es: "<<cel<<endl;



return 0;

}

double convertir_tem(double f){
    //las variables f de Fahrenheit y c de celcios
    double c;
    double const1 = 32, const2 = 1.8000;

    c = (f-const1)/const2;

    return c;



}

