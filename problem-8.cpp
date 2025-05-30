#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int grid[5][5];
    int oneLocationI = -1;
    int oneLocationJ = -1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 1){
                oneLocationI = i;
                oneLocationJ = j;
            }
        }
    }

    cout << abs(abs(oneLocationI - 2) + abs(oneLocationJ - 2)) <<endl;
    
    return 0;
}