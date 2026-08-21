// #include <iostream>
// #include <ranges>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     bool yes = true;
//     for (int i : views::iota(1, 16) | views::stride(2)) {
//         if (s[i] != '0') {
//             yes = false;
//         }
//     }
//     cout << (yes ? "Yes\n" : "No\n");
//     return 0;
// }

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    const int EVEN_PART = 0b0101010101010101;  // 16文字
    string s;
    cin >> s;
    ranges::reverse(s);
    int n = 0;
    for (int i = 0; i < s.size(); i++) {
        n |= ((s[i] - '0') << i);
    }
    cout << ((n & EVEN_PART) == 0 ? "Yes\n" : "No\n");
    return 0;
}
