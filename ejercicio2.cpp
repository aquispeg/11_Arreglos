#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingrese la cantidad de elementos";
    cin>>n;
    float A[n],suma=0,prom;
    for (int i=0;i<n;i++){
        cout<<"ingrese el elemento A["<<i<<"]";
        cin>>A[i];
        suma=suma +A[i];
    }
    prom=suma/n;
    cout<<"el promedio de los numeros es: "<<prom<<endl;
    cout<<"elementos mayores al promedio: ";
    for (int i=0; i<n; i++){
        if (A[i]>prom){
            cout <<"\n"<<A[i];
        }
    }
    return 0;
}