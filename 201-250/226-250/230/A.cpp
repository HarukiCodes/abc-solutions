#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N >= 42) {
        N++;
    }
    string nStr = to_string(N);
    cout << "AGC" << string(3 - nStr.size(), '0') << N << endl;
    return 0;
}
