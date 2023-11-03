#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool check(int x){
	if(x<2) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}

ll solve(int a, int b){
	ll res=0;
	for(int i=a; i<=b;i++){
		if(check(i)) res+=i;
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
	return 0;
}