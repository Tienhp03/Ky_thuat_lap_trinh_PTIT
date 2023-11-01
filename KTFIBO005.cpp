#include <bits/stdc++.h>
using namespace std;
vector<int> arr = { 0,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025};
int CountSubsetSum(vector<int>& arr, int val, int n)
{
int count = 0;
vector<int> PresentState(val + 1, 0),
LastState(val + 1, 0);
PresentState[0] = LastState[0] = 1;
if (arr[0] <= val)
LastState[arr[0]] = 1;
for (int i = 1; i < n; i++) {
for (int j = 1; j <= val; j++)
PresentState[j]= ((j >= arr[i]) ? LastState[j - arr[i]]: 0)+ LastState[j];
LastState = PresentState;
}
return PresentState[val];
}
int main()
{ int t;
cin>>t;
while(t--){
int n;
cin>>n;
cout << CountSubsetSum(arr,n,25)<<"\n";
}
}