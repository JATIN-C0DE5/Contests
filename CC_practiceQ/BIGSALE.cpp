#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<double>p(n);
        vector<double>q(n);
        vector<double>d(n);
        double loss=0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            cin>>q[i];
            cin>>d[i];
        }
        
        for(int i=0;i<n;i++){
            double ip=p[i]+(p[i]*d[i]/100);
            double dp=ip-(ip*d[i]/100);
            loss+=(p[i]-dp)*q[i];
        }
        cout << fixed << setprecision(9) << loss << endl;

    }

}

