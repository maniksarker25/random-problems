#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> parent;
vector<int> depth;

int getDepth(int u) {
    if (depth[u] != 0)
        return depth[u];

    if (parent[u] == -1)
        return depth[u] = 1;

    return depth[u] = 1 + getDepth(parent[u]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    parent.resize(n + 1);
    depth.resize(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> parent[i];
    }

    int answer = 0;

    for (int i = 1; i <= n; i++) {
        answer = max(answer, getDepth(i));
    }

    cout << answer << endl;
    return 0;
}
