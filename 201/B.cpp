#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> mtNames(N);
    vector<int> mtHeights(N);
    for (int i = 0; i < N; i++) {
        cin >> mtNames[i] >> mtHeights[i];
    }

    vector<int> mtHeights_copy = mtHeights;
    sort(mtHeights.begin(), mtHeights.end(), greater<int>());
    for (int i = 0; i < N; i++) {
        if (mtHeights_copy[i] == mtHeights[1]) {
            cout << mtNames[i] << endl;
            break;
        }
    }
    return 0;
}
