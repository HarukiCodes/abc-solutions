#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    cout << S[(S.length() + 1) / 2 - 1] << endl;
    return 0;
}