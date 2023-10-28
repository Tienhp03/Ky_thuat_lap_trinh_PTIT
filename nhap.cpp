#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	int res=0;
	int sum=0;
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='0') sum++;
		else sum--;
		if(sum<0) sum=0;
		res=max(res,sum);
	}
	
	if(res==0) cout<<"-1"<<endl;
	else cout<<res<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		solve(s);
	}
	return 0;
}