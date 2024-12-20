#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; // Número de casos de prueba
    while (t--) {
        int x; 
        cin >> x;

        // Obtener el primer dígito y la cantidad de dígitos del número
        int primerDigito = x % 10; // El dígito del que está compuesto el número
        int cantCaracteres = to_string(x).size(); // Cantidad de dígitos del número

        // Calcular el total de pulsaciones
        int totalSuma = 0;

        // Sumar los movimientos de dígitos aburridos con menor primer dígito
        for (int i = 1; i < primerDigito; i++) {
            totalSuma += 10; // Cada conjunto (1, 11, 111, 1111) tiene 10 pulsaciones
        }

        // Sumar los movimientos del conjunto al que pertenece `x`
        totalSuma += (cantCaracteres * (cantCaracteres + 1)) / 2;

        cout << totalSuma << endl;
    }
    return 0;
}
