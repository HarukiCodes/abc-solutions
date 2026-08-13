// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T, num[3];
//     cin >> T;
//     for (int i = 0; i < T; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> num[j];
//         }
//         // step1:nB=0
//         int ans = num[1];
//         for (int j = 0; j < 3; j++) {
//             num[j] -= num[1];
//             if (num[j] < 0) {
//                 num[j] = 0;
//             }
//         }
//         // step2:nA=0 or nC=0
//         ans += min(max(num[0], num[2]) / 3, min(num[0], num[2]));
//         cout << "ans: " << ans << endl;
//     }
//     return 0;
// }
