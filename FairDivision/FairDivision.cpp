// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string solution() {
    int n; 
    cin >> n;
    int cAlice = 0, cBob = 0;
    vector<int> caramelos(n);

    for (int i = 0; i < n; i++) {
        cin >> caramelos[i];
    }

    // Ordenar en orden descendente
    sort(caramelos.rbegin(), caramelos.rend());

    // Distribuir los caramelos
    for (int i = 0; i < n; i++) {
        if (cAlice <= cBob) {
            cAlice += caramelos[i];
        } else {
            cBob += caramelos[i];
        }
    }

    return (cAlice == cBob ? "YES" : "NO");
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        cout << solution() << endl;
    }
}

