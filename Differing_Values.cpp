#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n>>k;
        string s;
        cin >>s;
        int zeroCount = 0,oneCount = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '0'){
                zeroCount++;
            }
            else{
                oneCount++;
            }
        }

        if(max(oneCount,zeroCount) >  (n + k - 1) / k ){
            cout << "NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
        }
    }

    return 0;
}