#include <bits/stdc++.h>
using namespace std;

int main() {
    long long H;
    cin >> H;
    double horizon = sqrt(H * (12800000 + H));
    cout << fixed << setprecision(6) << horizon << endl;
    return 0;
}
