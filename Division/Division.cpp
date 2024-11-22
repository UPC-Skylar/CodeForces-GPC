// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int rating; cin >> rating;
		int numberRating = (rating >= 1900) * 1 + (rating >= 1600 && rating <= 1899) * 2 +
			(rating >= 1400 && rating <= 1599) * 3 + (rating <= 1399) * 4;
		cout << "Division " << numberRating << endl;
	}
}
