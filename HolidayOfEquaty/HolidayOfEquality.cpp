// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> numeros;
	int n; cin >> n;
	int contador = 0;
	while(n--){
		int a; cin >> a;
		numeros.push_back(a);
	}

	auto itMaxE = max_element(numeros.begin(), numeros.end());
	for(int n: numeros)
		contador += (*itMaxE - n);

	cout << contador;
}
