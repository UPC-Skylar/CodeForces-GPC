// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b, int c){
	return (a + b >= 10 || a + c >= 10 || b + c >= 10 ? "YES" : "NO");
}

int main() {
	int t; cin >> t;
	while(t--){
		int a, b, c; cin >> a >> b >> c;
		cout << solution(a, b, c) << endl;
	}
}
