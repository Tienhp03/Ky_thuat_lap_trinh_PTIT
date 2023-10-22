#include<bits/stdc++.h>

using namespace std;

string solve(string s){
	stack<char>stk;
	int l=s.size();
	
	for(int i=0;i<l;i++){
		if(s[i]!='*'){
			stk.push(s[i]);
		}else if(s[i]=='*') stk.pop();
	}
	
	string res="";
	while(!stk.empty()){
		res = stk.top()+res;
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