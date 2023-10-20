// 0 1 2 3 4 5 6 7 8 9 j
// 1 
// 1 1 1 1 1 1 1 1 1 1 i=1
// 1 1 1 1 2 2 2 2 3 3 i=2
// 1 1 1 1 2 2 2 2 3 4 i=3
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n){
	ll ans[n+1]={0};
	ans[0]=1;
	for(int i=1;i*i<=n;i++){
		for(int j=i*i;j<=n;j++){
			ans[j] += ans[j-i*i];
		}
	}
	return ans[n];

	
}


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<solve(n)<<endl;
		
	}
}

