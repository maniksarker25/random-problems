#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a,b,c;
    cin >>a >>b>>c;
    int mx = max({a,b,c});
    int mn = min({a,b,c});
    int middle;
   if((a == mx || a ==mn) && (b ==mx && b ==mn)){
    middle = c;
   }
   else if((b == mx || b == mn) && (c == mx || c == mn)){
    middle = a;
   }
   else{
    middle = b;
   }
    cout << (mx - middle) + (middle -mn) << endl;
    
    return 0;
}