#include <iostream>
using namespace std;

int main() {
    int n, total = 0, a;
    cin >> n;
    for (int week = 0; week < n; week++) {
        for (int day = 0; day < 7; day++) {
            cin >> a;
            total += a;
        }
        cout << total << " ";
        total = 0;
    }
    return 0;
}