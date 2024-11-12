// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int k, r; cin >> k >> r;
	string lastNumber;
	int i = 1;
	while(1){
		lastNumber = to_string(k * i).back();
		if(k * i % 10 == 0)
			break;
		else if(lastNumber == to_string(r))
			break;
		i++;
	}

	cout << i << endl;
}
