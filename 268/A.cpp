#include <iostream>
#include <set>
using namespace std;

int main() {
    int input[5];
    set<int> s{};
    for (int i = 0; i < 5; i++) {
        cin >> input[i];
        s.insert(input[i]);
    }
    cout << s.size() << endl;
    return 0;
}