#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	while(1){
		float a;
		cin>>a;
		ll b = a*100;
		if(b==0)
			break;
		float lent = 0;
		float lent2 = 1.0;
		int cnt = 0;
		int ind = 2;
		while(lent<a){
			cnt++;
			lent+=(lent2/ind);
			ind++;
		}
		cout<<cnt<<" card(s)"<<endl;
	}
	return 0;
}