#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	while(1){
		ll n;
		cin>>n;
		if(n==0) break;
		string s;
		cin>>s;
		ll len = s.length();
		ll rows = len/n;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<rows;j++){
				if(j%2==0){
					cout<<s[j*n+i];
				} else {
					cout<<s[j*n+(n-i-1)];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}