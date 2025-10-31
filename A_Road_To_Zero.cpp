#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //this si t
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        long long mn = min(x, y);
        long long mx = max(x, y);

        if (b > 2 * a) {
            cout << (x + y) * a << '\n';
        } else {
            long long total = mn * b + (mx - mn) * a;
            cout << total << '\n';
        }
    }

    return 0;
}
