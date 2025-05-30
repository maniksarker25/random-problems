#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string p;
    cin >>p;
    bool isExecute = false;
    for(int i = 0;i<p.size();i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            isExecute = true;
            break;
        }
    }
    if(isExecute){
        cout <<"YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    return 0;
}