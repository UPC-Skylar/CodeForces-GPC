#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, k;
    cin >> n >> k; // n = tamaño del arreglo, k = intercambios permitidos
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // Ordenamos 'a' de menor a mayor y 'b' de mayor a menor
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    // Realizamos hasta 'k' intercambios
    for (int i = 0; i < k; i++) {
        if (a[i] < b[i]) {
            swap(a[i], b[i]); // Intercambiamos si el elemento de 'b' es mayor
        } else {
            break; // Si no es necesario intercambiar, salimos del bucle
        }
    }

    // Sumamos todos los elementos de 'a'
    return accumulate(a.begin(), a.end(), 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
