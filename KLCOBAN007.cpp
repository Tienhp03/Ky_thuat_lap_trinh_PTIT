// https://www.geeksforgeeks.org/find-the-first-and-last-m-digits-from-k-th-power-of-n/
#include<bits/stdc++.h>
#define ll long long

// [10^(k*log10(n)lay phan thap phan)]*[10^(m-1)]
using namespace std;

ll solve(ll n, int k, int m){
	double y = (double) k * log10(n*1.0);
	double x =  y-(ll)y;
	double temp=pow(10.0,x);
	ll res = temp * pow(10,m-1)*(1LL);
	cout<<res<<endl;
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; int k; int m;
		cin>>n>>k>>m;
		solve(n,k,m);
	}
	
	return 0;
}