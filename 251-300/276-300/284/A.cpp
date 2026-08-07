#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (string &str : s) {
        cin >> str;
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << s[i] << endl;
    }
    return 0;
}