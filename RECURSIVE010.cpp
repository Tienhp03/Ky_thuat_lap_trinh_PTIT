#include<bits/stdc++.h>
 using namespace std;
 int count(int n) {
    int x = 0;
    for (long long m = 1; m <= n; m *= 10)
        x += (n/m + 8) / 10 * m + (n/m % 10 == 1) * (n%m + 1);
    return x;

    }
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<count(n)<<endl;
  }
}
