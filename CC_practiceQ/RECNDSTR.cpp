#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
        string strL=str;
        string strR=str;
	    int size = str.length();


        char firstChar = str[0];
        strL.erase(0, 1);
        strL=strL+firstChar;
        // cout<<strL<<endl;
        
        char lastChar = str[size-1];
        strR.erase(size-1, 1);
        strR = lastChar+strR;
        // cout<<strR<<endl;


        if(strR == strL){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}

}
