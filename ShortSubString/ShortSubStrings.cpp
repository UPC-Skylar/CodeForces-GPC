// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string solution(string s){
	if(s.size() <= 2) return s;
	else {
		string result(1, s[0]);
		for(int i = 1; i < s.size() - 2; i += 2){
			result += s[i];
		}

		result += s.back();
		return result;
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << solution(s) << endl;
	}
}
