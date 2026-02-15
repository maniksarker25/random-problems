#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int pw = 1, aValue = 0;

    // convert a (iterate from right side)
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == '1')
        {
            aValue += pw;
        }
        pw = pw * 2;
    }

    int p = 1, bValue = 0;

    // convert b (iterate from right side)
    for (int i = b.size() - 1; i >= 0; i--)
    {
        if (b[i] == '1')
        {
            bValue += p;
        }
        p = p * 2;
    }

    int sum = aValue + bValue;

    string result = "";

    if (sum == 0)
    {
        cout << "0" << endl;
        return 0;
    }

    while (sum > 0)
    {
        result = char((sum % 2) + '0') + result;
        sum /= 2;
    }

    cout << result << endl;

    return 0;
}
