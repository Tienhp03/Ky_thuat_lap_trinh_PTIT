#include<bits/stdc++.h>

using namespace std;

long long a[21];

void tinh(){
	a[0]=1;
	for(int i=1;i<=20;i++){
		a[i]=a[i-1]*i;
	}
}



int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		tinh();
		float res=0.0;
		for(int i=1;i<=n;i++){
			float k=1.0/(i+1);
			res=pow(res+a[i],k);
		}
		cout<<setprecision(3)<<fixed<<res<<" "<<endl;
	}
	return 0;
}