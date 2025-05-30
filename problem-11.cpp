#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >>s;
    int oneCount = 0,zeroCount = 0;
    bool dangerous = false;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '0'){
            oneCount = 0;
            zeroCount++;
            if(zeroCount >=7){
                dangerous = true;
                break;
            }
        }
        if(s[i] == '1'){
            zeroCount = 0;
            oneCount++;
            if(oneCount >=7){
                dangerous = true;
                break;
            }
        }
    }

    if(dangerous){
        cout <<"YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    
    return 0;
}