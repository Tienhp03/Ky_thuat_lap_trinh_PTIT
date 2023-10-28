#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll N,L; cin>>N>>L;
	//	ll a[N+1];
		ll sum=0;
		for(ll i=1;i<N;i++){
			ll x;
			cin>>x;
			sum+=x;
		}
		ll tsum=(L+L+N-1)*N/2;
		ll res=tsum-sum;
		cout<<res<<endl;
	}
	
	return 0;
}