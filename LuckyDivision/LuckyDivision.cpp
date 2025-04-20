// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool isAlmostLucky(int n){
    //solo tiene digitos 4 y 7 -> (numeros de la suerte)
    //almost lucky -> puede ser divisible exactamente por un numero de la suerte
    set <int> numerosSuerte = {4,7,44,47,444,474,477,744,747,777};
    if(numerosSuerte.count(n) >= 1) return true;
    for(int x : numerosSuerte) if(n % x == 0) return true;
    return false;
}

int main() {
	int n; cin >> n;
    cout << (isAlmostLucky(n) ? "YES" : "NO");
}
