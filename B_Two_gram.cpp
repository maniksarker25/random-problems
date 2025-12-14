#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >>n;
    string s;
    cin >> s;

    map<string,int>mp;
    for(int i = 0;i<n-1;i++){
        string twoGram = "";
        twoGram += s[i];
        twoGram+=s[i+1];
        mp[twoGram]++;
    }

    int mx = 0;
    string ans;
    for(auto &it : mp){
        if(it.second > mx){
            mx = it.second;
            ans = it.first;
        }

    }
    cout << ans << endl;

    
    
    return 0;
}