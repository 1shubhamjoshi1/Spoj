#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MAX 10000001
vector<int> g[MAX];
bool vis[MAX];

bool dfs(int node) {

	for(int i = 0;i<g[node].size();i++) {
		if(!vis[g[node][i]]) {
			vis[g[node][i]] = true;
			dfs(g[node][i]);
		} else {
			return false;
		}
	}
	return true;
}

main() {
	int n, m;
	cin>>n>>m;
	memset(vis, false, sizeof vis);
	for(int i = 0;i<m;i++) {
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);

	}
	vis[1] = true;
	int status = dfs(1);

	//cout<<status<<endl;
	for(int i = 1;i<=n;i++) {
		if(!vis[i]) {
			cout<<"NO"<<endl;
			return 0LL;
		}
	}
	if(m!=n-1) {
		cout<<"NO"<<endl;
		return 0LL;
	}
	if(status) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}

}
