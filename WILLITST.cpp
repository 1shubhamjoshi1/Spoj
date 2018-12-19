#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll inp;
	cin>>inp;
	ll bitcnt = 0;
	ll po = 1;
	while(po<=inp){
		if(inp&po){
			bitcnt++;
		}
		po*=2;
	}
	if(bitcnt ==1 ){
		cout<<"TAK"<<endl;
	}else{
		cout<<"NIE"<<endl;
	}
	return 0;
}