#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >>s;
    string result;
    for(int i = 0;i<s.size();i++){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' || ch == 'u' ||ch == 'y'){
        }
        else{
            result += '.';
            result +=  ch;
        }
    }
    cout << result << endl;
    return 0;
}