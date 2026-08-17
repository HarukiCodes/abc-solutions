#include <iostream>
using namespace std;

int main() {
    // 有効数字3桁にするだけ
    string n;
    cin >> n;
    for (int i = 3; i < n.length(); i++) {
        n[i] = '0';
    }
    cout << n << endl;
    return 0;
}