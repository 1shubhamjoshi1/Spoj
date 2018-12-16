#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n], b[n];
		for(int i =0;i<n;i++) {
			cin>>a[i];
		}
		for(int i =0;i<n;i++) {
			cin>>b[i];
		}
		int ans =0;
		sort(a, a + n);
		sort(b, b+n);
		for(int i =0;i<n;i++) {
			ans += a[i] * b[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
