#include<bits/stdc++.h>
#define ll long long
using namespace std;
// x gia, y vo hop, m tien
int solve(int x, int y, int m){
	int res=m/x;
	int vo=m/x;
	int cur_vo=0;
	
	while(vo>0){
		cur_vo=vo+(cur_vo%y);
		vo=cur_vo/y;
		res+=vo;
	}
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		int x,y,m; cin>>x>>y>>m;
		cout<<solve(x,y,m)<<endl;
	}
	
	return 0;
}