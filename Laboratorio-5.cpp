#include <iostream>
using namespace std;
int main() {
    int opcion;
 int radio=0,lado=0,base=0, altura=0;

     cout << "Ingrese una opcion (1-3): ";
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cin >> opcion;


    switch (opcion) {
        case 1:
            cout << "ingrese radio: " << endl;
            cin >> radio;

            cout << "area del circulo: " << 3.1416 * radio * radio << endl;
            break;
        case 2:
            cout << "ingrese lado: " << endl;
            cin >> lado;
            cout << "area del cuadrado: " << lado * lado << endl;
            break;
        case 3:
            cout << "ingrese base: " << endl;
            cin >> base;
            cout << "ingrese altura: " << endl;
            cin >> altura;
            cout << "area del triangulo: " << (base * altura)/2 << endl;
        default:
            cout << "Opcion no valida" << endl;
    }
    return 0;
}