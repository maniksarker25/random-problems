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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        a.erase(unique(a.begin(), a.end()), a.end());

        int answer = 1;
        int current = 1;

        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] == a[i - 1] + 1)
            {
                current++;
            }
            else
            {
                current = 1;
            }
            answer = max(answer, current);
        }

        cout << answer << endl;
    }
    return 0;
}