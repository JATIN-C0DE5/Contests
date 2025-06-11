#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, Q;
        cin >> N >> Q;
        vector<long long> A(N);

        for (int i = 0; i < N; i++){
            cin >> A[i];
        }

        long long sc1 = 0;
        for (int i = 0; i <= N - 2; i++){
            sc1 = sc1+min(A[i + 1],A[i]);
        }

        while (Q--) {
            int j;
            long long X;
            cin >> j >> X;
            j--;

            if (j > 0) sc1 -= min(A[j - 1], A[j]);
            if (j < N - 1) sc1 -= min(A[j], A[j + 1]);

            A[j] = X;

            if (j > 0) sc1 += min(A[j - 1], A[j]);
            if (j < N - 1) sc1 += min(A[j], A[j + 1]);

            cout << sc1 <<endl;
        }
    }
    return 0;
}
