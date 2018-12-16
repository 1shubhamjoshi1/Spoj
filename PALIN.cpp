#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int idx = (s.size()%2)?s.size()/2 : (s.size()/2)-1;
		int mid = idx;
		int carry = 0;


		string sub = s.substr(0, mid);
		if(s.size()%2 == 0) {
			sub = s.substr(0, mid+1);
		}
		string subB = s.substr(mid + 1);


		string rev = sub;
		reverse(rev.begin(), rev.end());
		if(subB < rev) {
			if(s.size()%2 == 1) {
			cout<<sub<<s[mid]<<rev<<endl;
			} else {
				cout<<sub<<rev<<endl;
			}
			continue;
		}
		//cout<<sub<<" "<<subB<<" "<<idx<<endl;
		if(s[idx] == '9') {
			s[idx]= '0';
			carry = 1;
			idx--;
			while(idx >= 0 and carry !=0) {
				if(s[idx] == '9') {
					s[idx] = '0';
					carry = 1;
				} else {
					s[idx] += carry;
					carry = 0;
				}
				idx--;
			}
			if(carry) {
				cout<<1;

			}
		} else {
			s[idx] += 1;
		}


		for(int i = 0;i<mid;i++) {
			cout<<s[i];
		}

		if(s.size()%2 == 0) {
			cout<<s[mid];
		}
		for(int i = mid;i>=0;i--) {
			if(carry and i == 0) {
				cout<<1;
				continue;
			}
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
