#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    if (S.substr(S.size() - 2) == "er") {
        cout << "er" << endl;
    } else if (S.substr(S.size() - 3) == "ist") {
        cout << "ist" << endl;
    }
    return 0;
}
