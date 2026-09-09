#include <iostream>
using namespace std;

void PasoPorReferencia(int &saldo, int deposito) {
    saldo += deposito;
    cout << "Deposito realizado. Nuevo saldo: $" << saldo << endl;
}