#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> blocks(n), num_cells_more_than(1000000 + 1, 0);
    num_cells_more_than[0] = n;
    int rm_cnt = 0;
    while (q--) {
        int t, v;
        cin >> t >> v;
        if (t == 1) {
            blocks[v - 1]++;
            num_cells_more_than[blocks[v - 1]]++;
            if (num_cells_more_than[0 + rm_cnt] ==
                num_cells_more_than[1 + rm_cnt]) {
                rm_cnt++;
            }
        } else {
            cout << num_cells_more_than[v + rm_cnt] << endl;
        }
    }
    return 0;
}
