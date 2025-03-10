// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    vector<int> numeros(n);

    for(int &e : numeros) cin >> e;

    bool aparece = false;

    for(int e : numeros) if(e == x) aparece = true;

    cout << (aparece ? "YES" : "NO") << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}
