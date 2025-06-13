#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, x;
        cin>>n>>x;
        int N1 = x, N0 = n - x;
        string ans = "";
        ans += string(N0, '0');
        ans += string(N1, '1');
        cout <<ans<<endl;
    }

    return 0;
}
