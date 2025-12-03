#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int r,b,g;
        cin >> r >>b >>g;

        int mn = r;
        mn = min(mn,b);
        mn = min(mn,g);

        int total = 0;
        total+= mn * 10;

        total += ((r-mn) * 3);
        total += ((b-mn) * 3);
        total += ((g-mn) * 3);
        cout << total <<endl;

    }
    
    return 0;
}