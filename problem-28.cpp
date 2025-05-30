#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    int answer = 0;
    int count = 1;
    for(int i = 1;i<n;i++){
        if(a[i] < a[i-1]){
            answer = max(answer,count);
            count = 0;
        }
        count++;
    }

    answer = max(answer,count);

    cout << answer << endl;
    
    
    return 0;
}