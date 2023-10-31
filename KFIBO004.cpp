#include<bits/stdc++.h>

using namespace std;

bool check(int a){
	long long x=5*a*a+4;
	long long y=5*a*a-4;
	long long x1=sqrt(x);
	long long y1=sqrt(y);
	if(x1*x1==x||y1*y1==y){
		return true;
	}
	return false;
}


int solve(int n){
	long long a[50];
	a[0]=0;
	a[1]=1;
	int ok=0;
	for(int i=2;i<50;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=1;i<50;i++){
		if(check(n-a[i])==true){
			cout<<a[i]<<" "<<n-a[i];
			cout<<endl;
			ok=1;
			break;
		}
	}
	if(ok==0) cout<<-1<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
	}
	return 0;
}