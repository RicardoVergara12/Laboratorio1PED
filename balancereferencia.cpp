#include<iostream>
using namespace std;

/*Un programa que sea un cajero con 4 opciones 
  
 1 mostrar balance, 2 depositar con paso por referencia, 3 retirar con paso por referencia, 4 salir

 Reglas: 
 Cantidad de tramites ilimitados 
 No depositar ni retirar numeros negativos o 0
 Retirar solo multiplos de 5

*/

void mostrarBalance(int *balance) {
    cout << "Tu balance actual es: $" << *balance << endl;
}

void depositar(int *balance) {
    int cantidad;
    cout << "Ingrese la cantidad a depositar: ";
    cin >> cantidad;

    
    if (cantidad > 0) {
        *balance += cantidad;
        cout << "Deposito exitoso. Nuevo balance: $" << *balance << endl;
    } else {
        cout << "Error: No se puede depositar 0 o menores a este ." << endl;
    }
}

int main(){

 int balance = 0;
 
 








}