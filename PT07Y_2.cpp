#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int par[MAX];
int root(int idx) {
	while(par[idx] != -1) {
		idx = par[idx];
	}
	return idx;
}

int unionset(int a, int b) {
	par[b] = a;
}

int main() {
	// your code goes here
	memset(par, -1, sizeof par);
	int n, m;
	cin>>n>>m;
	if(m != n-1) {
		cout<<"NO"<<endl;
		return 0;
	}
	for(int i = 0;i<m;i++) {
		int x, y;
		cin>>x>>y;
		//cout<<root(x)<<" "<<root(y)<<" "<<x<<" "<<y<<endl;
		if(root(x) != root(y)) {
			unionset(x, y);
		} else {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
