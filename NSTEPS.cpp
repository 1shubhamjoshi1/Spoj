#include <bits/stdc++.h>
using namespace std;

main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--) {
		int x, y;
		cin>>x>>y;
	//	cout<<x<<" - "<<y<<endl;
		if(x-y != 2 && y != x) {
			cout<<"No Number"<<endl;
		} else {
			if(x == y) {
				if(x == 1 || x == 0) {
					cout<<x<<endl;
				}
				else if(x%2) {
					cout<< x + y - 1<<endl;
				} else {
					cout<< x + y<<endl;
				}
			} else {
				if(x == 2 || x == 3) {
					cout<<x<<endl;
				} else {
					if(x%2) {
						cout<<x + y -1<<endl;
					} else {
						cout<<x + y<<endl;
					}
					}
				}
			}
		}

}
