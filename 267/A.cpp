#include <iostream>
using namespace std;

int main() {
    int ans[5] = {5, 4, 3, 2, 1};
    string weeks[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string S;
    cin >> S;
    for (int i = 0; i < 5; i++) {
        if (S == weeks[i]) {
            cout << ans[i] << endl;
            break;
        }
    }
    return 0;
}