#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int s; cin>>s;
		double x=log(s)/log(4);
		int y = (int) x;
		if(x-y==0) cout<<1<<endl; 
		else cout<<0<<endl;
	}
	return 0;
}