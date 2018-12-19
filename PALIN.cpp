#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;
ll palin[1000000] = {0};
ll lfp = 0;
void print(){
	for(int i= 0;i<lfp;i++){
		cout<<palin[i];
	}
	cout<<endl;
}
void initP(){
	for(int i = 0;i<1000000;i++){
		palin[i] = 0;
	}
}
bool isSmall(){
	ll halflen = lfp/2;
	for(int i = halflen+;i>=0;i--){
		if(palin[i] < palin[lfp - halflen +i]){
			cout<<"true";
			return true;
		} else if(palin[i] > palin[lfp - halflen +i]) {
			cout<<"false";
			return false;
		}
	}
	return false;
}

void findAnswer(){
	ll halflen = lfp/2;
	if(isSmall()){
		for(int i = 0;i<=halflen;i++){
			palin[i] = palin[lfp-i];
		}
		for(int i = lfp;i>=0;i--){
			cout<<palin[i];
		}
		cout<<endl;
	} else{
		if(lfp%2==0){
			halflen = lfp/2;
			palin[halflen] +=1;
		} else {
			halflen = lfp/2 +1;
			palin[halflen] +=1;
		}
		ll carry = 0;
		for(int i = halflen;i<=lfp;i++){
			palin[halflen]+=carry;
			carry= palin[i]/=10;
			palin[i]%=10;
		}
		if(carry!=0){
			lfp++;
			palin[lfp] = carry;
		}
		if(lfp%2==0) {
			halflen = lfp/2;
			for(int i = lfp;i>halflen;i--){
				cout<<palin[i];
			}
			for(int i = halflen;i<=lfp;i++){
				cout<<palin[i];
			}

		}else {
			halflen = lfp/2+1;
			for(int i = lfp;i>=halflen;i--){
				cout<<palin[i];
			}
			for(int i = halflen;i<=lfp;i++){
				cout<<palin[i];
			}
		}
		cout<<endl;
	}
}

void convt(){
	ll len= s.length();
	lfp = len;
	for(int i = 0;i<len;i++){
		palin[i] = s[i] - '0';
	}
	while(palin[lfp]==0){
		lfp--;
	}
	lfp++;
	cout<<lfp<<endl;
	print();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		initP();
		reverse(s.begin(),s.end());
		convt();
		findAnswer();
	}
	return 0;
}