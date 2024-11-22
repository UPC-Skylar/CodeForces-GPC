// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string solution(string s){
	string result;
	if(s.size() == 1){
		if(s[0] == '.') return "0";
	}
	else if(s.size() == 2){
		if(s[0] == '.' && s[1] == '.') return "00";
		else if(s[0] == '-' && s[1] == '.') return "1";
		else if(s[0] == '-' && s[1] == '-') return "2";
	}
	else {
		//El tamaño del string es mayor que 3
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '-' && i != s.size() - 1){
				result += (s[i + 1] == '-' ? "2" : "1");
				i++;
			} else if (s[i] == '.')
				result += "0";
		}

		return result;
	}
}

int main() {
	string s; cin >> s;

	cout << solution(s);
}
