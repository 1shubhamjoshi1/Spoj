#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<long long,long long> lPair;
typedef pair<int, int> iPair;
#define MAX1 100005
#define rep0(i,n) for(int(i)=0; (i)<(n);++(i))
#define rep1(i,n) for(int(i)=1; (i)<(n);++(i))
#define rep2(i,n) for(int(i)=1; (i)<=(n);++(i))
#define pb push_back
#define mp make_pair


bool valid(ll x,ll y){
	return ((x-y)%2 == 0 && (x-y)<=2 && (x-y) >=0);
}
ll numberAt(ll x,ll y){
	return x%2==0?(x+y):(x+y-1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll x,y,z;
		cin>>x>>y;
		if(valid(x,y)){
			cout<<numberAt(x,y)<<endl;
		} else {
			cout<<"No Number"<<endl;
		}
	}
	return 0;
}