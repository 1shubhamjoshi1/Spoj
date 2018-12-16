#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	while(1){
		ll n ;
		cin>>n;
		if(n==0){
			break;
		}
		ll ans = n * (n+1) * (2*n +1);
		ans/=6;
		cout<<ans<<endl;
	}
	return 0;
}