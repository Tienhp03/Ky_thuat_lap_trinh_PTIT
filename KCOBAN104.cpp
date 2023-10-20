#include<bits/stdc++.h>

using namespace std;

int biendoi1(int a){
	string s=to_string(a);
	string x="";
	for(char c:s){
		if(c=='3'){
			x+='5';
		}else{
			x+=c;
		}
	}
	return stoi(x);
}


int biendoi2(int a){
	string s=to_string(a);
	string x="";
	for(char c:s){
		if(c=='5'){
			x+='3';
		}else{
			x+=c;
		}
	}
	return stoi(x);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int a1=biendoi2(a);
		int b1=biendoi2(b);
		int a2=biendoi1(a);
		int b2=biendoi1(b);
		cout<<a1+b1<<" "<<a2+b2<<endl;
	}
	return 0;
}