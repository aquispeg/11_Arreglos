#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    float A[n], suma = 0, prom;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento A[" << i << "]: ";
        cin >> A[i];
        suma += A[i];
    }

    prom = suma / n;

    cout << fixed << setprecision(2);
    cout << "\nEl promedio de los numeros es: " << prom << endl;

    cout << "\nElementos mayores al promedio:" << endl;
    for (int i = 0; i < n; i++) {
        if (A[i] > prom) {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }

    return 0;
}
