#include<bits/stdc++.h>

using namespace std;

string solve(string s){
        string res;
        stack<char>stk;
        
        for (char x : s) {
            if (x == '(') {
                if (!stk.empty()) {
                    res += x;
                }
                stk.push(x);
            } else if (x == ')') {
                stk.pop();
                if (!stk.empty()) {
                    res += x;
                }
            }
        }
        
        return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}