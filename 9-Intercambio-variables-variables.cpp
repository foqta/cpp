#include <iostream>

using namespace std;

int main() {
    int a, b; // Declaramos las variables a y b

    cout << "Escribe lo que se te pida:";
    cout << "\n Valor de a:" // Pedimos el valor de a
    cin >> a; // Leemos el valor de a
    cout << "\n Valor de b:" // Pedimos el valor de b
    cin >> b; // Leemos el valor de b

    a = b; // Intercambiamos los valores de a y b
    b = a; // Volvemos a intercambiarlos para que la variable original se vuelva a la original

    cout << "Se han intercambiado los valores de a y b."
    cout << "\n Valor de a: " << a; // Mostramos el nuevo valor de a
    cout << "\n Valor de b: " << b; // Mostramos el nuevo valor de b


    system("pause");
    return 0;
}

// compilado correcto