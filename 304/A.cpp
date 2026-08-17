#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> a[i];
    }

    int index_min_age = min_element(a.begin(), a.end()) - a.begin();
    for (int i = index_min_age; i < index_min_age + n; i++) {
        int index = i % n;
        cout << s[index] << "\n";
    }
    return 0;
}
