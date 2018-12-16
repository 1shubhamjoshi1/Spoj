#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int look[10]= {1,1,4,4,2,1,1,4,4,2};
int main(){
	int t;
	cin>>t;
	// int i = 1000;
	// int j = 100;
	// for(ll i = 1;i<1000;i++){
	// 	for(ll j = 0;j<100;j++){
	// 		ll a=i;
	// 		ll b =j;
	// 		cout<<a<<" "<<b<<endl;
	// 		if(b==0){
	// 			cout<<1<<endl;
	// 			continue;
	// 		}else {
	// 			a%=10;
	// 			b%=look[a];
	// 			if(b==0){
	// 				b=look[a];
	// 			}
	// 			ll a1 = 1;
	// 			while(b--){
	// 				a1*=a;
	// 			}
	// 			cout<<(a1%10)<<endl;
	// 		}
	// 	}
	// }
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(b==0){
			cout<<1<<endl;
			continue;
		}else {
			a%=10;
			b%=look[a];
			if(b==0){
				b=look[a];
			}
			ll a1 = 1;
			while(b--){
				a1*=a;
			}
			cout<<(a1%10)<<endl;
		}
	}
return 0;
}