// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t; cin >> n >> t;
	string s; cin >> s;
	//B = boy , G = girl
	while(t > 0){
		vector <int> aux; //[0,3] -> posiciones

		for(int i = 0; i < n; i++)
			if(s[i] == 'B' && i < n - 1) aux.push_back(i);
		
		for(int i = 0; i < aux.size(); i++)
			swap(s[aux[i]], s[aux[i] + 1]);

		t--;
	}

	cout << s << endl;
}
