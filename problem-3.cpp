#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n;
        cin >>n;
        int x = 0;
        for(int i = 1;i<=n;i++){
            string s;
            cin >>s;
            if(s == "X++" || s == "++X"){
                x++;
            }
            else{
                x--;
            }   
        }
        cout << x <<endl;

    return 0;
}