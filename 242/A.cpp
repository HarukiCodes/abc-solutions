#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C, X;
    cin >> A >> B >> C >> X;
    double p = 0;
    if (X <= A) {
        p = 1.0;
    } else if (X <= B) {
        p = C / (B - A);
    }
    cout << fixed << setprecision(6) << p << endl;
    return 0;
}
