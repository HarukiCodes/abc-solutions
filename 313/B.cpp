
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> has_lost(n, false);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        has_lost[b] = true;
    }
    int strongest_count = 0;
    int id;
    for (int i = 0; i < n; i++) {
        if (!has_lost[i]) {
            strongest_count++;
            id = i;
        }
    }
    if (strongest_count == 1) {
        cout << id + 1 << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

struct Programmer {
    int stronger_than = -1;
    int weaker_than = -1;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<Programmer> programmers(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        programmers[a].stronger_than = b;
        programmers[b].weaker_than = a;
    }
    int strongest_count = 0;
    int id;
    for (int i = 0; i < n; i++) {
        if (programmers[i].weaker_than == -1) {
            strongest_count++;
            id = i;
        }
    }
    if (strongest_count == 1) {
        cout << id + 1 << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
*/