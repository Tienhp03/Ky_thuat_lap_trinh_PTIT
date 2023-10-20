#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull solve(ull n){
	if(n==0) return 1;
	if(n<10) return n;
	return max(solve(n/10) * (n%10), solve(n/10-1) * 9);
	
}

int main(){
	int t; cin>>t;
	while(t--){
		ull n; cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}