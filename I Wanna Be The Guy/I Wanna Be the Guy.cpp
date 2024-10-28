// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int cantNiveles; cin >> cantNiveles;
	int p; cin >> p;
	vector<int> nivelesPuedenPasar;
	for(int i = 0; i < p; i++){
		int aux; cin >> aux;
		nivelesPuedenPasar.push_back(aux);
	}

	int q; cin >> q;
	for(int i = 0; i < q; i++){
		int aux; cin >> aux;
		nivelesPuedenPasar.push_back(aux);
	}

	sort(nivelesPuedenPasar.begin(), nivelesPuedenPasar.end()); //ordenamos

	//puntero que apunta al inicio de los duplicados
	auto last = unique(nivelesPuedenPasar.begin(), nivelesPuedenPasar.end());

	//eliminamos desde el inicio de los duplicados hasta el final
	nivelesPuedenPasar.erase(last, nivelesPuedenPasar.end());

	cout << (nivelesPuedenPasar.size() == cantNiveles ? "I become the guy." : "Oh, my keyboard!");
}
