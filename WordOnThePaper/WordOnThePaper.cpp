// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string result = "";
    int contador = 0;

    while(contador < 8){
        string s; cin >> s;
        for(char x : s) if(x != '.') result += x;
        contador++;
    }

    cout << result << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}
