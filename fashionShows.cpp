#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m[10000] = {0};
ll w[10000] = {0};

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(int i = 0;i<n;i++){
			cin>>m[i];
		}
		for(int i = 0;i<n;i++){
			cin>>w[i];
		}
		sort(m,m+n);
		sort(w,w+n);
		ll hotness = 0;
		for(int i = 0;i<n;i++){
			hotness+=(m[i]*w[i]);
		}
		cout<<hotness<<endl;
	}
	return 0;
}