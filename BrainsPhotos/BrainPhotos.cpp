// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int tamanoArr = n * m;
	bool resultado = true;

	for(int i = 0; i < tamanoArr; i++){
		char letter; cin >> letter; 
		if(letter == 'C' || letter == 'M' || letter == 'Y'){
			resultado = !resultado;
			break;
		}
	}

	cout << (resultado ? "#Black&White" : "#Color") << endl;
}
