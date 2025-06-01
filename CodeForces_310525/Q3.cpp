#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n),q(n),r(n);
        vector<long long> powerr(n);
        for(int i =0;i<n;i++){
            cin>>p[i];
        }
        for(int i =0;i<n;i++){
            cin>>q[i];
        }
        powerr[0] = 1;
        for (int i = 1; i < n; i++) {
            powerr[i] = (powerr[i - 1] * 2) % 998244353;
        }
        for (int i = 0; i < n; i++) {
            long long maxval = 0;
            for (int j = 0; j <= i; j++) {
                long long val = (powerr[p[j]] + powerr[q[i - j]])%998244353;
                maxval = max(maxval, val);
            }
            r[i] = maxval;
        }


        for(int i=0;i<n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;


    }
    return 0;

}


// due to N^2 complexity , it's not working 