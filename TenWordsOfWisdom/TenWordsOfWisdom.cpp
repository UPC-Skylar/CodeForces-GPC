// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n; 
    vector<int> cantPalabras;
    vector<pair<int,int>> calidad;

    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        cantPalabras.push_back(a);
        calidad.push_back({i + 1, b});
    }

    int mayorCalidad = 0;

    for(int i = 0; i < n; i++)
        if(cantPalabras[i] <= 10) mayorCalidad = max(mayorCalidad, calidad[i].second);
    
    for(pair<int,int> x : calidad) if(x.second == mayorCalidad) return x.first;
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
