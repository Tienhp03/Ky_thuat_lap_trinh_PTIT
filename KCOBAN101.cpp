#include<bits/stdc++.h>
/*/ b1: dung mang 10 cai de luu so lan xuat hien
cua 10 chu so
   b2: cho moi so trong doan a-b thanh dang string
   b3: duyet tung phan tu trong s luu vao mang dem
   b4: cho s rong de xet so sau khong bi trung so trc
 */
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int count[10]={0};
		for(int i=min(a,b);i<=max(a,b);i++){
			string s=to_string(i);
			for(int j=0;j<=s.size();j++){
				count[s[j]-'0']++;
			}
			s="";
		}
		for(int i=0;i<10;i++){
			cout<<count[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}