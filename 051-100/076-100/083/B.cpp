#include <bits/stdc++.h>
using namespace std;

int digitSum(int N) {
    int res = 0;
    while (N >= 1) {
        res += (N % 10);
        N /= 10;
    }
    return res;
}
int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int sum = digitSum(i);
        if ((A <= sum) && (sum <= B)) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}