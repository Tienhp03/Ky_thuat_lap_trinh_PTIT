#include<bits/stdc++.h>

using namespace std;

string solve(string num, int k){
	stack<char>stk;

//	int k=stoi(n);
	
	if(k==0) return num;
	if(k>=num.size()) return "0";
	
	stk.push(num[0]);
	for(int i=1;i<num.size();i++){
		while(k>0 && !stk.empty() && stk.top()>num[i]){
			k--; 
			stk.pop();
		}
		stk.push(num[i]);//ngan xep chua ca so nho
		if(stk.size()==1 && num[i]=='0') stk.pop();
	}
	while(k>0 && !stk.empty()){
		k--;
		stk.pop();
	}
	
	string res="";
	while(!stk.empty()){
		res.push_back(stk.top());
		stk.pop();
	}
	reverse(res.begin(), res.end());

	if(res.size()==0) return "0";
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		string num;
		int k; 
		cin>>num>>k;
		cout<<solve(num,k)<<endl;
	}
	return 0;
}