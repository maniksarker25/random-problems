#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int y;
    cin >>y;
    while(1){
        y++;
        set<int>s;
        s.insert(y/1000);
        s.insert((y/100) %10);
        s.insert((y/10)%10);
        s.insert(y%10);
        if(s.size() ==4){
            cout << y << endl;
            break;
        }
    }
    
    return 0;
}