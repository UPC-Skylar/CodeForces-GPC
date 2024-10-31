// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	set<char> unique_letters;
	for(char letter : input)
		if(isalpha(letter) && islower(letter))
			unique_letters.insert(letter);

	cout << unique_letters.size();
}
