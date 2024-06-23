#include <iostream> // Se incluye la biblioteca de entrada y salida de C++

using namespace std; // Se incluye la biblioteca de entrada y salida de C++

int main() { // Comienza el programa
    int entero = 10; // Los enteros se leen y ignoran el salto de línea al presionar
    float flotante =  19.5; //  Los flotantes se leen y ignoran el salto de línea al presionar
    double doble =  29.7777777777777777777777777777777; // Los dobles se leen y ignoran el salto de línea al presionar
    char caracter = 'l'; // Los caracteres se leen y ignoran el salto de línea al presionar Enter


    cout<< "Numero entero: "<< entero << endl; // Leerá y ignorará el salto de línea al presionar Enter
    cout<< "Numero flotante: "<< flotante << endl; // Leerá y ignorará el salto de línea al presionar Enter
    cout<< "Numero doble: "<< doble << endl; // Leerá y ignorará el salto de línea al presionar Enter
    cout<< "Caracter: "<< caracter << endl; // Leerá y ignorará el salto de línea al presionar Enter
    cin.get(); // Espera a que el usuario presione una tecla para continuar
    return 0; // Termina el programa

    
}

// compilado correcto