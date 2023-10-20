#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n){
	string s="0123456789ABCDEF";
	int i=0;
	string res;
	
	while(n>=0){
		int du=n%16;
		res[i]=s[du];
		n/=16;
		i++;
		if(n==0) break;
	}

	while(i--) cout<<res[i];
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		solve(n);
		cout<<endl;
	}
	return 0;
	
}