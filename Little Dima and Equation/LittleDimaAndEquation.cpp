// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sumaDigitos(int x) {
    int suma = 0;
    while (x > 0) {
        suma += x % 10;
        x /= 10;
    }
    return suma;
}

bool isSatisfyCondition(int x, int a, int b, int c){
    return (b * pow(sumaDigitos(x), a) + c == x ? true : false);
}

int main() {
	int a, b, c; cin >> a >> b >> c;
    vector<int> soluciones;
    
    for(int s = 1; s <= 81; s++){
        ll x = 1LL * b * pow(s, a) + c;
        if(x > 0 && x < 1e9 && sumaDigitos(x) == s) soluciones.push_back((int)x);
    }

    cout << soluciones.size() << "\n";
    for (int x : soluciones) cout << x << " ";
}
