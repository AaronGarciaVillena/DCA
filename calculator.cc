#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double num1;
    double num2;
    char opcion;
    cout << "Que opcion deseas usar? ('s' para la Suma, 'r' para la Resta, 'm' para la Multiplicacion, 'd' para Dividir)" << endl;
    cin >> opcion;
    cout << endl;
    switch (opcion)
    {
    case 's':
        cout << "Introduce el primer número a sumarlo: ";
        cin >> num1;
        cout << endl;
        cout << "Introduce el segundo número a sumar: ";
        cin >> num2;
        cout << endl;
        cout << "El resultado es: " << num1+num2 << endl;
        break;

    case 'r':
        cout << "Introduce el primer número a restar: ";
        cin >> num1;
        cout << endl;
        cout << "Introduce el segundo número a restar: ";
        cin >> num2;
        cout << endl;
        cout << "El resultado es: " << num1-num2 << endl;
        break;
    
    case 'm':
        cout << "Introduce el primer número a multiplicar: ";
        cin >> num1;
        cout << endl;
        cout << "Introduce el segundo número a multiplicar: ";
        cin >> num2;
        cout << endl;
        cout << "El resultado es: " << num1*num2 << endl;
        break;

    case 'd':
        cout << "Introduce el divisor: ";
        cin >> num1;
        cout << endl;
        cout << "Introduce el dividendo: ";
        cin >> num2;
        cout << endl;
        cout << "El resultado es: " << num1/num2 << endl;
        break;

    default:
        cout << "No has introducido una opción correcta, el programa va a finalizar..." << endl;
        break;
    }

 
    return 0;
}