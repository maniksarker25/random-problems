#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m;
    cin >> n>>m;
    int result = 0;
    if(m > n){
        result = -1;
    }
    else{
        if(n%2){
            result = n/2 +1;
        }
        else{
            result = n/2;
        }
        while(result % m > 0){
            result++;
        }
    }

    cout << result <<endl;
    
    return 0;
}