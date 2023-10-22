#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	stack<int> st;
        int sum =0;
        int sign =1;
        int n = s.size(); 

        for(int i=0; i<n; i++){

            if(s[i]>='0' && s[i]<='9'){
                int num =0;
                while(i<n && s[i]>='0' && s[i]<='9'){
                    num = num*10 + (s[i]-'0');
                    i++;
                }
                sum = sum + sign* num;
                i--;
            }
    
 
            else if(s[i] == '+'){
                sign = 1;
            }
            else if(s[i] == '-'){
                sign = -1;
            }
       
            else if(s[i] == '('){
                st.push(sum);
                st.push(sign);
                sum =0;
                sign =1;
            }
            else if(s[i] == ')'){
                sum = sum* st.top();
                st.pop();
                sum = sum +  st.top();
                st.pop();
            }
        }
        return sum;
    }



int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}