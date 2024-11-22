// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

long long solution(long long a , long long b){
	if(a == b) return 0;
	return (a > b ? ceil((a - b) / 10.0) : ceil((b - a) / 10.0));
}

int main() {
	long long x; cin >> x;
	long long a, b; 
	for(long long i = 0; i < x; i++){
		cin >> a >> b;
		cout << solution(a, b) << endl;
	}
}
