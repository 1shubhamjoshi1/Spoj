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
		vector<int>A(a) , B(b);
		for(int i = 0;i<a;i++) {
			cin>>A[i];
		}

		for(int i = 0;i<b;i++) {
			cin>>B[i];
		}
		int i1 = 0, i2 = 0;
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		while(i1<A.size() and i2 <B.size()) {
			if(A[i1] < B[i2]) {
				i1++;
			} else if(B[i2] < A[i1]) {
				i2++;
			} else {
				i2++;
			}
		}
		if(i1<a) {
			cout<<"Godzilla"<<endl;
		} else if(i2 < b) {
			cout<<"MechaGodzilla"<<endl;
		} else {
			cout<<"uncetain"<<endl;
		}

	}

	//return 0;
}
