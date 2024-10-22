// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string str, result = ""; cin >> str;
	int cMayus = 0, cMinus = 0;
	bool mayus = false;
	for(int i = 0; i < str.size(); i++){
		if(isupper(str[i])) cMayus++;
		if(islower(str[i])) cMinus++;
	}

	if(cMayus > cMinus) mayus = true;
	else mayus = false;

	for(int i = 0; i < str.size(); i++){
		if(mayus) result += toupper(str[i]);
		else 
			result += tolower(str[i]);
	}

	cout << result;
}
