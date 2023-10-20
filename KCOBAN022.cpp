#include<bits/stdc++.h>

using namespace std;

int solve(int x,int y,int m){
	int count=0;
	int box1=m/x;
	count+=box1;
	int boxs=0;
	
	while(box1>0){
		boxs=box1+(boxs%y);
		box1=boxs/y;
		count+=box1;
	}
	cout<<count<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,m;
		cin>>x>>y>>m;
		solve(x,y,m);
	}
	
	return 0;
}