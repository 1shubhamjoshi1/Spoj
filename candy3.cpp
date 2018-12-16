#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		ll n,c,s;
		cin>>n;
		s = 0;
		for(int i = 0;i<n;i++){
			cin>>c;
			s+=c;
		}
		if(s%n == 0){
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
return 0;
}