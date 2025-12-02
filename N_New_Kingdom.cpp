#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >>c;
    string s;
    cin >>s;
    int s_len = s.length();
    string new_str = "";
    for(int j = 0;j<s.length();j++){
        for(int i = 0;i<str.length();i++){
            if(s[j] == str[i]){
                if(c == 'L'){
                    new_str += str[i+1];
                }
                else{
                    new_str += str[i-1];
                }
            }
        }
    }

    cout << new_str << endl;
    
    return 0;
}