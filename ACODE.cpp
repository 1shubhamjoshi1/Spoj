#include <bits/stdc++.h>
using namespace std;
#define int long long

map<string, int> m;
int fun(string x) {
	if(x.size()==0 or x == "") {
		return 1;
	}

	if(m.find(x)!=m.end()) {
		return m[x];
	}
	int ans = 0;
	if(x.size()>=2 and ((x[0]=='1' and x[1] <='9') or (x[0] =='2' and x[1]<='6'))) {
		ans =  fun(x.substr(2));
	}

	if(x[0]>='1' and x[0]<='9') {
		ans += fun(x.substr(1));
	}
	return m[x] = ans;
}
main() {
	string x;
	while(cin>>x and x!="0") {
		m.clear();
		cout<<fun(x)<<endl;
	}
}
