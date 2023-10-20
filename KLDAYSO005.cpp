#include<bits/stdc++.h>

using namespace std;
int a[100001];

int solve(int n){
/*	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int x;
			if(a[i]>a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
*/	

	int count=0;
	sort(a+1,a+n+1);
	if(a[1]!=a[2]) count ++;
	if(a[n]!=a[n-1]) count++;
	for(int i=2;i<=n-1;i++){
		
		if(a[i]!=a[i+1] && a[i]!=a[i-1]) count++;
	}
	return count;
}



int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<solve(n)<<endl;
	}
	return 0;
}