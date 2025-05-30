#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int totalOne = 0, totalTwo = 0, totalThree = 0, totalFour = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) totalOne++;
        else if (a[i] == 2) totalTwo++;
        else if (a[i] == 3) totalThree++;
        else totalFour++;
    }

    int texiCount = 0;
    texiCount += totalFour;

    texiCount += totalThree;
    totalOne -= min(totalThree, totalOne);

    texiCount += totalTwo / 2;
    totalTwo %= 2;

    if (totalTwo == 1) {
        texiCount += 1;
        totalOne -= min(2, totalOne);
    }

    if (totalOne > 0) {
        texiCount += (totalOne + 3) / 4;
    }

    cout << texiCount << endl;
    
    
    return 0;
}