#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int solve(ll n){
	vector<int> x;
	while(n>0){
		int y=n%2;
		x.push_back(y);
		n/=2;
	}
	reverse(x.begin(),x.end());
	for(int c:x) cout<<c;

	
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