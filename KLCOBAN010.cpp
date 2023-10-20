#include<bits/stdc++.h>
#define ll long long 
const ll mod=1000000007;

using namespace std;

int solve(ll a, ll n){
	a=a%mod;
	ll res=1;
	while(n>0){
		if(n%2==1) res=(res*a)%mod;
		a=a*a%mod;
		n/=2;
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll a,n; cin>>a>>n;
		cout<<solve(a,n)<<endl;
	}
}