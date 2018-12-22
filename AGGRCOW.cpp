#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
#define int long long
int a[MAX];
int n;
int c;
bool isPossible(int k) {

	int prev = 0;
	int kk = 1;
	for(int i = 1;i<n;i++) {
		if(abs(a[prev] - a[i]) >=k) {
			prev = i;
			kk++;
			if(kk == c) {
				return true;
			}
		}
	}
	return false;
}
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>c;

		int m = INT_MIN;
		for(int i= 0;i<n;i++) {
			cin>>a[i];
			m = max(m, a[i]);
		}

		sort(a, a + n);

		int l = 1;
		int r = m;

		int ans = 0;
		while(l <= r) {
			int mid = (l + r)/2;
			if(isPossible(mid)) {
				l = mid + 1;
				ans = mid;
			} else {
				r = mid -1;
			}
		}
		cout<<ans<<endl;
	}
}
