#include<bits/stdc++.h>
#define mod 29

using namespace std;

int calc(int x, int p){
	int i,t;
	x%=mod;
	p%=(mod-1);
	if(p==0){
		return 0;
	}else{
		t=1;
		for(i=0;i<p;i++){
			t=(t*x)%mod;
		}
		t--;
		while(t%(x-1)!=0){
			t+=mod;
		}
		i=t/(x-1);
		return i;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,v;
		cin>>n;
		v=calc(2,2*n+1)%mod;
		v=(v*calc(3,n+1))%mod;
		v=(v*calc(167,n+1))%mod;
		cout<<v<<endl;
		
	}
	
}