// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int arr[n];
	int result = 0;
	for(int i = 0; i < n; i++){
		int score; cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i] >= arr[k - 1] && arr[i] > 0) result++;
	}
	cout << result;
}
