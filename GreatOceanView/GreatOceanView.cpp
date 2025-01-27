// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool recorrerMountain(vector <int> &numbers, int posicion){
    if(posicion == 0) return true;
    else {
        int result = true;
        for(int i = 0;  i < posicion; i++){
            if(numbers[posicion] < numbers[i]) {
                result = !result;
                break;
            }
        }

        return (result ? true : false);
    }
}

void solve(){
    int n; cin >> n;
    vector <int> numbers;

    for(int i = 0; i < n; i++){
        int t; cin >> t;
        numbers.push_back(t);
    }

    int cantMountainOceano = 0;
    for(int i = 0; i < numbers.size(); i++)
        if (recorrerMountain(numbers, i))  cantMountainOceano++;

    cout << cantMountainOceano << endl;
    
}

int main() {
	solve();
}
