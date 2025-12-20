#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,a,b;
        cin >>n>>a>>b;
        
        string pattern = "";
        for(int i = 0;i<b;i++){
            pattern += char('a'+i);
        }

        string result = "";
        for(int i = 0;i<n;i++){
            result += pattern[i%b];
        }

        cout << result << endl;
    }
    
    return 0;
}