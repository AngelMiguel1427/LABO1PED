#include <iostream>
struct Cuenta {
    int saldo = 1000;
};

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
    std::cout << "Bienvenido al menu de opciones" << std::endl;
    std::cout << "seleccione la opcion deseada:" << std::endl;
    std::cout << "1. Ver saldo" << std::endl;
    std::cout << "2. con paso por referencia depositar" << std::endl;
    std::cout << "3. paso puntero" << std::endl;
    std::cout << "4. solo multiplos de 5" << std::endl;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            verSaldo(cuenta);
            break;
        case 2:
            int deposito;
            std::cout << "Ingrese el monto a depositar: ";
            std::cin >> deposito;
                        PasoPorReferencia(cuenta, deposito);
            break;
        case 3:
            std::cout << "Opcion 3 seleccionada" << std::endl;
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
    }




    return 0;
}