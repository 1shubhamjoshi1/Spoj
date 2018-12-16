#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	while(true) {
	int a, b, c;
	cin>>a>>b>>c;
	if(a== 0 and b==0 and c==0) break;
	if(b - a == c - b) {
		cout<<"AP "<<c + b-a<<endl;
	} else {
		cout<<"GP "<<(b/a *c)<<endl;
	}
	}
	return 0;
}
