#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	while(1){
		ll n,k;
		cin>>n;
		if(n==0) break;

		queue<int> q;
		stack<int> s;
		for(int i = 0;i<n;i++){
			cin>>k;
			q.push(k);
		}
		ll numSeek = 1;
		bool flag = true;
		while(numSeek <=n){
			if(!q.empty() && q.front()==numSeek){
				numSeek++;
				q.pop();
			}else if(!s.empty() && s.top()==numSeek){
				numSeek++;
				s.pop();
			} else if(s.empty() || q.front()<s.top()){
				s.push(q.front());
				q.pop();
			} else {
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<"yes"<<endl;
		} else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}