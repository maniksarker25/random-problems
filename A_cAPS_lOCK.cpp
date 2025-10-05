#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string word;
    cin >> word;
    bool isCapLock = true;
    for(int i =1;i< word.length();i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            isCapLock = false;
        }
    }

    if(isCapLock){
        for(int i = 0;i<word.length();i++){
            if(word[i] >='a' && word[i] <= 'z'){
                word[i] = toupper(word[i]);
            }
            else if(word[i] >= 'A' && word[i] <= 'Z'){
                word[i] = tolower(word[i]);
            }
        }
    }

    cout << word << endl;
    
    return 0;
}