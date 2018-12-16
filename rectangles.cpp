#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	ll ans = 0;
	for(int i = 1;i<=n;i++){
		if(n/i - i + 1 >0){
			ans+=(n/i - i + 1);
		} else {
			break;
		}
	}
	cout<<ans<<endl;
}