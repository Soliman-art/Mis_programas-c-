#include <iostream>
#include <cmath>

using namespace std;

void mostrarMenu() {
    cout << "Seleccione una opción:" << endl;
    cout << "1. Calcular área de un cuadrado" << endl;
    cout << "2. Calcular área de un rectángulo" << endl;
    cout << "3. Calcular área de un círculo" << endl;
    cout << "4. Salir" << endl;
    cout << "Opción: ";
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1: {
                double lado;
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                double area = lado * lado;
                cout << "El área del cuadrado es: " << area << endl;
                break;
            }
            case 2: {
                double base, altura;
                cout << "Ingrese la base del rectángulo: ";
                cin >> base;
                cout << "Ingrese la altura del rectángulo: ";
                cin >> altura;
                double area = base * altura;
                cout << "El área del rectángulo es: " << area << endl;
                break;
            }
            case 3: {
                double radio;
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                double area = M_PI * radio * radio;
                cout << "El área del círculo es: " << area << endl;
                break;
            }
            case 4:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
