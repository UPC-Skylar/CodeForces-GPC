// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b, c; cin >> a >> b >> c;
	string total = a + b; 
	unordered_map<char, int> frecuenciaTotal, frecuenciaC;

	for (char element : total) {
        frecuenciaTotal[element]++;
    }

	for(char element: c){
		frecuenciaC[element]++;
	}

	cout << (frecuenciaTotal == frecuenciaC ? "YES" : "NO");
}
