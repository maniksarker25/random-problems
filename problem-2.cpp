#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n;
        cin >>n;
        int grid[n][3];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<3;j++){
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            int count = 0;
            for(int j = 0;j<3;j++){
                if(grid[i][j] == 1){
                    count++;
                }
            }
            if(count >=2){
                ans++;
            }
        }
        cout << ans <<endl;

    return 0;
}