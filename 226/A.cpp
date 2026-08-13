#include <bits/stdc++.h>
using namespace std;

int main() {
    float X;
    cin >> X;
    int integer_part = X;
    float decimal_places = X - integer_part;
    if (decimal_places * 10 >= 5) {
        cout << static_cast<int>(X) + 1 << endl;
    } else {
        cout << static_cast<int>(X) << endl;
    }
    return 0;
}
