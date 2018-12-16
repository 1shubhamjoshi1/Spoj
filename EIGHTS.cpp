#include "bits/stdc++.h"
using namespace std;
#define int long long
main() {
      int t;
      cin>>t;
      while(t--) {
          int n;
          cin>>n;
          if (n==1) {
              cout<<"192"<<endl;
          } else {
              cout <<192LL + (n-1) * 250LL<<endl;
          }
      }
}
