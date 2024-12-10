// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <string>
using namespace std;

int solution(int indice){
	int i = 1;
	int numero = 1;
	while(i < indice){ // 3 < 3  i = 3 num = 3
		numero++;
		if(numero % 3 != 0 && to_string(numero).back() != '3'){
			i++;
		}

	}

	return numero;
}

int main() {
	int t; cin >> t;
	while(t--){
		int indice; cin >> indice;
		cout << solution(indice) << endl;
	}
}
