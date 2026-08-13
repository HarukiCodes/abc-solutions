#include <bits/stdc++.h>
using namespace std;

int main() {
    float input;
    cin >> input;
    int X = input;
    float Y = (input - X) * 10;
    if (Y <= 2) {
        cout << X << '-' << endl;
    } else if (Y <= 6) {
        cout << X << endl;
    } else {
        cout << X << '+' << endl;
    }
    return 0;
}
