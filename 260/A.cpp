#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    for (int i = 0; i < 26; i++) {
        char c = i + 'a';
        if (count(S.begin(), S.end(), c) == 1) {
            cout << c << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}