#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int g = 'G' - 'A' + 1;
    if (s[1] == ((s[0] - 'A') + 2) % g + 'A' && s[2] == ((s[1] - 'A') + 2) % g + 'A') {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
