// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int c){
	if(a == b) return c;
	else if(a == c) return b;
	else if(b == c) return a;
}

int main() {
	int t; cin >> t;
	while(t--){
		int a, b, c; cin >> a >> b >> c;
		cout << solution(a, b, c) << endl;
	}
}
