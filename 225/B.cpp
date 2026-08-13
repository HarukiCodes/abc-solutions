#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> gragh(N);
    int a, b;
    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;
        a--, b--;
        gragh[a].push_back(b);
        gragh[b].push_back(a);
    }
    for (int i = 0; i < N; i++) {
        if (gragh[i].size() == N - 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
