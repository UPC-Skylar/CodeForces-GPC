// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool answer(int a, int b, int c){
	if(a != b +c && b != a + c && c != a + b) return false;
	else if(a == b + c || b == a + c || c == a + b) return true;
}

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++){
			int a,b,c; cin >> a >> b >> c;
			cout << (answer(a,b,c) ? "YES" : "NO") << endl;
	}
}
