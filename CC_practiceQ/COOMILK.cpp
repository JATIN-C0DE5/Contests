#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string> st(n);
	    for(int i=0;i<n;i++){
	        cin>>st[i];
	    }
	    bool ans=true;
	    if(st[n-1]=="cookie"){
	        ans=false;
	    }
	    for(int i =0;i<n-1;i++){
	        if((st[i]=="cookie") && st[i+1]=="cookie"){
	            ans=false;
	        }
	    }
	    if(ans){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}

}
