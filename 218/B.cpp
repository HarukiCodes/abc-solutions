#include <bits/stdc++.h>
using namespace std;

int main() {
    int P;
    string S;
    for (int i = 0; i < 26; i++) {
        cin >> P;
        S += static_cast<char>('a' + P - 1);
    }
    cout << S << endl;
    return 0;
}
