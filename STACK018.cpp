#include<bits/stdc++.h>

using namespace std;

vector<int>solve(vector<int>&x){
	
	for(int i=0;i<x.size();i++){
		for(int j=i+1;j<x.size();j++){
			if(x[j]<=x[i]){
				x[i]=(x[i]-x[j]);
				break;
			}
		}
	}
	
	return x;
}


int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		vector<int>x;
		string tmp="";
		
		
		for(char c:s){
			if(c==','){
				x.push_back(stoi(tmp));
				tmp="";
			}else tmp+=c;
		}
		x.push_back(stoi(tmp));
		
		
		vector<int>y=solve(x);
		for(int i=0;i<y.size()-1;i++) cout<<y[i]<<",";
		cout<<y[y.size()-1]<<endl;
	}
	return 0;
}