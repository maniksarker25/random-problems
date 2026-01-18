// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n, m, h;
//         cin >> n >> m >> h;
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         vector<long long> b = a;

//         while (m--)
//         {
//             long long x, y;
//             cin >> x >> y;
//             x--;
//             b[x] = b[x] + y;
//             if (b[x] > h)
//             {
//                 b = a;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << b[i] << ' ';
//         }
//         cout << endl;
//     }

//     return 0;
// }

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
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<long long> b(n, 0);

        while (m--)
        {
            long long x, y;
            cin >> x >> y;
            x--;

            b[x] += y;

            if (a[x] + b[x] > h)
            {
                fill(b.begin(), b.end(), 0);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] + b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
