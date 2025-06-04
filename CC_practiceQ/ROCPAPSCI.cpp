#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    //WORKS WITHOUT COMMENTED CODE BUT NOT A GOOD PRACTICE AS s[i] WHEN i==n IS OUT OF BOUND BUT DON'T RAISE ERROR
	    
	   // if(n==1){
	   //     cout<<1<<endl;
	   // }else{
	    int ans=0;
	    int i =0;
	    while(i<n){
	        if((i+1 < n) && s[i]==s[i+1]){
	            i++;
	        }
	        ans++;
	        i++;   //COMMENT THIS WHILE UNCOMMENTING OTHER LINES
	       // if(i<n){
	       //     i++;
	       // }
	       // else{
	       //     break;
	       // }
	    }
	    cout<<ans<<endl;
	   // }
	}

}
