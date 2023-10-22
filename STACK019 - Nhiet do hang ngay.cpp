#include<bits/stdc++.h>

using namespace std;

// 73,74,75,71,69,72,76,73 n=8\
//  0  1 2  3  4  5  6  7
//1,1,4,2,1,1,0,0

vector<int> solve(vector<int>nhietdo){
	int n=nhietdo.size();
	vector<int>res(n,0);
	stack<int>stk;
	
	for(int i=n-1;i>=0;i--){
		while(!stk.empty() && nhietdo[i]>=nhietdo[stk.top()]){
			stk.pop();
		}
		if(!stk.empty()) res[i]=stk.top()-i;
		stk.push(i);
	}
	
	return res;
}


void nhapxuat(){
    string s;
    cin >> s ;
    vector<int>vt;
    size_t pos = 0 ;
    string token;
    while((pos = s.find(',')) != string::npos){//chay den khi ko con dau phay trong chuoi
        token = s.substr(0,pos);
        vt.push_back(stoi(token));
        s.erase(0,pos+1);
    }
    vt.push_back(stoi(s));
    vector<int>res =solve(vt);
    for(int i = 0 ; i < res.size() ; ++i){
        cout << res[i];
        if(i < res.size() - 1){
            cout << ",";
        }
    }
}

int main(){
	int t; cin>>t;
	while(t--){
		nhapxuat();
        cout << endl;
    }
	return 0;
}