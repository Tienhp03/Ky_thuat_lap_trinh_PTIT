#include<bits/stdc++.h>

using namespace std;
bool nhiphan(int n,int k){
	int cnt=0;
	
	while(n>0){
		int x=n%2;
		if(x==0) cnt++;
		n/=2;
	}
	return (cnt==k);
}

int solve(int n, int k){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(nhiphan(i,k)) cnt++;
	}
	return cnt;
	
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
	return 0;

}