#include <bits/stdc++.h>
using namespace std;

bool isNumber(string s) {
	int cnt = 0;
	for(int i = 0;i<s.size();i++) {
		if(s[i]>='0' and s[i]<='9') {
			cnt++;
		}
	}
	return cnt == s.size();
}

int num(string s) {
	int no = 0;
	for(int i = 0;i<s.size();i++) {
		no = no * 10 + s[i] - '0';
	}
	return no;
}
int main() {
	// your code goes here
	int t;
	cin>>t;

    string s;
    while(getline(cin,s)) {
    	if(s.size() == 0) continue;
		vector<string> res;
		int iter = 0;
		for(int i = 0 ;i<s.size();i++) {
			string str = "";

			while(s[i]!=' ' and  i < s.size()) {
				str += s[i++];
			}
			iter++;
			if(isNumber(str)) {
				res.push_back(str);
			} else if(iter%2) {
				res.push_back("X");
			}

		}

		string A = res[0];
		string B = res[1];
		string C = res[2];

		if(A == "X") {
			cout<<num(C) - num(B) << " + " + B +" = " + C<<endl;
		} else if(B == "X") {
			cout<<A + " + "<< num(C) - num(A) <<" = " + C<<endl;
		} else {
			cout<<A + " + "<< B <<" = " << num(A) + num(B)<<endl;
		}
    }
	return 0;
}
