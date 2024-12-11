// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	int cMisha = 0, cChris = 0;
	while(t--){
		int m, c; cin >> m >> c;
		if(m > c) cMisha++;
		else if(c > m)
			cChris++;
	}

	if(cChris == cMisha) cout << "Friendship is magic!^^";
	else if(cChris > cMisha) cout << "Chris";
	else 
		cout << "Mishka";
}
