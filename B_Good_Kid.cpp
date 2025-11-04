#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int idx = min_element(a.begin(), a.end()) - a.begin();
        a[idx]++;
        long long product = 1;
        for (int x : a) product *= x;
        cout << product << "\n";
    }
}
