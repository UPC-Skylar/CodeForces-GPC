// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int algorithm(int &n, int &k){
	while(k > 0){
		if(n % 10 == 0) n /= 10;
		else 
			n--;
		k--;
	}
	return n;
}

int main() {
	int n, k; cin >> n >> k;
	//n = numero a restar
	//k = cantidad de restas
	cout << algorithm(n, k);
}
