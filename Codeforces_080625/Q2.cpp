#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
        cin>>x;
        vector<int>arr(x);
        if(x%2==1){
            int n=1;
            for(int i=0;i<x/2;i++){
                arr[i]=n;
                n++;
                arr[x-i-1]=n;
                n++;
            }
            arr[(x-1)/2]=x;
        }else if(x%2==0){
            int n=1;
            for(int i=0;i<x/2;i++){
                arr[i]=n;
                n++;
                arr[x-i-1]=n;
                n++;
            }
        }

        for(int i=0;i<x;i++){
            cout<<arr[i];
            if(i<x-1){
                cout<<" ";
            }
        }
        cout<<endl;
	}

}