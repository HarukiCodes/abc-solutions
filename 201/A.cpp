#if 1
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int input[3];
    for (int& x : input) {
        cin >> x;
    }
    sort(input, input + 3);
    do {
        int dif[2] = {input[1] - input[0], input[2] - input[1]};
        if (dif[0] == dif[1]) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(input, input + 3));
    cout << "No" << endl;
    return 0;
}
#endif

// ans2
#if 1
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int input[3] = {};
    for (int i = 0; i < 3; i++) {
        cin >> input[i];
    }
    sort(input, input + 3);
    if (input[1] - input[0] == input[2] - input[1]) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
#endif