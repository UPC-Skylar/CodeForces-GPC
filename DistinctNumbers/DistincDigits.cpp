// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int x){
    set<int> numeros;
    //numero
    while(x > 0){
        int digito = x % 10;
        if(numeros.find(digito) != numeros.end()) return false;
        numeros.insert(digito);
        x /= 10;
    }

    return true;
}

int main() {
	int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++){
        if(isDistinct(i)) {
            cout << i;
            return 0;
        }
    }

    cout << "-1";
}
