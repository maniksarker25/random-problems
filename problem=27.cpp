#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;

    string word = "";
    bool firstWord = true;

    for (int i = 0; i < s.length(); ) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (!word.empty()) {
                if (!firstWord) cout << " ";
                cout << word;
                word = "";
                firstWord = false;
            }
            i += 3;
        } else {
            word += s[i];
            i++;
        }
    }

    if (!word.empty()) {
        if (!firstWord) cout << " ";
        cout << word;
    }

    return 0;
}