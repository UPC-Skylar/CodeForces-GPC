// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int policiasContratados = 0, crimenesSR = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x == -1 && policiasContratados <= 0) crimenesSR++;
		else if(x == -1 && policiasContratados > 0) policiasContratados--;
		else
			policiasContratados += x; 
	}

	cout << crimenesSR;
}
