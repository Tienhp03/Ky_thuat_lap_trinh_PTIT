#include<bits/stdc++.h>
using namespace std;
int check(string s){
  int l=0,r=s.size()-1;
  while(l<=r){
    if(s[l]!=s[r]){
      return 0;
    }
    else{
      l++;
      r--;
    }
  }
  return 1;
}
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    cout<<check(s)<<"\n";
  }
}