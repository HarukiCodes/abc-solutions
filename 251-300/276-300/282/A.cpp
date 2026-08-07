#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    for (int i = 'A'; i < 'A' + k; i++) {
        cout << static_cast<char>(i);
    }
    cout << endl;
    return 0;
}