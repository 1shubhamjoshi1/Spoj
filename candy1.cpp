#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll candy[10005] = {0};
int main(){
	while(1){
		ll n;
		cin>>n;
		if(n== -1){
			break;
		}
		else {
			ll sum = 0;
			for(int i = 0 ;i<n;i++){
				cin>>candy[i];
				sum+=candy[i];
			}
			if(sum%n!=0){
				cout<<-1<<endl;
			}else {
				sum/=n;
				ll cnt = 0;
				for(int i = 0;i<n;i++){
					if(sum>=candy[i]){
						cnt+=(sum-candy[i]);
					}
				}
				cout<<cnt<<endl;
			}
		}
	}
	return 0;
}