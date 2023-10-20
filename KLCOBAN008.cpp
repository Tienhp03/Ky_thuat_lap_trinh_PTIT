#include<bits/stdc++.h>

using namespace std;

string solve(string a, string b){
	
	int i= a.length()-1;
	int j= b.length()-1;
	
	int nho=0;
	string res="";
	
	while(i>=0 || j>=0 || nho!=0){
		int x = (i>=0) ? (a[i]-'0') : 0;
		int y = (j>=0) ? (b[j]-'0') : 0;
		
		int sum = x+y+nho;
		nho=sum/10;
		res+=to_string(sum%10);
		 i--;
		 j--;
	}
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		string res=solve(a,b);
		cout<<res<<endl;
	}
	
}