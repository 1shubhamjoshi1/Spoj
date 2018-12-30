#include <bits/stdc++.h>
using namespace std;
#define int long long
string A;string B;
int n, m;
#define MAX 10001
int dp[MAX][MAX];
int minDist(int i, int j) {
	if(i == A.size()) {
		return abs(m - j);
	}
	if(j == B.size()) return abs(n - i);


	if(dp[i][j]!=-1) return dp[i][j];
	int ans = INT_MAX;
	if(A[i] == B[j])
	ans = min(ans, minDist(i + 1,j+1));
	else
	ans = min(ans, 1 + min(minDist(i + 1, j), min(minDist(i,j+1), minDist(i+1, j+1))));
	return dp[i][j] = ans;
}
 main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		cin>>A;
		cin>>B;
		memset(dp, -1, sizeof dp);
		n = A.size(); m = B.size();
		cout<<minDist(0, 0)<<endl;
	}
	//return 0;
}
