#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    int n,k;
    cin >>n >>k;
    int timeHave = 4 * 60;
    int timeForSolveProblem = timeHave - k;

    int result = 0;
    int time = 0;
    for(int i = 1;i<=n;i++){
        time += (i *5);
        if(timeForSolveProblem >= time){
            result = i;
        }
    }

    cout << result << endl;



    
    return 0;
}