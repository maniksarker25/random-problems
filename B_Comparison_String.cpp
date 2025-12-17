#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;
        int biggest = 0;
        int left = 0,right=0;

        for(int i = 0;i<n;i++){
            if(s[i] == '<'){
                left++;
                right = 0;
                biggest = max(biggest,left);
            }
            else{
                right++;
                biggest = max(biggest,right);
                left = 0;
            }
        }

        cout << biggest + 1<< endl;

    }
    
    return 0;
}