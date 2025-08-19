#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    set<vector<int>> vector_set;
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        A[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> A[i][j];
        }
        vector_set.insert(A[i]);
    }
    cout << vector_set.size() << endl;
    return 0;
}
