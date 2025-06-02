// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int N;
//         cin>>N;
//         set<int>s;
//         for(int i =0;i<N;i++){
//             int x;
//             cin>>x;
//             s.insert(x);
//         }
//         int maxx=0;
//         int i =0;
//         for (int x : s) {
//             int val = x*(s.size()-i);
//             maxx=max(maxx,val);
//             i++;
//         }
//         cout<<maxx<<endl;
// 	}

// }


#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int max_weight = 0;
        for (int i = 0; i < N; i++) {
            int current = arr[i] * (N - i);
            max_weight=max(max_weight,current);
        }

        cout << max_weight << "\n";
    }
    return 0;
}

