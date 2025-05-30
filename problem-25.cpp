#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i =2;i*i<=n;i++){
        if(n %i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<long long>a(n);
        
        bool isPosible = true;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            if(!isPrime(a[i])){
                isPosible = false;
                break;
            }
        }
        if(isPosible){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}