#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        for (char &c : s) {
            c = tolower(c);
        }

        if (s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
