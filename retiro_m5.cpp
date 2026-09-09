#include <iostream>
using namespace std;

// Opción de retiro (solo múltiplos de 5)
void retirarMultiplosDe5(float &saldo, float retiro) {
    // Validando que sea múltiplo de 5 y mayor a 0
    if ((int)retiro % 5 == 0 && retiro > 0) {
        if (retiro <= saldo) {
            saldo -= retiro;
            cout << "\n[Exito] Retiro realizado: $" << retiro << endl;
            cout << "Nuevo saldo: $" << saldo << endl;
        } else {
            cout << "\n[Error] Fondos insuficientes. Su saldo es $" << saldo << endl;
        }
    } else {
        cout << "\n[Error] Monto invalido. Unicamente se permiten retiros multiplos de 5.\n";
    }
}

