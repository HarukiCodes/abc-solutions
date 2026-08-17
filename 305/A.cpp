#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int left = (n / 5) * 5;
    int right = left + 5;
    cout << (min(n - left, right - n) == n - left ? left : right) << endl;
    return 0;
}