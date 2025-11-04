#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        vector<long long> pre_sum(n + 1, 0);

        long long total = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            total += a[i];
            pre_sum[i] = pre_sum[i - 1] + a[i];
        }

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long range_sum = pre_sum[r] - pre_sum[l - 1];
            long long new_sum = total - range_sum + (r - l + 1) * k;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
