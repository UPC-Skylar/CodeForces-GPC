// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool verificar(vector <char> &caracteres, char letra){
	//si existe -> true y si no, false
	if(caracteres.size() == 0) return false;
	else{
		for(int i = 0; i < caracteres.size(); i++)
			if(caracteres[i] == letra) return true;
		
		return false;
	}
}

void solution(){
	int n; cin >> n; //tamaño del string
	string s; cin >> s;
	int cantGlobos = 0;
	vector <char> caracteres;

	for(int i = 0; i < n; i++){
		if(verificar(caracteres, s[i])) cantGlobos++;
		else {
			cantGlobos += 2;
			caracteres.push_back(s[i]);
		}
	}

	cout << cantGlobos << endl;
}

int main() {
	int t; cin >> t;
	while(t--){
		solution();
	}
}
