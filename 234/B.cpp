#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    double maxLength = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int diffX = x[i] - x[j], diffY = y[i] - y[j];
            double length = sqrt(diffX * diffX + diffY * diffY);
            maxLength = max(maxLength, length);
        }
    }
    cout << fixed << setprecision(6) << maxLength << endl;
    return 0;
}
