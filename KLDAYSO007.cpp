#include<bits/stdc++.h>


using namespace std;


int dem(char a[], int start, int end, int tongtruoc=0){
	if(start==end) return 1;
	
	int sum=0; int res=0;
	
	for(int i=start;i<end;i++){
		sum+=(a[i]-'0');
		if(sum>=tongtruoc) res+=dem(a,i+1,end,sum);
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; 
		char a[41];
		cin>>n>>a;
		cout<<dem(a,0,n,0)<<endl;
	}
	
	return 0;
}