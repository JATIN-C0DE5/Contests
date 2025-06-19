#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if (__gcd(n, m) >=2) {
            int k=0;
            cout<< k <<endl;
        }else if(__gcd(n + 1, m) >=2  || __gcd(n, m + 1) >=2) {
            int k=1;
            cout <<k<< endl;
        } else {
            int k=2;

            cout <<k<< endl;
        }
	    
	}

}
