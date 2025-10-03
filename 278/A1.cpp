#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    for (int i = 0; i < k; i++) {
        a.push_back(0);
    }
    for (int i = k; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}