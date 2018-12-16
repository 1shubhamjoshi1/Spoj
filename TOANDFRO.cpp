#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n) {
		string s;
		cin>>s;
		int leftStep = 1;
		int rightStep = 2 * n - 1;
		for(int i = 0;i<n;i++) {
			int idx = i;
			int cnt = 0;
			while(cnt < s.size()/n) {
				cnt++;
				cout<<s[idx];
				idx += (cnt%2 == 1)?rightStep:leftStep;
			}
			leftStep += 2;
			rightStep -=2;
		}
		cout<<endl;
	}
	return 0;
}
