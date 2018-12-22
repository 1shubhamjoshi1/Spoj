#include <bits/stdc++.h>
using namespace std;
#define int long long

main() {
	int n;

	while(cin>>n && n !=0) {
		stack<int> s;
		int presentCount = 1;
		for(int i = 0;i<n;i++) {
			int x;
			cin>>x;
			if(x != presentCount) {
				s.push(x);
			} else {
				presentCount++;
			}
			while(!s.empty() and s.top() == presentCount) {
				s.pop();
				presentCount++;
			}
		}

		//cout<<presentCount<<endl;
		while(!s.empty()) {
			if(s.top() == presentCount) {
				presentCount++;
				s.pop();
			} else {
				break;
			}
		}

		if(s.empty()) {
			cout<<"yes"<<endl;
		} else {
			cout<<"no"<<endl;
		}
	}
}

