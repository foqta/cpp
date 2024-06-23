#include <iostream>

using namespace std;

int main() {

    float a, b, c, d, e, f, resultado;

    cout << "Ingrese el valor de a: "; // Se agrega el valor de a al ingreso de los valores
    cin >> a;
    cout << "Ingrese el valor de b: "; // Se agrega el valor de b al ingreso de los valores
    cin >> b;
    cout << "Ingrese el valor de c: "; // Se agrega el valor de c al ingreso de los valores
    cin >> c;
    cout << "Ingrese el valor de d: "; // Se agrega el valor de d al ingreso de los valores
    cin >> d;
    cout << "Ingrese el valor de e: "; // Se agrega el valor de e al ingreso de los valores
    cin >> e;
    cout << "Ingrese el valor de f: "; // Se agrega el valor de f al ingreso de los valores
    cin >> f;
    
    resultado = (a + (b / c)) / (d + (e + f ) ); // Se realiza la operación con los valores ingresados por el usuario

    cout << "El resultado es: " << resultado << endl; // Muestra el resultado al usuario








    system("pause");
    return 0;

}


// compilado correcto