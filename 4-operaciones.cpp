#include <iostream>

using namespace std;

int main() {

    float  numero1, numero2, suma, resta, multiplicacion, division; // Declaracion de variables

    cout << "Ingrese el primer numero: "; // Pide al usuario ingresar el primer numero
    cin >> numero1; // Lee el primer numero ingresado por el usuario
    cout << "Ingrese el segundo numero: "; // Pide al usuario ingresar el segundo numero
    cin >> numero2; // Lee el segundo numero ingresado por el usuario

    suma = numero1 + numero2; // Calcula la suma
    resta = numero1 - numero2; // Calcula la resta
    multiplicacion = numero1 * numero2; //  Calcula la multiplicacion
    division = numero1 / numero2; // Calcula la division

    cout << "La suma es: " << suma << endl; // Muestra la suma
    cout << "La resta es: " << resta << endl; // Muestra la resta
    cout << "La multiplicacion es: " << multiplicacion << endl; // Muestra la multiplicacion
    cout << "La division es: " << division << endl; // Muestra la division



    system("pause");
    return 0;
}

// compilado correcto