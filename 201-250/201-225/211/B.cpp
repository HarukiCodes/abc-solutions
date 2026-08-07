#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> strSet;
    string S;
    for (int i = 0; i < 4; i++) {
        cin >> S;
        strSet.insert(S);
    }
    if (strSet.size() == 4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
