// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    deque <int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    v.push_front(1);
    v.push_back(1);

    int contador = 0, cuentaAux = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) cuentaAux++;
        else {
            contador = max(contador, cuentaAux);
            cuentaAux = 0;
        }
    }

    return contador;
}

int main() {
	int t; cin >>  t;
    while(t--)
        cout << solve() << endl;
}
