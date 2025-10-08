#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int s,n;
    cin >> s >> n;
    long long health = s;

    vector<pair<int,int>> dragons(n);
    for(int i = 0;i<n;i++){
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    bool isPass = true;
    for(int i = 0;i<n;i++){
        if(dragons[i].first < health){
            health += dragons[i].second;
        } else {
            isPass = false;
            break;
        }
    }

    cout << (isPass ? "YES" : "NO") << endl;

    return 0;
}
