#include <iostream>

float retirar;
float* pRetirar = &retirar;

void retirardinero() {
    std::cout << "Ingrese la cantidad a retirar: ";
    std::cin >> *pRetirar;

    if (*pRetirar / 5 == 0&&5 ){
        std::cout << "el dinero retirado es de: " << *pRetirar << std::endl;
    }
    else if (*pRetirar / 5 == 0&&5) {
        std::cout << "el dinero no puede ser retirado por que no es multiplo de 5" << std::endl;
    }

}



int main() {
    retirardinero();
}