#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<string> what;
        what.push_back("1 1 " + to_string(n));
        
        for(int i=2; i<n+1; i++) {
            int baselent = n+1-i;
            int k=3;

            string st1 =to_string(i);
            int startingsuffix = 1+baselent;
            string st2 = to_string(baselent);
            what.push_back(st1 + " 1 " + st2);
            
            k=2;
            while(k--){
                int j=k;
            }
            if (startingsuffix<=n) {
                k++;
                what.push_back(to_string(i)+" "+to_string(startingsuffix)+" "+to_string(n));
                k--;
            }
        }

        cout<<what.size()<<endl;
        for(int i=0;i<what.size();i++){
            cout<<what[i]<<endl;
        }
    }

    return 0;
}
