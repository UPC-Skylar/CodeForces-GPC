#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<int> puntuaciones(n);
    for(int i = 0; i < n; i++) {
        cin >> puntuaciones[i];
    }
    
    int cantIncreible = 0;
    int maximo = puntuaciones[0];
    int minimo = puntuaciones[0];

    for(int i = 1; i < n; i++) {
        if (puntuaciones[i] > maximo) {
            cantIncreible++;
            maximo = puntuaciones[i];
        } else if (puntuaciones[i] < minimo) {
            cantIncreible++;
            minimo = puntuaciones[i];
        }
    }

    cout << cantIncreible << endl;
}
