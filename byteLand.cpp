#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll byteMax[100000000] = {0};
ll cal = 100000000;
void initByteMax(){
	for(int i=0;i<cal;i++){
		byteMax[i] = -1;
	}
	byteMax[0] = 0;
	byteMax[1] = 1;
	byteMax[2] = 2;
	byteMax[3] = 3;
	byteMax[4] = 4;
}

ll getValue(ll n){
	if(n>=cal){
		return max(n,getValue(n/2)+getValue(n/3)+getValue(n/4));
	} else {
		if(byteMax[n]!=-1){
			return byteMax[n];
		} else {
			byteMax[n] = max(n,getValue(n/2)+getValue(n/3)+getValue(n/4));
			return byteMax[n];
		}
	}
}
int main(){
	initByteMax();
	ll n;
	while(cin >> n){
		ll ans = getValue(n);
		cout<<ans<<endl;
	}
	return 0;
}