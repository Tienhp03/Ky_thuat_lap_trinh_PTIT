#include<bits/stdc++.h>

using namespace std;

string check(string s){
	stack<char>stk;
	
	for(int i=0;i<s.size();i++){
		if(s[i]!='#') stk.push(s[i]);
		else if(s[i]=='#' && !stk.empty()) stk.pop();
	}
	
	string res="";
	while(!stk.empty()){
		res+=stk.top();
		stk.pop();
	}
	return res;
}


int solve(string s, string t){
	if(check(s)==check(t)) return 1;
	return 0;
}


int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		string t; cin>>t;
		cout<<solve(s,t)<<endl;
	}
	return 0;
}