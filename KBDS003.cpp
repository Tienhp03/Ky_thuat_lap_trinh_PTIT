//cong thuc nghiem nguyen cua pt x1+x2+..+xk=n la C(n-1, k-1)
//sd quy hoach dong
/* 1 1
   1 2 1
   1 3 3 1
   1 4 6 4 1
*/
// n=5, k=3
#include<bits/stdc++.h>

using namespace std;

int solve(int n, int k){
	unsigned long long a[n+1][k+1];
	if(k>n){
		return 0;
	}else if(k==1 || k==n){
		return 1;
	}else{
		a[1][0]=1;
        a[1][1]=1;
	    for(int i=2;i<=n;i++){
		    for(int j=0;j<=i;j++){
		    	
		    	if(j==0 || i==j){
		    		a[i][j]=1;
				}else{
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				}
			}
	    }
	    return a[n-1][k-1];
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
		
	}
}   
