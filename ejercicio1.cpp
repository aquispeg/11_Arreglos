#include <iostream>
using namespace std;

int main() {
    int cantidad, mayor, posicionMayor;
    int numeros[20];

    cout << "Ingrese la cantidad de numeros (maximo 20): ";
    cin >> cantidad;
    if (cantidad <= 0 || cantidad > 20) {
        cout << "Cantidad invalida. Debe estar entre 1 y 20." << endl;
        return 1; 
    }
    cout << "Ingrese " << cantidad << " numeros enteros:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Numero [" << i << "]: ";
        cin >> numeros[i];
    }
    cout << "\nNumeros ingresados: ";
    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    mayor = numeros[0];
    posicionMayor = 0;
    for (int i = 1; i < cantidad; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            posicionMayor = i;
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "la posicion es: " << posicionMayor << " del arreglo (indice empieza en 0)." << endl;

    return 0;
}
