#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10) {
        cout << -1; 
    } else {
        cout << t; 
        for (int i = 1; i < n; i++) cout << 0; 
    }

    return 0;
}