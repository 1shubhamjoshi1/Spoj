#include <bits/stdc++.h>
using namespace std;
#define int long long
int pow2(int n) {
	while(n>1) {
		if(n%2 == 0) {
			n/=2;
		} else {
			return false;
		}
	}
	return true;
}
main() {
	// your code goes here
	int n;
	cin>>n;
	if(pow2(n)) {
		cout<<"TAK"<<endl;
	} else {
		cout<<"NIE"<<endl;
	}
}
