#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int minRow = n, minCol = m;
        int maxRow = 0, maxCol = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                if (c == '#') {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }

        int x = (minRow + maxRow) / 2 + 1;
        int y = (minCol + maxCol) / 2 + 1;

        cout << x << " " << y << "\n";
    }
    return 0;
}
