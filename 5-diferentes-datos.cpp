#include <iostream>

using namespace std;

int main() {
    char sexo[10]; // Declaración de la variable sexo como un arreglo de caracteres
    int edad; // Declaración de la variable edad como un entero
    float altura; // Declaración de la variable altura como un flotante
    float peso; // Declaración de la variable peso como un flotante

    cout << "Recuerde usar . para separar decimales en los ingresos. \n\n"; // Comando para pausar la ejecución del programa
    cout << "Ingrese su sexo (masculino/femenino): "; // Comando para imprimir un mensaje y pausar la ejecución del programa
    cin >> sexo; // Comando para leer la entrada del usuario y almacenarla en la variable sexo
    cout << "Ingrese su edad: "; // Comando para imprimir un mensaje y pausar la ejecución del programa
    cin >> edad; // Comando para leer la entrada del usuario y almacenarla en la variable edad
    cout << "Ingrese su altura (en metros): "; // Comando para imprimir un mensaje y pausar la ejecución del programa
    cin >> altura; // Comando para leer la entrada del usuario y almacenarla en la variable altura
    cout << "Ingrese su peso (en kilogramos): "; // Comando para imprimir un mensaje y pausar la ejecución del programa
    cin >> peso; // Comando para leer la entrada del usuario y almacenarla en la variable peso

    cout << "\nDatos ingresados:\n"; // Comando para imprimir un mensaje y pausar la ejecución del programa
    cout << "Sexo: " << sexo << endl; // Comando para imprimir el valor de la variable sexo y pausar la ejec
    cout << "Edad: " << edad << " años" << endl; // Comando para imprimir el valor de la variable edad y pausar la ejec
    cout << "Altura: " << altura << " metros" << endl; // Comando para imprimir el valor de la variable altura y pausar la ejec
    cout << "Peso: " << peso << " kilogramos" << endl; // Comando para imprimir el valor de la variable peso y pausar la ejec





    system("pause");
    return 0;

}
// compilado correcto