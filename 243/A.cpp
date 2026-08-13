#include <iostream>
using namespace std;

int main() {
    int V, A, B, C;
    cin >> V >> A >> B >> C;
    V %= (A + B + C);
    V -= A;
    if (V < 0) {
        cout << "F" << endl;
        return 0;
    }
    V -= B;
    if (V < 0) {
        cout << "M" << endl;
        return 0;
    }
    V -= C;
    if (V < 0) {
        cout << "T" << endl;
        return 0;
    }

    return 0;
}