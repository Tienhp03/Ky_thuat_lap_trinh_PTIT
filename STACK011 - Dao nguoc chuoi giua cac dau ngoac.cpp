#include<bits/stdc++.h>

using namespace std;

string solve(string s){
	int i=0;
	stack<int>stk;
	
	for(i=0;i<s.size();i++){
		if(s[i]=='('){
			stk.push(i); // lay vi tri cua dau mo ngoac
		}else if(s[i]==')'){
			reverse(s.begin()+stk.top()+1, s.begin()+i); //(abcd)->dcba
			stk.pop();
		}
	}
	
	string res="";
	for(i=0;i<s.size();i++){
		if(s[i]!='(' && s[i]!=')') res+=s[i];
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