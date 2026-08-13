#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, tmp, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}