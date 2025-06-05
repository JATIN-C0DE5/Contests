#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    set<string> st;
	    for(int i=0;i<str.length()-1;i++){
	        st.insert(str.substr(i, 2));
	    }
	    cout<<st.size()<<endl;
	}
}
