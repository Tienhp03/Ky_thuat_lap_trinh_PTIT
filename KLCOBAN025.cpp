#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll a[32];
void sinh(){
	a[0]=1;
	a[1]=1;
	for(int i=2;i<32;i++){
		for(int j=0;j<=i-1;j++){
			a[i]+=a[j]*a[i-j-1];
		}
	}
}

int main(){
	sinh();
     int t;
     cin>>t;
     while(t--){
   int n;
   cin>>n;
   cout<<a[n]<<"\n";
	 }

   return 0;
}