// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(){
    vector<string> puntos = {"1111111111", "1222222221", "1233333321", "1234444321", "1234554321", "1234554321", "1234444321", "1233333321", "1222222221", "1111111111"};
    int contadorPuntos = 0;
    int i = 0;
    while(i < 10){
        string s; cin >> s;
        for(int j = 0; j < s.size(); j++) if(s[j] == 'X') contadorPuntos += (puntos[i][j] - '0');
        i++;
    }

    return contadorPuntos;
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
