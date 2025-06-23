
#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(const vector<int>& a) {
    for (int i = 0; i < a.size() - 1; ++i) {
        if (abs(a[i] - a[i + 1]) <= 1)
            return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> arr(x);
        int mindifff = INT_MAX;

        for (int i = 0; i < x; i++) {
            cin >> arr[i];
            if (i > 0) {
                mindifff = min(mindifff, abs(arr[i] - arr[i - 1]));
            }
        }

        if (mindifff <= 1) {
            int k=0;
            cout << k << endl;
        } else if (x == 2 && mindifff >1) {
            int k=-1;
            cout << k << endl;
        } else {
            bool possible = false;
            for (int i = 0; i < x - 1; ++i) {
                int x = (arr[i] + arr[i + 1]) / 2; // choose a midpoint value
                vector<int> b = arr;
                b.erase(b.begin() + i, b.begin() + i + 2);
                b.insert(b.begin() + i, x);

                if (isBeautiful(b)) {
                    possible = true;
                    break;
                }
            }

            if (possible)
                cout << 1 << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}

// Wrong Answer