// ways(n)=ways(n-1) + ways(n-2)
#include<bits/stdc++.h>
#define ll long long
const ll mod=1e9+7;


using namespace std;

ll solve(ll n){
	int ans[n+1];
	ans[0]=0;
	ans[1]=1;
	for(ll i=2;i<=n;i++){
		ans[i]=ans[i-1]+ans[i-2];
	}
	return ans[n]%mod;
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}