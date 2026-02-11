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
        set<int> vals;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            vals.insert(a[i]);
        }

        if (vals.size() == 1)
        {
            cout << "YES\n";
        }
        else if (vals.size() == 2)
        {
            auto it = vals.begin();
            int x = *it;
            int y = *(++it);
            if (x == -y || y == -x)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
