#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int len1,len2;
	bool flag = true;
	cin>>s1;
	cin>>s2;
	len1 = s1.length();
	len2 = s2.length();
	if(len1!=len2){
		cout<<"NO"<<endl;
	}else {
		for(int i = 0;i<len1;i++){
			if(s1[i] != s2[len1-1 - i]){
				flag =false;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}