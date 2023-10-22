#include<bits/stdc++.h>

using namespace std;

string solve(string s){
	stack<char>stk;
	int n=s.size();
	
	for(int i=0;i<n;i++){
		if(!stk.empty() && s[i]==stk.top()) stk.pop();
		else stk.push(s[i]);
	}
	
	string res="";
	while(!stk.empty()){
		res=stk.top()+res;
		stk.pop();
	}
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}