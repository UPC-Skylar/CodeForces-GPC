// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string str1, str2; cin >> str1 >> str2;
	int result = 0;
	for(int i = 0; i < str1.size() ; i++){
		if(tolower(str1[i]) != tolower(str2[i])){
			//En la posicion i hay una letra diferente
			 char ch1 = tolower(str1[i]);
        	char ch2 = tolower(str2[i]);
			if(char(ch1) > char(ch2)) result = 1;
			else if(char(ch1) < char(ch2)) result = -1;
			break;
		}
	}
	cout << result;
}
