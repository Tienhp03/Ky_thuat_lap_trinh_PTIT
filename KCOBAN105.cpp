#include<bits/stdc++.h>
#include<deque>
//priority_queue
//top lay ra gia tri lon nhat theo mac dinh
// greater<int> lay ra gi tri nho nhat
using namespace std;
using ll= long long;
const long long mod=1e9+7;

int main(){
	int t; 
	cin>>t;
	while(t--){
		int  n;
		cin>>n;
		long long a[n];
		long long ans=0;
		for(long long &x:a) cin>>x;
		priority_queue<long long, vector<long long>, greater<long long>> pq;
		for(long long x:a) pq.push (x);
	
		while(pq.size()>1){ //khi size bang 1 la con 1 day 
			long long top1=pq.top(); pq.pop();
			long long top2=pq.top(); pq.pop();
			ans+=top1+top2;
			pq.push(top1+top2);
		}
		
		cout<<ans%mod<<endl;
		
	}
}