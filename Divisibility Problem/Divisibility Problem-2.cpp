// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	long long a, b; 
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		if(a % b != 0){
			long long numeroMult = b * ceil(a * 1.0 / b * 1.0);
			cout << (numeroMult - a) << endl;
		} else cout << 0 << endl;
	}
}
