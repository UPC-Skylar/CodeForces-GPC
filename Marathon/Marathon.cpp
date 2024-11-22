// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solution(ll a, ll b, ll c, ll d){
	int contador = 0 ;
	if(b > a) contador++;
	if(c > a) contador++;
	if(d > a) contador++;
	return contador;
}

int main() {
	ll x; cin >> x;
	ll a, b, c, d;
	for(ll i = 0; i < x; i++){
		cin >> a >> b >> c >> d;
		cout << solution(a, b, c, d) << endl;
	}
}
