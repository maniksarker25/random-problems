#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
    string s;
    cin >>s;

    int totalOne = 0,totalZero = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            totalZero++;
        }
        else{
            totalOne++;
        }
    }
    
    cout << n - (min(totalOne,totalZero) * 2)<<endl;
    
    return 0;
}