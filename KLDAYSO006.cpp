#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool sapxep(string a, string b){ // sap xep giam dan
	string x=a+b;
	string y=b+a;
	return x>y;
	
}


int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		ll n; cin>>n;
		string s[n];
		for(ll i=0;i<n;i++){
			cin>>s[i];
		} 
		
		sort(s,s+n,sapxep);
		for(ll i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}