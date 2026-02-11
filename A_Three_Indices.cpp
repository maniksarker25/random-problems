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
        vector<int> p(n + 1);
        int i,j,k;
        for (int x = 1; x <= n; x++)
        {
            cin >> p[x];
            if(p[x] > j){
                j = x;
            }
        }

        bool ok = false;
        for(int i = 1;i<j;i++){
            if(p[i] <)
        }

    }

    return 0;
}