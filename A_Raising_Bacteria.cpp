#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int x;
    cin >>x;
    int count = 0;
    while(x >0){
        if(x&1){
            count++;
        }
        x >>= 1;
    }

    cout << count << endl;
    
    return 0;
}