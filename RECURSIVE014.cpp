#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dem(ll n){
	if(n<2) return n;
	ll ans=0;
	ans=1+min(n%3+dem(n/3),n%2+dem(n/2));
	return ans;
}
int main(){
     int t;
     cin>>t;
     while(t--){
      ll n;
      cin>>n;
      cout<<dem(n)-1<<endl;
	 }

   return 0;
}