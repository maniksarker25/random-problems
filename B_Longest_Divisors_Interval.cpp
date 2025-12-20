#include <bits/stdc++.h>
using namespace std;

// unsloved --------------







int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        long long int n;
        cin >>n;
        long long limit = sqrtl(n);
        int current = 0,answer = 0;
        for(long long i = 1;i<=limit;i++){
            if(n%i == 0){
                current++;
                answer = max(answer,current);
            }
            else{
                current = 0;
            }
        }

        cout << answer << endl;
    }

    return 0;
}