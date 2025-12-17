#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] != '1') {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        if (i + 2 < s.size() && s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4') {
            cout << "NO";
            return 0;
        }
        if (s[i] != '1' && s[i] != '4') {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
