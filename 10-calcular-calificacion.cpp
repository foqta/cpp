#include <iostream>

using namespace std;

int main() {
    float practicas, particiapcion, examen, res;
    cout << "Ingresa los datos que se te piden a continuacion\n";
    cout << "Calificacion de las practicas: "; cin >> practicas;
    cout << "Calificacion de la particiapcion: "; cin >> particiapcion;
    cout << "Calificacion del examen: "; cin >> examen;
    practicas *= 0.40;
    particiapcion *= 0.20;
    examen *= 0.40;
    res = practicas + particiapcion + examen;
    cout << "\nLa calificación del alumno es: " << res << "\n";
    system("pause");
    return 0;
}

// compilado correcto