#include <bits/stdc++.h>
using namespace std;
#define MAX 100000001
#define int long long
map<int, int> m;
int fun(int x) {

	if(x <= 0) {
		return 0;
	}

	if(m.find(x) != m.end()) return m[x];

	return (m[x] = max(x,max(x/2, fun(x/2)) + max(x/3, fun(x/3)) + max(x/4, fun(x/4))));

}
 main() {
	// your code goes here
	int n;
	while(cin>>n) {
		m.clear();
		cout<<fun(n)<<endl;
	}
	//return 0;
}
