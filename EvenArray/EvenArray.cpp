// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solution(){
	int n; cin >> n; //longitud del array
	int paresMal = 0;
	int imparesMal = 0;
	vector <int> numeros(n);

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

	for(int i = 0; i < n; i++){
		if(i % 2 != 0 && numeros[i] % 2 == 0) imparesMal++;
		if(i % 2 == 0 && numeros[i] % 2 != 0) paresMal++;
	}
	
	if(paresMal != imparesMal) return -1;
	
	return paresMal;
}

int main() {
	int t; cin >> t;
	while(t--){
		cout << solution() << endl;
	}
}
