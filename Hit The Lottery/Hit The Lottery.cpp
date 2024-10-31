// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> billetes = {100, 20, 10, 5, 1};
	int cantBilletes = 0;

	for(int i = 0; i < 5; i++){ //88
		cantBilletes += n / billetes[i]; //4
		n %= billetes[i];
	}

	cout << cantBilletes << endl;
}
