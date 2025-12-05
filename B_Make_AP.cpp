#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        long long x = 2*b - c;
        if (x > 0 && x % a == 0) ok = true;

        long long y = a + c;
        if (y % (2*b) == 0 && y > 0) ok = true;

        long long z = 2*b - a;
        if (z > 0 && z % c == 0) ok = true;

        cout << (ok ? "YES" : "NO") << "\n";

        
    }
    return 0;
}
