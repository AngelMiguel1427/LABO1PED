#include <iostream>
#include "retiro_m5.cpp"

struct Cuenta {
    float saldo = 1000;
};
void pasoPuntero(float *saldo){
    std::cout << "*Direccion del saldo:" << saldo << std::endl;
    std::cout << "*saldo actual:" << *saldo << std::endl;

}

void verSaldo(Cuenta &cuenta) {
    std::cout << "Su saldo es: $" << cuenta.saldo << std::endl;
}
void PasoPorReferencia(Cuenta &cuenta, int deposito) {
    cuenta.saldo += deposito;
    std::cout << "Deposito realizado. Nuevo saldo: $" << cuenta.saldo << std::endl;
}

int main (){
    Cuenta cuenta;
    cuenta.saldo = 1000;
    int opcion;

    do {
        std::cout << "\nBienvenido al menu de opciones" << std::endl;
        std::cout << "1. Ver saldo" << std::endl;
        std::cout << "2. Depositar" << std::endl;
        std::cout << "3. Ver saldo con puntero" << std::endl;
        std::cout << "4. Retirar multiplos de 5" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            verSaldo(cuenta);
            break;
        case 2: {
            int deposito;2
            std::cout << "Ingrese el monto a depositar: ";
            std::cin >> deposito;

            if (deposito <= 0) {
                std::cout << "Monto invalido. No se puede depositar un valor negativo." << std::endl;
                break;
            }

            PasoPorReferencia(cuenta, deposito);
            break;
        }
        case 3:
            pasoPuntero(&cuenta.saldo);
            break;
        case 4: {
            float montoRetiro;
            std::cout << "Ingrese el monto a retirar: ";
            std::cin >> montoRetiro;
            retirarMultiplosDe5(cuenta.saldo, montoRetiro);
            break;
        }
        case 5:
            std::cout << "Hasta luego." << std::endl;
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
        }
    } while (opcion != 5);

    return 0;
}