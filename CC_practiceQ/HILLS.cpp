#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,u,d;
	    cin>>n>>u>>d;
	    int para =1;
	    vector<int>v(n);
	    for(int i =0;i<n;i++){
	        cin>>v[i];
	    }
	    int ans=1;
	    int i=0;
	    while(i<n-1){
	        //uphill
            if((v[i+1]>=v[i]) && (v[i+1]-v[i]<=u)){
                ans++;
            }
            
	        //downhill
	        else if((v[i]>=v[i+1]) &&(v[i]-v[i+1]<=d)){
	                ans++;
	        }
	        
	        //para
	        else if ((v[i]>v[i+1]) && (para==1)){
	                ans++;
	                para--;
	        }
	        
	        //whenever nothing above can be done means no further steps
	        else{
	            break;
	        }
	        i++;
	        
	    }
	    cout<<ans<<endl;
	}

}
