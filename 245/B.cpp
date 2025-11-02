#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool is_exist[2001]{};
    for (int& i : a) {
        cin >> i;
        is_exist[i] = true;
    }
    for (int i = 0; i <= 2000; i++) {
        if (!is_exist[i]) {
            cout << i << endl;
            return 0;
        }
    }
}