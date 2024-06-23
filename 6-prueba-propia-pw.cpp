#include <iostream>

using namespace std;

int main() {
    char usuario = 'a';
    char password = 'c';


    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese su contraseña: ";
    cin >> password;

    cout << (usuario == 'a' && password == 'c'? "Bienvenido admin" : "Usuario o contraseña incorrectos") << endl;
}

// compilado correcto