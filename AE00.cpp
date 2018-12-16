#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans = n;
	for(int i = 2;i<=sqrt(n);i++) {
		for(int j = i; j <= n;j++) {
			if(i * j <= n)
				ans++;
		}
	}
	cout<<ans<<endl;
 	return 0;
}
