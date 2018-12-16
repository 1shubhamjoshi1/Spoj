#include <bits/stdc++.h>
using namespace std;
#define int long long
int a, b;
vector<int> seive(int limit) {
	vector<int> primes;
	bool prime[limit + 1];
	memset(prime, true, sizeof prime);
	for(int i = 2; i <= limit;i++) {
		if(prime[i]) {
		    if(i >= a and i <=b) {
    			cout<<i<<endl;
		    }
		    primes.push_back(i);
			for(int j = i * 2; j <= limit;j+=i) {
				prime[j] = false;
			}
		}
	}
	return primes;
}

int segmentedSieve(int no) {
	int block_size = sqrt(no);
	vector<int> primes = seive(block_size);

	int left = a;
	int right = b;
	block_size = b - a;

	while(left < no) {
		if(right >= no) {
			right = no;
		}

		int prime_temp[block_size];
		memset(prime_temp, true, sizeof prime_temp);
		for(int i = 0;i<primes.size();i++) {
			int primeno = primes[i];
			int lowLimit = floor(left / primeno) * primeno;
			if(lowLimit < left) {
			    lowLimit += primeno;
			}
			for(int j = lowLimit; j <= right; j+=primeno) {
				prime_temp[j - left] = false;
			}
		}
		for(int i = left;i <= right;i++) {
			if(prime_temp[i - left] and i >= a and i <= b && i !=1) {
				cout<<i<<endl;
			}
		}
		left = left + block_size;
		right = right + block_size;
	}
}
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    cin>>a>>b;
	    segmentedSieve(max(a,b));
	}
	return 0;
}
