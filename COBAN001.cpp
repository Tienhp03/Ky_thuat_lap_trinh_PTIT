#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int solve(ll n){
	string s=to_string(n);
	int l=s.length();
	ll sum=0;
	for(int i=0;i<l;i++){
		int x=s[i]-'0';
		sum+=pow(x,l);
	}
	if(sum==n){
		return 1;
	}else{
		return 0;
	}
} 

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}