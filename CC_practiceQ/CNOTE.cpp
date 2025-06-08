#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,n;
	    cin>>x>>y>>k>>n;
	    //x = length of poetry in pages
	    //y =  pages left in cur notebook
	    //k = money left
	    
	    vector<int> p(n);
	    vector<int> c(n);
	    for(int i =0;i<n;i++){
	        cin>>p[i];
	        cin>>c[i];
	    }
	    bool isit=false;
	    int reqp=x-y;
	    for(int i =0;i<n;i++){
	        if(p[i]>=reqp && c[i]<=k){
	            isit=true;
	            break;
	        }
	    }if(isit) cout<<"LuckyChef"<<endl;
	    else cout<<"UnluckyChef"<<endl;
	    
	}

}