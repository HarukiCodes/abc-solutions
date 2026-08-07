#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> moti;
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;
        moti.insert(d);
    }
    cout << moti.size() << endl;
    return 0;
}