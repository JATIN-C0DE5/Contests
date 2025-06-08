#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,n;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l = -1;
        int r = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==1 && l== -1){
                l=i;
            }
            if(arr[i]==1){
                r=i;
            }

        }
        if((r-l+1)<=x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


	}

}