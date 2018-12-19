#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long nm,ans;
		cin>>nm;
		nm--;
		ans = 192;
		ans += (nm*250);
		cout<<ans<<endl;
	}
}