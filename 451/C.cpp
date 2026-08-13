#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> trees{};
    int type;
    long long h;
    while (q--) {
        cin >> type >> h;
        if (type == 1) {
            trees.push_back(h);
        } else {
            for (int i = 0; i < trees.size(); i++) {
                if (trees[i] <= h) {
                    trees.erase(trees.begin() + i);
                }
            }
        }
        cout << trees.size() << endl;
    }
    return 0;
}
