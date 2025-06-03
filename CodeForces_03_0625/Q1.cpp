#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        long long val = (long long)ceil(log2(3.0 * x));

        cout << (2 * val - 1) << endl;
    }

    return 0;
}

// Couldn't Solve it 
