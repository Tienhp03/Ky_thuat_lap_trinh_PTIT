
// n=4
// 0 1 2 3 4  j
// 1 1 1 1 1  i=1
// 1 1 2 2 3 i=2
// 1 1 2 2 5 i=4

#include<bits/stdc++.h>

using namespace std;

int solve(int n){
	int count[n+1]={0}; // chay tu 0 la th co so
	count[0]=1;
	for(int i=1;i<=n;i*=2){
		for(int j=i;j<=n;j++){
			count[j] = count[j] + count [j-i];
		}
	}
	return count[n];
	
}


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		
		cout<<solve(n)<<endl;
	}
	return 0;
}