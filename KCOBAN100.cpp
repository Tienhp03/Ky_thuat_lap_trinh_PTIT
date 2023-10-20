#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long n,p;
		cin>>n>>p;
		long long N=1;
		for(int i=1;i<=n;i++){
			N *=i;
		}
		long long max;
		int m;
		int k=1;
		
		long long A[k+1];
		A[0]=1;
		A[1]=p;
		while(p<=sqrt(N)){
			p*=p;
			k++;
			A[k]=p;
		}
		
		for(int i=0;i<=k;i++){
			if(N%(A[i])==0){
				max=i;
			}
		}
		
		cout<<max;
		cout<<endl;
	}
	
	
	return 0;
}