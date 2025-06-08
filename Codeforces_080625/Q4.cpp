#include <bits/stdc++.h>
using namespace std;

bool explodable(const vector<int>& arr1) {
    int siz = arr1.size();
    int diff = arr1[1] - arr1[0];
    for (int i=2; i<siz; i++) {
        if (arr1[i] - arr1[i-1] != diff)
            return false;
    }
    int nm = arr1[0] - diff;
    int dnm = siz + 1;

    if ((nm<0) || (nm%dnm!=0))
        return false;
    int x1 = nm/dnm;
    int x2 = diff+x1;
    return (x2 >= 0) && (x1 >= 0);
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0; i<n; i++)
            cin >> arr[i];
        
        if (explodable(arr))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
