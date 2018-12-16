#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod(string no, int m) {
	int res = 0;
	for(int i = 0;i<no.size();i++) {
		res = (res * 10 + no[i] - '0')%m;
	}
	return res;
}
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		int s = 0;
		for(int i = 0;i<x;i++){
			string r;
			cin>>r;
			s += mod(r, x);
		}

		if(s%x!=0) {
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
	//return 0;
}
