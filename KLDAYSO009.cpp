#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(string s){
	ll l=s.length();
	ll sum=0;
	ll res=0;
	
	for(ll i=0;i<l;i++){
		if(s[i]=='0'){
			sum+=1;
		}else{
			sum-=1;
		}
		if(sum<0) sum=0;
		res=max(res,sum);
	}
	
	if(res==0){
		cout<<-1<<endl;
	}else{
		cout<<res<<endl;
	}
	
}


int main(){
	int t; cin>>t;
	
	while(t--){
		string s;
		cin>>s;
	//	getline(cin,s);
		solve(s);
	}
	return 0;
}