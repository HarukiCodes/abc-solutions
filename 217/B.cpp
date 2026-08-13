#include <bits/stdc++.h>
using namespace std;

int main() {
    string contest_name[4] = {"ABC", "ARC", "AGC", "AHC"};
    bool inputed[4] = {};
    string S;
    for (int i = 0; i < 3; i++) {
        cin >> S;
        for (int j = 0; j < 4; j++) {
            if (S == contest_name[j]) {
                inputed[j] = true;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        if (!inputed[i]) {
            cout << contest_name[i] << endl;
        }
    }
    return 0;
}
