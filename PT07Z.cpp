#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
vector<int> g[MAX];
bool vis[MAX];
int ans = 0;
int dfs(int x) {
	vis[x] = true;
	int m1 = 0;
	int m2 = 0;
	for(int i = 0;i<g[x].size();i++) {
		if(!vis[g[x][i]]) {
			int r = dfs(g[x][i]);
			if(r > m1) {
				m2 = m1;
				m1 = r;
			} else if (r > m2){
				m2 = r;
			}
		}
	}
	ans = max(ans, m2  +  m1);
	return 1 + m1;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1);
	cout<<ans<<endl;

	return 0;
}
