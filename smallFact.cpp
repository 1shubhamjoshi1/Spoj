#include <bits/stdc++.h>
using namespace std;
long long digits[1000] = {0};
long long lastFilled = -1;
void initDigits(){
	for(int i = 0;i<1000;i++){
		digits[i] = 0;
	}
	digits[0] = 1;
	lastFilled = 0;
}
void printFact(){
	for(int i = lastFilled;i>=0;i--){
		cout<<digits[i];
	}
	cout<<endl;
}

void populateCarry(long long carry){
	while(carry>0){
		digits[lastFilled + 1] = carry%10;
		carry/=10;
		lastFilled++;
	}
}

void propagateCarry(){
	long long carry = 0;
	for(int i = 0;i<=lastFilled;i++){
		digits[i]+=carry;
		carry = digits[i]/10;
		digits[i]%=10;
	}
	if(carry != 0){
		populateCarry(carry);
	}
}

void multiplyDigit(int m) {
	for(int i = 0; i<=lastFilled;i++){
		digits[i]*=m;
	}
	propagateCarry();
}

void calcfact(long long n){
	initDigits();
	for(int i = 2;i<=n;i++){
		multiplyDigit(i);
	}
	printFact();
}
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		calcfact(n);
	}
	return 0;
}