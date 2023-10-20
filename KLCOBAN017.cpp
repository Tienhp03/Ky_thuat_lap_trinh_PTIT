#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(ll a[],ll n ){

	ll sum1=0;
	ll sum2=-1e18;
	
	for(ll i=0;i<n;i++){
		sum1+=a[i];
		sum2=max(sum2,sum1);
		if(sum1<0) sum1=0; 
	}
	return sum2;
	
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(ll i=0;i<n;i++) cin>>a[i];
		cout<<solve(a,n)<<endl;
	}
	return 0;
}