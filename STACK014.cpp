#include<bits/stdc++.h>

using namespace std;

bool solve(string s){
	stack<char>stk;
	
	if(s[0]!='a') return false;
	for(char c:s){
		if(c=='a'){
			stk.push(c);
	    }else if(c=='b'){
	    	if(!stk.empty() && stk.top()=='a'){
	    		stk.push(c);
			}else return false;
		}else{
			if(!stk.empty() && stk.top()=='b'){
				stk.pop();
				if(!stk.empty() && stk.top()=='a') stk.pop();
				else return false;
			}else return false;
		}
	}
	return stk.empty();
}


int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		if(solve(s)) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}