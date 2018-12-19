#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string a;
string b;		
ll lfa,lfb,lfad;
ll a1[120];
ll b1[120];
ll ad[120];

void initDigits(){
	for(int i = 0;i<120;i++){
		a1[i] = 0;
		b1[i] = 0;
		ad[i] = 0;
	}
	lfa = 0;
	lfb = 0;
	lfad = 0;
}

void printFact(){
	for(int i = lfad;i>=0;i--){
		cout<<ad[i];
	}
	cout<<endl;
}

void populateCarry(long long carry){
	while(carry>0){
		ad[lfad + 1] = carry%10;
		carry/=10;
		lfad++;
	}
}

void propagateCarry(){
	long long carry = 0;
	for(int i = 0;i<=lfad;i++){
		ad[i]+=carry;
		carry = ad[i]/10;
		ad[i]%=10;
	}
	if(carry != 0){
		populateCarry(carry);
	}
}

void divThem(){
	ll carry = 0;
	for(int i = lfad; i>=0;i--){
		ad[i] = ad[i]+ (10 * carry);
		carry = ad[i]%2;
		ad[i]/=2;
	}
	// printFact();
	while(ad[lfad] == 0){
		lfad--;
	}
	// printFact();
}

void subThem(){
	lfad = lfa;
	for(int i = 0;i<=lfa;i++){
		ad[i] = a1[i] - b1[i];
	}
	// printFact();
	for(int i = 0;i<lfa;i++){
		if(ad[i]<0){
			ad[i]+=10;
			ad[i+1] -=1;
		}
		// printFact();
	}
	// printFact();
	lfad = lfa;
	while(ad[lfad] == 0){
		lfad--;
	}
	// printFact();
}

void clearad(){
	for(int i = 0;i<120;i++){
		ad[i] = 0;
	}
	lfad = 0;
}

void addThem(){
	for(int i =0;i<=lfa;i++){
		ad[i] = a1[i]+b1[i];
	}
	lfad = lfa;
	propagateCarry();
	// printFact();
}

void convtToNum(){
	ll len_a = a.length();
	ll len_b = b.length();
	lfa = len_a - 1;
	lfb = len_a - 1;
	for(int i = 0;i<len_a;i++){
		a1[i] = a[i] - '0';
	}
	for(int i = 0;i<len_b;i++){
		b1[i] = b[i] - '0';
	}
	for(int i = len_b; i<len_a;i++){
		b1[i] = 0;
	}

}

int main(){
	int t = 10;
	while(t--){
		initDigits();
		cin>>a;
		cin>>b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		convtToNum();
		addThem();
		divThem();
		printFact();
		clearad();
		subThem();
		divThem();
		printFact();
	}
	return 0;
}