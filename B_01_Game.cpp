#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int totalOne = 0,totalZeo = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] =='0'){
                totalZeo++;
            }
            else{
                totalOne++;
            }
        }

        int totalMove = min(totalZeo,totalOne);
        if(totalMove % 2 ==0){
            cout << "NET" <<endl;
        }
        else{
            cout << "DA"<<endl;
        }
    }


    return 0;
}