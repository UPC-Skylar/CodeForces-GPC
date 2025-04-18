// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <string>
using namespace std;

int solve(){
    int n; cin >> n;
    if(n < 10) return n; // 1 cifra

    int cifras = to_string(n).size(), numLimite = 0;
    string aux = "";
    for(int i = 0; i < cifras; i++) aux += to_string(n)[0];
    numLimite = stoi(aux); // de string a entero en C++
    return (n >= numLimite ? 9 * (cifras - 1) + (aux[0] - '0') : 9 * (cifras - 1) + (aux[0] - '0' - 1)); 
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
