// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int cA = 0, cD = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'A') cA++;
		else if(s[i] == 'D') cD++;
	}
	if(cA > cD) cout << "Anton" << endl;
	else if(cD > cA) cout << "Danik" << endl;
	else cout << "Friendship" << endl;
}
