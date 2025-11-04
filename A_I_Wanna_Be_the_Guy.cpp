#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int n;
    cin >>n;
    int p;
    cin >>p;
    set<int>nums;
    for(int i = 1;i<=p;i++){
        int x;
        cin >>x;
        nums.insert(x);
    }
    int q;
    cin >>q;
    for(int i = 1;i<=q;i++){
        int x;
        cin >>x;
        nums.insert(x);
    }

    if(nums.size() == n){
        cout <<"I become the guy."<<endl;
    }
    else{
        cout <<"Oh, my keyboard!" <<endl;
    }
    return 0;
}