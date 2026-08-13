#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    set<long long> s;
    for (int i = 0; i < n; i++) {
        cin >> num;
        s.insert(num);
    }
    cout << s.size() << endl;
    return 0;
}