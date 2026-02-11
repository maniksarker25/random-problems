#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int minDif = INT_MAX;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int dif = a[i] - b[i];
            minDif = min(minDif, dif);
            total += a[i];
        }

        cout << total - minDif << endl;
    }

    return 0;
}