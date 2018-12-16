#include <bits/stdc++.h>
using namespace std;

main() {
	// your code goes here
	int n;
	while(cin>>n && n!=0) {
		int ans = 0;
		for(int i = 0;i<=n;i++) {
			ans += pow(i,2);
		}
		cout<<ans<<endl;
	}
}
