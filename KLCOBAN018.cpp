#include<bits/stdc++.h>

using namespace std;

long long solve(long long n){
	long long res=0;
	long long i=2;
	while(n/i>=1){
		res+=n/i;
		i*=2;
	}
	
	
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		cout<<solve(n)<<endl;
	}
	
	return 0;
}