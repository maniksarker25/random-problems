#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 long long n, m, a;
    cin >> n >> m >> a;

    long long flagstones_length = (n + a - 1) / a;
    long long flagstones_width = (m + a - 1) / a;  

    long long total = flagstones_length * flagstones_width;

    cout << total << endl;
    return 0;
    
    return 0;
}