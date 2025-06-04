#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y1,y2,k;
	    cin>>h>>x>>y1>>y2>>k;
	    int w1 = (h+x-1)/x;
	   // int w1 = ceil(float(h)/x);
	    int w2 = 0;
	    if(h>y1*k){
	        int mid =h-(y1*k);
	        w2=(mid+y2-1)/y2+k;
	       // w2=ceil(float(mid)/y2)+k;
	    }
	    else{
	        w2=(h+y1-1)/y1;
	       // w2=ceil(float(h)/y1);

	    }
	    cout<<min(w1,w2)<<endl;
	}
}

//CEIL FN CAN'T BE USED AS IT WILL GIVE ERRORS FOR LARGE VALUES
// refer this : https://chatgpt.com/share/68404a1d-37dc-8007-a864-febb40d37faf