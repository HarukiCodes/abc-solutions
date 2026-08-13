#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> candidates;
    string candidateName;
    for (int i = 0; i < N; i++) {
        cin >> candidateName;
        if (candidates.find(candidateName) == candidates.end()) {
            candidates[candidateName] = 1;
        } else {
            candidates[candidateName]++;
        }
    }
    string ans;
    int currentMaxVotes = INT_MIN / 2;
    for (auto [name, numberOfVotes] : candidates) {
        if (numberOfVotes > currentMaxVotes) {
            ans = name;
            currentMaxVotes = numberOfVotes;
        }
    }
    cout << ans << endl;
    return 0;
}
