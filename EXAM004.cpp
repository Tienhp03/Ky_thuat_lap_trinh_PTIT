#include<bits/stdc++.h>

using namespace std;

int ky_giong_nhau(string a){
	for(int i=0;i<a.size()-1;i++){
		if(a[i]==a[i+1]) return 0;
	}
	return 1;   	
}

int kt_ki_tu(string s){
	int a[4]={0};
	
	for(int i=0;i<s.size();i++){
		
		if(s[i]>='A' && s[i]<='Z') a[0]++;
		if(s[i]>='a' && s[i]<='z') a[1]++;
		if(s[i]>='0' && s[i]<='9') a[2]++;
		if(ispunct(s[i])) a[3]++;
	}
	
	for(int i=0;i<4;i++){
		if(a[i]<1) return 0;
	}
	return 1;
}

string solve(string s){
	if(ky_giong_nhau(s)==1 && kt_ki_tu(s)==1 ){
		return "VALID";
	}else{
		return "INVALID";
	}
}

int main(){
	ifstream ip("D:/dmm/password.in");
	ofstream of("D:/dmm/res.out");
	string line;
	while(getline(ip,line)){
		string s=line;
		cout<<solve(s)<<endl;
	}
	return 0;
}