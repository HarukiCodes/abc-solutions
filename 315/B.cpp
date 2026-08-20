#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> d(m);
    int total = 0;
    for (int& i : d) {
        cin >> i;
        total += i;
    }
    int middle = (total + 1) / 2;
    int current = 0;
    for (int a = 1; a <= m; a++) {
        for (int b = 1; b <= d[a - 1]; b++) {
            current++;
            if (current == middle) {
                cout << a << ' ' << b << endl;
            }
        }
    }
    return 0;
}
