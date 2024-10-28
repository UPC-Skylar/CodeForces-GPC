// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	//26 letras
	int n; cin >> n;
	string word; cin >> word;
	for(int i = 0; i < word.size(); i++){
		word[i] = tolower(word[i]);
	}
	sort(word.begin(), word.end());
	auto last = unique(word.begin(), word.end());

	word.erase(last, word.end());

	cout << (word.size() == 26 ? "YES" : "NO");
}
