#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
    if(n >= 0){
        cout << n << endl;
    }
    else{
        int lastDigit = n % 10;
        int beforeLastDigit = (n/10) % 10;
        if(lastDigit < beforeLastDigit){
            cout << n / 10 <<endl;
        }
        else{
            int last = n %10;
            int rest = n / 100;
            cout << rest * 10 + last;
        }
    }
    
    return 0;
}