#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int n;
    cin >>n;
    string teamA, teamB;

    int teamAGoal = 0,teamBGoal = 0;
    for(int i = 1;i<=n;i++){
        string s;
        cin >>s;
        if(i == 1){
            teamA = s;
        }
        else if( teamA !=s){
            teamB = s;
        }
        if(s == teamA){
            teamAGoal++;
        }
        else{
            teamBGoal++;
        }
        
    }

    if (teamAGoal > teamBGoal) {
        cout << teamA << endl;
    } else {
        cout << teamB << endl;
    }
    

    

    return 0;
}