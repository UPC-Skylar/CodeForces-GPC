// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>

using namespace std;

string solution(string word){
    if(word.size() <= 10) return word; //"localization"
    string result = "";
    result = word[0] + to_string(word.size() - 2) + word[word.size() - 1];
    return result;
}

int main() {
	int n; cin >> n;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        cout << solution(word) << endl;
    }
}
