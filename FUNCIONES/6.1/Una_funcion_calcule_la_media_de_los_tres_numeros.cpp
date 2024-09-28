
//Diseñar una función que calcule la media de tres números leídos
// del teclado y poner un ejemplo de su aplicación.

#include<iostream>
using namespace std;

int main () {

    float num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    float media = (num1 + num2 + num3) / 3;


    cout <<"La media de los tres numeros es: " << media;

    return 0;
}