#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    getline(cin,s);
    set<char>letters;
    for(char c: s){
        if(islower(c)){
            letters.insert(c);
        }
    }
    cout << letters.size() << endl;
    
    return 0;
}