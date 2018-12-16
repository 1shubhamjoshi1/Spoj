#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<long long,long long> lPair;
typedef pair<int, int> iPair;
#define MAX1 100005
#define rep0(i,n) for(int(i)=0; (i)<(n);++(i))
#define rep1(i,n) for(int(i)=1; (i)<(n);++(i))
#define rep2(i,n) for(int(i)=1; (i)<=(n);++(i))
#define pb push_back
#define mp make_pair

bool isOp(char k){
	return (k=='+' || k == '-' || k == '*' || k == '/' || k =='^' || k == '(');
}
void transform(string s){
	stack<char> ops;
	ll len = s.length();
	int i;
	rep0(i,len) {
		if(isOp(s[i])){
			ops.push(s[i]);
		} else if(s[i] == ')'){
			while(ops.top() != '('){
				cout<<ops.top();
				ops.pop();
			}
			ops.pop();
		} else {
			cout<<s[i];
		}
	}
	while(!ops.empty()){
		cout<<ops.top();
		ops.pop();
	}
	cout<<endl; 
}
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		transform(s);
	}
	return 0;
}