#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        
        int result = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            result = gcd(result, arr[i]);
            if (result == 1){
                break;
            }
        }
        cout<<result<<endl;
    }

}
