//nghiem KHONG AM cua pt x1+x2+..+xk=n la C(n+k-1,k-1)

#include<bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;


int solve(int n,int k){
	unsigned long long ans=1;
	for(int i=0;i<k;i++){
		ans*=(n-i);
		ans/=(i+1);
	}
	return ans;
}

int solve2(int n){
	unsigned long long count=0;
	for(int k=2;k<=n;k++){
		count+=solve(n+k-1,k);
	}
	cout<<count%mod;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		solve2(n);
		cout<<endl;
	}
	
	return 0;
}