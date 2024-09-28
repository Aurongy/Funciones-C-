
#include <iostream>
using namespace std;

int encontrarMayor(int a, int b) {
    return (a > b) ? a : b; 
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    int mayor = encontrarMayor(num1, num2);
    cout << "El mayor de los dos numeros es: " << mayor;

    return 0;
}
