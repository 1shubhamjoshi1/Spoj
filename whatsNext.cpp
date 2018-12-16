#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	while(1){
		ll a,b,c;
		cin>>a>>b>>c;
		if(a== 0 && b == 0 && c == 0){
			break;
		}
		else {
			if(b-a == c-b && b-a != 0){
				cout<<"AP "<<(c+(b-a))<<endl;
			} else {
				cout<<"GP "<<(c*b)/a<<endl;
			}
		}
	}
	return 0;
}