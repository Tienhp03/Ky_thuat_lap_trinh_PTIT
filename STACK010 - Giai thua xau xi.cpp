#include<bits/stdc++.h>

using namespace std;

int solve(int n){
	stack<int>stk;
	stk.push(n);
	n-=1;
	int i=0;
	
	while(n>0){
		if(i%4==0) stk.top()*=n;
		else if(i%4==1) stk.top()/=n;
		else if(i%4==2) stk.push(n);
		else stk.push(-n);
		n--; i++;
	}
	
	int res=0;
	while(stk.size()!=0){
		res+=stk.top();
		stk.pop();
	} 
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}