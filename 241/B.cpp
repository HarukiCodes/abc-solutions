#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& i : a) {
        cin >> i;
    }
    for (int& i : b) {
        cin >> i;
    }
    vector<int> canEat(n, true);
    for (int i = 0; i < m; i++) {
        bool ate = false;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j] && canEat[j]) {
                canEat[j] = false;
                ate = true;
                break;
            }
        }
        if (!ate) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}