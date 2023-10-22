#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	
	stack<char>stk;
	int res=0;
	
	for(char c:s){
		if(c=='('){
			stk.push(c);
		}else{
			if(!stk.empty() && stk.top()=='('){
				stk.pop();
			}else{
				res++;
			}
		}
	}
	
	return res+stk.size();
}


int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<solve(s)<<endl;
    }
	return 0;
}