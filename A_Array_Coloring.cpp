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
        bool isFirstOneOdd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                if (a[i] % 2 == 0)
                {
                    isFirstOneOdd = false;
                }
                else
                {
                    isFirstOneOdd = true;
                }
            }
        }

        if (isFirstOneOdd)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0 && a[i] % 2 == 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0 && a[i] % 2 != 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}