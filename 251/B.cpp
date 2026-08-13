#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;

    // a[n],a[n+1]=0を用意することで、
    // 1,2個選択を表現
    const int num_weights = n + 2;
    vector<int> a(num_weights, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> good_num;
    for (int i = 0; i < num_weights; i++) {
        for (int j = i + 1; j < num_weights; j++) {
            for (int k = j + 1; k < num_weights; k++) {
                int total = a[i] + a[j] + a[k];
                if (total <= w) {
                    good_num.insert(total);
                }
            }
        }
    }
    cout << good_num.size() << endl;
    return 0;
}