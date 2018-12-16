#include <iostream>
using namespace std;
int reverse(int num)
{
	int res=0;
	while(num!=0)
	{
		int rem = num%10;
		res = res *10+rem;
		num/=10;
	}
	return res;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	int a,b;
	cin>>a>>b;
	a = reverse(a);
	b=reverse(b);
	int c=a+b;
	cout<<reverse(c)<<endl;
	}
}
