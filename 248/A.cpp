#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int exist[10]{};
    for (int i = 0; i < 9; i++) {
        exist[S[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (exist[i] == 0) {
            cout << i << endl;
        }
    }
    return 0;
}