#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[5005] = {0};
ll len = 0;
string s;
void initDp(int len){
	for(int i = 0;i<=len;i++){
		dp[i] = -1;
	}
}

bool condition(int k){
	return (s[k] == '1' || (s[k] == '2' && k+1< len && s[k+1]<='6'));
}

ll calc(int k){
	if(dp[k]!=-1){
		return dp[k];
	} else{
		if(s[k] == '0'){
			return 0;
		}else if(k == len-1){
			return 1;
		}else if(k>=len){
			return 1;
		} else if(condition(k)){
			dp[k] = calc(k+1)+calc(k+2);
		} else {
			dp[k] = calc(k+1);
		}
	}
	return dp[k];
}

int main(){
	while(1){
		cin>>s;
		if(s.compare("0")==0){
			break;
		}
		len = s.length();
		initDp(len);
		ll ans = calc(0);
		cout<<ans<<endl;
	}
	return 0;
}