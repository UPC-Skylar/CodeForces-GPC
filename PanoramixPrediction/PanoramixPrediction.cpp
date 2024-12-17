// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int x){
	if(x < 2) return false;
	if(x <= 3) return true;
	if(x % 2 == 0 || x % 3 == 0) return false;

	bool primo = true;
	//Implemtnacion de logica prima
	for(int i = 4; i < x; i++)
		if(x % i == 0) primo = false;
	
	return primo;

}

void solution(int n, int m){
	//Verificar que el proximo primo despues de n sea m -> YES : NO
	int primo = n + 1;
	while (!esPrimo(primo)) {
    primo++;
	}

	cout << ((primo == m) ? "YES" : "NO");
}

int main() {
	int n, m; cin >> n >> m; //n es primo
	solution(n, m);
}
