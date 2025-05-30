#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >>s;
    vector<int>a;
    for(int i = 0;i<s.size();i = i + 2){
        int num = s[i] - '0';
        a.push_back(num);
    }
    sort(a.begin(),a.end());

   
    for(int i = 0;i<a.size();i++){
        cout << a[i];
        if(i != a.size()-1){
            cout << "+";
        }
    }
    return 0;
}