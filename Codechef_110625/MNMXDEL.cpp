#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        int N, Q;
        cin >> N >> Q;
        vector<long long> A(N);

        for (int i = 0; i < N; i++){
            cin >> A[i];
        }

        long long score = 0;
        for (int i = 0; i < N - 1; i++){
            score = score+min(A[i],A[i + 1]);
        }

        while (Q--) {
            int j;
            long long X;
            cin >> j >> X;
            j--;

            if (j > 0) score -= min(A[j - 1], A[j]);
            if (j < N - 1) score -= min(A[j], A[j + 1]);

            A[j] = X;

            if (j > 0) score += min(A[j - 1], A[j]);
            if (j < N - 1) score += min(A[j], A[j + 1]);

            cout <<score<<endl;
        }
    }
    return 0;
}
