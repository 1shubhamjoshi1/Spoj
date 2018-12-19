#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll stalls[100005] = {0};
ll stallMax = 0;
ll n,c;
bool checkForK(ll k){
	ll cowCnt = 1;
	ll lastDist = stalls[0];
	for(int i = 1;i<n;i++){
		if(stalls[i]-lastDist>=k){
			cowCnt++;
			lastDist = stalls[i];
		}
		if(cowCnt>=c){
			break;
		}
	}
	if(cowCnt>=c){
		return true;
	} else{
		return false;
	}
}

ll findIn(ll l,ll r){
	if(l>r){
		return -1;
	}
	ll mid = (l+r)/2;
	if(checkForK(mid) && !checkForK(mid+1)){
		return mid;
	} else if(checkForK(mid)){
		return findIn(mid+1,r);
	} else{
		return findIn(l,mid-1);
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>c;
		for(int i = 0;i<n;i++){
			cin>>stalls[i];
		}
		sort(stalls,stalls+n);
		ll ans = findIn(1,stalls[n-1]);
		cout<<ans<<endl;
	}
	return 0;
}