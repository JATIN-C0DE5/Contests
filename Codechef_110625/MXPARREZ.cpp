#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, x;
        cin>>n>>x;

        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i <= n-1; ++i){
            cin>>a[i];
        }
        for (int i = 0; i <= n-1; ++i){
            cin>>b[i];
        }

        vector<int> sam(n + 1, 0);
        for (int i=n-1; i>=0;i--) {
            sam[i]=max(a[i], sam[i + 1]);
        }

        int ability=x;
        int dead=0;
        for (int i=0; i<n; i++) {
            if (ability<a[i]) {
                break;
            }
            else if (ability>= b[i]) {
                if (ability-1>=sam[i + 1]) {
                    dead++;
                    ability--;
                }
            }
        }

        cout<<dead<<endl;
    }

    return 0;
}
