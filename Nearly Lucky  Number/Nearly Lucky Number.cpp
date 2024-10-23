// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	long long n; cin >> n;
	string result;
	string number = to_string(n);
	int c4 = 0, c7 = 0;
	for(int i = 0; i < number.size(); i++){
		if(number[i] == '4') ++c4;
		else if(number[i] == '7') ++c7;
	}
	if(c4 + c7 == 4 || c4 + c7 == 7) result = "YES";
	else result = "NO";
	cout << result << endl;
}
