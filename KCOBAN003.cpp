#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long L,R;
		cin>>L>>R;
		int c1=sqrt(L);
		int c2=sqrt(R);
		if (c1*c1!=L) c1+=1;
		int dem=c2-c1+1;
		cout<<dem<<endl;
		
		
	}
	
	return 0;
}