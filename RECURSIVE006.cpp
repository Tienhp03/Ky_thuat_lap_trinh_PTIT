#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll a, ll b){
	if(b==0) return 1;
	ll res=power(a,b/2);
	if(b%2==0){
		res=((res%mod)*(res%mod))%mod;
	}else{
		res= (((res%mod)*(res%mod))%mod * (a%mod))%mod;
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		if(n%2==0){
			ll k=n/2;
			ll a=power(5,k);
			ll b=power(4,k);
			cout<<((a%mod)*(b%mod))%mod<<endl;
		}else{
			ll k=n/2;
			ll a=power(5,k+1);
			ll b=power(4,k);
			cout<<((a%mod)*(b%mod))%mod<<endl;
		}
	}
	return 0;
}