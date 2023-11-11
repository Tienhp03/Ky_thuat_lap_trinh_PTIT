#include<bits/stdc++.h>

using namespace std;

void solve(queue<string>&q, int k){
	deque<string> m;
	
	for(int i=0;i<k;i++){
		m.push_front(q.front());
		q.pop();
	}

	
	while(!m.empty()){
		q.push(m.front());
		m.pop_front();
	}

	
	for(int i=0; i<q.size()-k;i++){
		q.push(q.front());
		q.pop();
	}

}


int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; int k;
		cin>>s>>k;
		queue<string> q;
		string tmp="";
		
		
		for(char c:s){
			if(c==','){
				q.push(tmp);
				tmp="";
			}else tmp+=c; 
		}
		q.push(tmp);//phan tu cuoi cung
		
		
		solve(q,k);
		while (q.size()>1) {
        cout << q.front() << ",";
        q.pop();
    }
    cout<<q.front()<<endl;
	
	}
	return 0;
}