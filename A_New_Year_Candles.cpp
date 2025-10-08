#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a,b;
    cin >>a >>b;
    int total = a;
    
    while (a >= b)
    {
        int value = a / b; 
        total += value;
        a = value + (a % b); 
    }
    cout << total << endl;
    return 0;
}