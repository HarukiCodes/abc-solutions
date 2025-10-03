#include <deque>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    deque<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    for (int i = 0; i < k; i++) {
        a.pop_front();
        a.push_back(0);
    }
    for (int &i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}