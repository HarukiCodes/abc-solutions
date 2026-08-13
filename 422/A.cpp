#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int i = S[0] - '0', j = S[2] - '0';
    if (j < 8) {
        j++;
    } else if (j == 8) {
        if (i < 8) {
            i++, j = 1;
        }
    }
    cout << i << '-' << j << endl;
    return 0;
}
