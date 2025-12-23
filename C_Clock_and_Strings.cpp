#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >>c >>d;
        int aliceSmall = min(a,b);
        int aliceBig = max(a,b);
       
        int count = 0;
        for(int i = aliceSmall;i<=aliceBig;i++){
            if(i == c || i ==d ){
                count++;
            }
        }

        if(count == 1){
            cout <<"YES"<<endl;
        }
        else{
            cout << "NO"<< endl;
        }

    }
    
    return 0;
}