#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >>k;
    vector<int>a(12);
    for(int i = 0;i<12;i++){
        cin >>a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int monthNeed = -1;
    int sum = 0;
    if(k == 0){
        cout << 0 << endl;
    }
    else{

    for(int i = 0;i<12;i++){
        sum+= a[i];
        if(sum >= k){
            monthNeed = i +1;
            break;
        }
    }

    cout << monthNeed << endl;
    }
    
    return 0;
}