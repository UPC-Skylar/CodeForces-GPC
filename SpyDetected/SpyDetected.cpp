// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(vector <int>& numeros){
	if(numeros.front() == numeros.back()){
		//El numero diferente esta en medio
		for(int i = 1; i < numeros.size(); i++)
			if(numeros[i] != numeros[i - 1] && numeros[i] != numeros[i + 1])
				return i + 1;
	} else {
		//Esta en los extremos
		return (numeros[0] == numeros[1] ? numeros.size() : 1);
	}
}

int main() {
	int x; cin >> x;
	int n;
	for(int i = 0; i < x; i++){
		cin >> n;
		vector <int> numeros (n);
		for(int j = 0; j < n; j++)
			cin >> numeros[j];

		cout << solution(numeros) << endl;
	}

	return 0;
}
