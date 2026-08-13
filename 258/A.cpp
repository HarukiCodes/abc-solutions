#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;
    int minute = K % 60;
    cout << 21 + K / 60 << ':';  // HH:
    if (minute < 10) {
        cout << '0';  // M
    }
    cout << minute << endl;  // M
    return 0;
}