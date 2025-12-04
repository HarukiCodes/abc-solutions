#include <bits/stdc++.h>
using namespace std;

vector<int> ans{};

void selectExaminee(vector<pair<int, int>>& scores, int num_examinee,
                    vector<int>& success) {
    int cnt = 0;
    sort(scores.begin(), scores.end(), greater<pair<int, int>>());
    for (int i = 0; i < scores.size() && cnt < num_examinee; i++) {
        int number = abs(scores[i].second);
        if (!success[number]) {
            ans.push_back(number + 1);
            success[number] = true;
            cnt++;
        }
    }
}

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<pair<int, int>> a(n), b(n), total(n);
    vector<int> success(n, false);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = -i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = -i;
    }
    for (int i = 0; i < n; i++) {
        total[i].first = a[i].first + b[i].first;
        total[i].second = -i;
    }
    selectExaminee(a, x, success);
    selectExaminee(b, y, success);
    selectExaminee(total, z, success);
    sort(ans.begin(), ans.end());
    for (auto e : ans) {
        cout << e << endl;
    }
    return 0;
}
