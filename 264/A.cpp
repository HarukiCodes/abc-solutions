#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    cout << string("atcoder").substr(L - 1, R - L + 1) << endl;
    return 0;
}