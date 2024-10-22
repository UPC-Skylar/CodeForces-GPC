// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, result = ""; cin >> s;
	int c1 = 0, c2 = 0, c3 = 0;
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0){
			if(s[i] == '3') c3++;
			else if(s[i] == '2') c2++;
			else if(s[i] == '1') c1++;
		}
	}
	
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0){
			if(c1 > 0) {
				result += '1';
				c1--;
			}
			else if(c1 == 0 && c2 > 0){
				result += '2';
				c2--;
			} 
			else if(c2 == 0 && c3 > 0){
				result += '3';
				c3--;
			}
		} else {
			result += '+';
		}
	}
	cout << result;
}
