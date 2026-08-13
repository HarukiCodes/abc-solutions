#include <iostream>
using namespace std;

int main() {
    int input[5]{}, bucket[101]{};
    for (int i = 0; i < 5; i++) {
        cin >> input[i];
        bucket[input[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < 101; i++) {
        if (bucket[i] > 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}