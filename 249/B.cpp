#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool upper_exist = false, lower_exist = false, differnt = true;
    for (char ch : s) {
        if (isupper(ch)) {
            upper_exist = true;
        } else {
            lower_exist = true;
        }
        if (count(s.begin(), s.end(), ch) != 1) {
            differnt = false;
        }
    }
    if (upper_exist && lower_exist && differnt) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}