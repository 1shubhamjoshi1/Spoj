#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string num,firstHalf,secondHalf,firstReverse;
ll lengthStr;
ll halfLength = lengthStr/2;
void increaseAndPrint(){
	ll incInd = halfLength;
	if(lengthStr%2==0)	incInd--;
	
	num[incInd]++;

	for(int i = incInd;i>=0;i--)
		if(num[i]>'9'){
			num[i] = '0';
			num[i-1]++;
		}

	firstHalf = num.substr(0,halfLength);
	firstReverse = firstHalf;
	reverse(firstReverse.begin(),firstReverse.end());

	if(lengthStr%2==0)
		cout<<firstHalf<<firstReverse<<endl;
	else
		cout<<firstHalf<<num[halfLength]<<firstReverse<<endl;
}

bool checkForAllNines(){
	ll freq =0;
	for(int i = 0;i<lengthStr;i++)
		if(num[i]!='9')
			return false;
		else 
			freq++;

	cout<<"1";
	for(int i = 1;i<freq;i++){
		cout<<'0';
	}
	cout<<"1"<<endl;
	return true;
}

bool checkForReverse() {
	ll indMidNext = halfLength;
	if(lengthStr%2!=0) indMidNext++;

	firstHalf = num.substr(0,halfLength);
	secondHalf = num.substr(indMidNext,halfLength);
	firstReverse = num.substr(0,halfLength);
	reverse(firstReverse.begin(),firstReverse.end());
	
	if(firstReverse.compare(secondHalf)>0){
		if(lengthStr%2==0)
			cout<<firstHalf<<firstReverse<<endl;
		else 
			cout<<firstHalf<<num[halfLength]<<firstReverse<<endl;
		return true;
	}
	return false;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>num;
		lengthStr = num.length();
		halfLength = lengthStr/2;
		if(!checkForReverse())
			if(!checkForAllNines())
				increaseAndPrint();
	}
	return 0;
}