#include <iostream>

int retirar;
int* pRetirar = &retirar;

void retirardinero() {
    std::cout << "Ingrese la cantidad a retirar: ";
    std::cin >> *pRetirar;

    int residuo;
    int* pResiduo = &residuo;

    *pResiduo = *pRetirar % 5;

    if (*pResiduo == 0) {
        std::cout << "El dinero retirado es de: " << *pRetirar << std::endl;
    }
    else {
        std::cout << "El dinero no puede ser retirado porque no es multiplo de 5" << std::endl;
    }
}

int main() {
    retirardinero();
}
