#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int solve(ll n, ll p){
	int res=0;
	
	for(ll i=p;i<=n;i*=p){
		res+=n/i;
	}
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n,p; cin>>n>>p;
		cout<<solve(n,p)<<endl;
		
	}
	 
	 
	
	return 0; 
}