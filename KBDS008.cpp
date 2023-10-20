#include<bits/stdc++.h>
# define ll long long
using namespace std;

int solve(ll n){
	ll a[10]={0};
	a[0]=1;
	a[1]=1;
	if(n%2==1){
		return -1;
	}else{
		for(int i=2;i<=n;i*=2){
			for(int j=i;j<=n;j++){
				a[j]+=a[j-i];
			}
		}
		return a[n];
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solve(n)<<endl;
		
	}
	
}