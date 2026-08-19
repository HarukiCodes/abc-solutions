#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            // 回文判定
            string sentence = s[i] + s[j];
            size_t length = sentence.size();
            size_t center = length / 2;
            bool is_palindrome = true;
            for (size_t k = 0; k < center; k++) {
                if (sentence[k] != sentence[length - 1 - k]) {
                    is_palindrome = false;
                    break;
                }
            }
            if (is_palindrome) {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
    return 0;
}