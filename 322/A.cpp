#include <iostream>
using namespace std;

int main() {
    const string ABC = "ABC";
    int n;
    string s;
    cin >> n >> s;
    int index = s.find(ABC);
    cout << (index = s.find(ABC) != string::npos ? index + 1 : -1) << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     const string ABC = "ABC";
//     int n;
//     string s;
//     cin >> n >> s;
//     int ans = -1;
//     for (int start = 0; start + ABC.size() <= n; start++) {
//         if (s.substr(start, ABC.size()) == ABC) {
//             ans = start + 1;  // 1-indexed
//             break;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }
