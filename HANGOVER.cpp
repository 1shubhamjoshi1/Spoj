#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		float a;
		while(cin>>a) {
		if(fabs(a-0.000)<0.0001)break;
		float ans = 0;
		for(int i = 2;i<=400;i++) {
			ans += (float)1/i;

			if(ans > a) {
				cout<<i-1<< " card(s)"<<endl;
				break;
			}
		}
		}
	return 0;
}
