// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n; //num filas
    deque<int> columnas;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < s.size(); j++) if(s[j] == '#') columnas.push_front(j + 1);
    }

    for(int x : columnas) cout << x << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}
