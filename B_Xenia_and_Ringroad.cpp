#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m;
    cin >> n >>m;
    vector<int>a(m);
    for(int i = 0;i<m;i++){
        cin >> a[i];
    }



    int currentHouse = 1;
    long long totalTime = 0;
    for(int i = 0;i<m;i++){
        if(a[i] >= currentHouse){
            totalTime += (a[i] - currentHouse);
        }
        else{
            totalTime += (n -currentHouse) + a[i];
            
        }
        currentHouse = a[i];
    }
    cout << totalTime << endl;

    
    return 0;
}