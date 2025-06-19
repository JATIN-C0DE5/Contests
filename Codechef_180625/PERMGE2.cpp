#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,m,n;
	    cin>>l>>m>>n;
	    
	    
	    if (l == 0) {
            cout << "Yes" << endl;
        } 
        else if (l<=n) {
            cout << "Yes" << endl;
        } 
        else if (l==n+1 && m==0) {
            cout << "Yes" << endl;
        } 
        else {
            cout << "No" << endl;
        }
	    
	    
	}

}
