#include <iostream>
#include "verSaldo.cpp"
#include "referencia.cpp"
using namespace std;

int main (){
    int opcion;
    cout << "Bienvenido al menu de opciones" << endl;
    cout << "seleccione la opcion deseada:" << endl;
    cout << "1. Ver saldo" << endl;
    cout << "2. con paso por referencia depositar" << endl;
    cout << "3. paso puntero" << endl;
    cout << "4. solo multiplos de 5" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            verSaldo();
            break;
        case 2:
            int saldo = 1000;
            int deposito;
            cout << "Ingrese el monto a depositar: ";
            cin >> deposito;
            PasoPorReferencia(saldo, deposito);
            break;
        case 3:
            cout << "Opcion 4 seleccionada" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }




    return 0;
}