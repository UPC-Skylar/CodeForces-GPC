// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

long long algorithm(long long n){
	if(n % 2 == 0) return (n - 2) / 2;
	if(n % 2 != 0) return (n - 1) / 2;
}

int main() {
	int n; cin >> n;
	long long number;
	for(long long i = 0; i < n; i++){
		cin >> number;
		cout << algorithm(number) << endl;
	}
}
