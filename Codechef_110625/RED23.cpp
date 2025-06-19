#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h;
	    cin>>h;
	    while(h!=3 && h!=1){
	        if(h%2==0){
	            h=h/2;
	        }
	        else{
	            h=h-3;
	        }
	    }
	    cout<<h<<endl;
	}
}
