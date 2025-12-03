#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,c;
        cin >> n >>c;
        vector<int>a(n);
        int total = 0;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            total += a[i];
        }

        string s;
        cin >> s;

        int firstEarn = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '0'){
                firstEarn += a[i];
            }

        }

        int other = total - firstEarn;  
        if(other <= c || c > firstEarn){
            cout << firstEarn << endl;
        }
        else{
            
            int result = (firstEarn - c) + other;
            cout << result <<endl;
        }

    }
    
    return 0;
}