#include <iostream>
using namespace std;

float retirar;
float* pRetirar = &retirar;

void mostrarBalance(float *balance) {
    cout << "Tu balance actual es: $" << *balance << endl;
}

void depositar(float *balance) {
    int cantidad;

    cout << "Ingrese la cantidad a depositar: ";
    cin >> cantidad;

    if (cantidad > 0) {
        *balance += cantidad;
        cout << "Deposito exitoso. Nuevo balance: $" << *balance << endl;
    } 
    else {
        cout << "Error: No se puede depositar 0 o una cantidad menor." << endl;
    }
}

void retirardinero(float *balance) {
    cout << "Ingrese la cantidad a retirar: ";
    cin >> *pRetirar;

    if (*pRetirar > 0 && (int)*pRetirar % 5 == 0) {

        if (*pRetirar <= *balance) {
            *balance -= *pRetirar;

            cout << "El dinero retirado es de: $" << *pRetirar << endl;
            cout << "Nuevo balance: $" << *balance << endl;
        }
        else {
            cout << "No tiene suficiente dinero en su balance." << endl;
        }
    }
    else {
        cout << "El dinero no puede ser retirado porque no es multiplo de 5." << endl;
    }
}

int opc;
int opc2;

int main() {

    float balance = 0;

   

    do {
         cout << "Bienvenido/a, por favor, seleccione una de las opciones" << endl;
    cout << "Para ver su balance marque 1" << endl;
    cout << "Para depositar a la cuenta, marque 2" << endl;
    cout << "Para hacer retiro, marque 3" << endl;
    cout << "Para salir, marque 4" << endl;
        cin >> opc;

        switch (opc) {

        case 1:
            mostrarBalance(&balance);
            break;

        case 2:
            depositar(&balance);
            break;

        case 3:
            retirardinero(&balance);
            break;

        case 4:
            cout << "Gracias por utilizar nuestro servicio" << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        if (opc != 4) {
            cout << "Desea hacer alguna otra accion?" << endl;
            cout << "Para confirmar marque 1 para si y 0 para no" << endl;
            cin >> opc2;
        }

    } while (opc2 == 1);

    return 0;
}