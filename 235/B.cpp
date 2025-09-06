#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    int current = 0;
    for (int i = 0; i < N - 1; i++) {
        if (heights[current + 1] > heights[current]) {
            current++;
        } else {
            break;
        }
    }
    cout << heights[current] << endl;
    return 0;
}
