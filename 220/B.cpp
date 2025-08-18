#include <bits/stdc++.h>
using namespace std;

long long ToDecimal(long long num, int base) {
    string num_str = to_string(num);
    int weight = 1;
    long res = 0;
    for (int i = num_str.size() - 1; i >= 0; i--) {
        res += (num_str[i] - '0') * weight;
        weight *= base;
    }
    return res;
}

int main() {
    long long K, A, B;
    cin >> K >> A >> B;
    cout << ToDecimal(A, K) * ToDecimal(B, K) << endl;
    return 0;
}
