
//Realizar un procedimiento que obtenga la división entera
// y el resto de la misma utilizando únicamente los
//operadores suma y resta

#include <iostream>
using namespace std;

// Función para realizar la división entera y obtener el resto
void divisionEntera(int numerador, int denominador, int &cociente, int &resto) {
    // Verificamos que el denominador no sea cero
    if (denominador == 0) {
        cout << "Error: Division por cero." << endl;
        return;
    }

    cociente = 0;  // Inicializamos el cociente
    resto = numerador;  // Inicializamos el resto con el numerador

    // Mientras el resto sea mayor o igual al denominador
    while (resto >= denominador) {
        resto -= denominador;  // Restamos el denominador del resto
        cociente++;  // Incrementamos el cociente
    }
}

int main() {
    int numerador, denominador;
    int cociente, resto;

    cout << "Ingresa el numerador: ";
    cin >> numerador;
    cout << "Ingresa el denominador: ";
    cin >> denominador;

    divisionEntera(numerador, denominador, cociente, resto);

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
