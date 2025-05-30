#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >>n;
    int orginalN = n;
    bool isLucky = true;
    while(orginalN > 0){
        int lastDigit = orginalN % 10;
        if(lastDigit != 4 && lastDigit != 7){
            isLucky = false;
            break;
        }
        orginalN /=10;

    }
    if(isLucky){
        cout << "YES"<<endl;
    }
    else{
        if(n % 4 != 0 && n % 7 != 0 && n % 44 != 0 && n % 47 != 0 && n % 77 != 0 && n % 444 != 0 && n % 447 != 0 && n % 777 != 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}