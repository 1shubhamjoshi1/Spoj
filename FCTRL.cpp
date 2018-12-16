#include <bits/stdc++.h>
using namespace std;
#define int long long
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int cnt=1;
		int ans = 0;
		while(true) {
			int val = n/pow(5, cnt);
			if(val == 0) break;
			ans += val;
			cnt++;
		}
		cout<<ans<<endl;
	}
}

