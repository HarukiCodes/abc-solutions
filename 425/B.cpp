#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), allow;
    set<int> notMinusOne;
    int minusOneCount = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] == -1) {
            minusOneCount++;
        } else {
            notMinusOne.insert(A[i]);
        }
    }
    if (minusOneCount + notMinusOne.size() != N) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 1; i <= N; i++) {
        if (notMinusOne.find(i) == notMinusOne.end()) {
            allow.push_back(i);
        }
    }
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == -1) {
            cout << allow[index++] << " ";
        } else {
            cout << A[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
