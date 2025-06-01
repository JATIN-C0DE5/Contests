#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int k =1;
        int m1 = min(a,c);
        int m2= min(b,d);
        if(m1<m2){
            cout<<"Flower"<<endl;
        }else{
            cout<<"Gellyfish"<<endl;
        }
    }
    return 0;

}