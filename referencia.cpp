#include <iostream>
using namespace std;

void verSaldo() {
    std::cout << "Su saldo es: $1000" << std::endl;
}
void PasoPorReferencia(Cuenta &cuenta, int deposito) {
    cuenta.saldo += deposito;
    std::cout << "Deposito realizado. Nuevo saldo: $" << cuenta.saldo << std::endl;
}