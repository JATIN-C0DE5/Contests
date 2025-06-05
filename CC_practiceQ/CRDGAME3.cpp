#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c,r;
	    cin>>c>>r;
	    int a1,a2;
	    a1=ceil((float)c/9);
	    a2=ceil((float)r/9);
	    if(a1<a2){
	        cout<<0<<" "<<a1<<endl;
	    }
	    else{
	        cout<<1<<" "<<a2<<endl;
	    }
	}

}
