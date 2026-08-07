#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int a, b;
    cin >> S >> a >> b;
    a--, b--;  // to 0-based
    swap(S[a], S[b]);
    cout << S << endl;
    return 0;
}
