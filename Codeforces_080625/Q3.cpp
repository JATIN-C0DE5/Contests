#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
        cin>>x;
        vector<int>arr(x);
        int count =0;
        for(int i=0;i<x;i++){
            cin>>arr[i];
            int el=arr[0];
            if(arr[i]==el){
                count++;
            }
        }
        cout<<count<<endl;
	}

}