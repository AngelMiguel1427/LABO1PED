#include <iostream>
using namespace std;
void retirar(float *saldo)
{
    float retiro;
    cout << "*Direccion del saldo:" <<saldo<< endl;
    cout<<"*saldo actual:"<<saldo<<endl;
    cout<<"*ingrese la cantidad a retirar"<<endl;
    cin>>retiro;
    if ((int)retiro%5!=0){
        cout<<"El retiro debe ser multiplo de 5"<<endl;
    }
    else if(retiro>*saldo){
        cout<<"saldo insuficiente"<<endl;
    }
    else {
        *saldo=*saldo -retiro;
        cout<<"retiro realizado"<<endl;
        cout<<"Nuevo saldo:"<<saldo<<endl;
    }
}   

int main()
{
    float saldo = 1000;
    retirar(&saldo);

    return 0;
}