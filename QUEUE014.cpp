#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
  {
    string s1,s2;
    cin>>s1>>s2;
    vector<int>v,v1;
    string tmp="";
    int ok=0;
    for(char c:s1){
      if(c==','){
        v.push_back(stoi(tmp));
        tmp="";
      }
      else{
        tmp+=c;
      }
    }
    v.push_back(stoi(tmp));
    string tmp1="";
    for(char c:s2){
      if(c==','){
          v1.push_back(stoi(tmp1));
          tmp1="";
      }
      else{
        tmp1+=c;
      }
    }
    v1.push_back(stoi(tmp1));
    int l1=v.size();
    int l2=v1.size();
    if(l1!=l2){
      cout<<"0\n";
    }
    else{
      for(int i=0;i<l1;i++){
        if(v[i]!=v1[i]){
          cout<<"0\n";
          ok=1;
          break;
        }
      }
      if(ok==0){
        cout<<"1\n";
      }
    }
  }
}