#include <iostream>
#include <iomanip> // Necesario para std::setw y std::left

using namespace std;

#define SEMANA 7
#define OXXO 2

// Función para borrar la pantalla
void clearScreen() {
    cout << "\033[2J\033[1;1H";  // Secuencia de escape ANSI para borrar la pantalla
}

int main() {
    const char* semana[] = {"Lunes     ", "Martes    ", "Miercoles ", "Jueves    ", "Viernes   ", "Sabado    ", "Domingo   "};
    int vector[7][2];
    int count = 0;
    int acum = 0;
    int totalDia[7];

    for (int i = 0; i < OXXO; i++) {
        for (int j = 0; j < SEMANA; j++) {
            // Limpia la pantalla antes de solicitar datos
            clearScreen();

            cout << "Dame la venta del " << setw(12) << left << semana[j] << " del OXXO" << i + 1 << endl;
            cin >> vector[j][i];
        }
    }

    // Limpia la pantalla después de la captura de datos
    clearScreen();

    cout << "                 OXXO1         OXXO2      TotalDia" << endl;
    for (int j = 0; j < 7; j++) {
        cout << setw(12) << left << semana[j] << "  |" << setw(12) << left << vector[j][count] << "|" << setw(12) << left << vector[j][count + 1] << "|" << vector[j][count] + vector[j][count + 1] << endl;
        acum = acum + vector[j][count] + vector[j][count + 1];
    }

    cout << endl << endl;
    cout << "El total de la venta de OXXO1 mas OXXO2 es:  " << acum << endl;

    return 0;
}
