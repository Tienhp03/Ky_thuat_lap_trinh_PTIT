#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int l=s.size();
		int i=0, j=l-1;
		int ok=1;
		
		while(i<=j){
			if(s[i]!=s[j]){
				ok=0;
				break;
			}
			i++;
			j--;
		}
		
		if(ok==0) cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}