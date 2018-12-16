#include <iostream>
using namespace std;

int main() {
	// your code goes here
	while(true) {
		int n;
		cin>>n;
		if(n==-1) break;
		int a[n];
		int s= 0;
		for(int i = 0;i<n;i++) {
			cin>>a[i];
			s += a[i];
		}
		int ans = 0;
		if(s%n) {
			cout<<-1<<endl;
		} else {
			for(int i = 0;i<n;i++) {
				if(a[i] < s/n) {
					ans += s/n - a[i];
				}
			}
			cout<<ans<<endl;
		}


	}
	return 0;
}
