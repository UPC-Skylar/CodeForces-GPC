// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> numeros(2*n);
    for(int &x : numeros) cin >> x;

    int cPares = 0, cImpares = 0;
    for(int x : numeros) (x % 2 == 0 ? cPares++ : cImpares++);

    cout << (cPares == cImpares ? "Yes" : "No") << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}
