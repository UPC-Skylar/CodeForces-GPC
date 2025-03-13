// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s; // a = 97, z = 122
    char puntero = 'a';
    int cMovimientos = 0;
        //Si a = 96 -> a = 122 |   a = 123 -> a = 97 
    
    //26 letras
    for(int i = 0; i < s.size(); i++){
        int x1 = abs(s[i] - puntero);
        int x2 = 26 - x1;

        cMovimientos += min(x1, x2);
        puntero = s[i];
    }

    cout << cMovimientos;
}
