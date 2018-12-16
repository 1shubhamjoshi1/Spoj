#include <bits/stdc++.h>
using namespace std;
#define int long long
 main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int a, b;
		cin>>a>>b;
		if(b == 0) {
			cout<<1<<endl;
			continue;
		}

		if(a==0) {
			cout<<0<<endl;
			continue;
		}

		if(b%4 == 0) {
			int A = pow(a,4);
			cout<<A%10<<endl;
		} else {
			int A = pow(a,b%4);
			cout<<A%10<<endl;
		}
	}
//	return 0;
}
