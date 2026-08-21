#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Player {
    int number;
    int wins;
};

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (string& i : s) {
        cin >> i;
    }
    vector<Player> players(n);
    for (int i = 0; i < n; i++) {
        players[i].number = i + 1;
        players[i].wins = ranges::count(s[i], 'o');
    }

    ranges::sort(players, [](const Player& l, const Player& r) {
        return (l.wins == r.wins ? l.number < r.number : l.wins > r.wins);
    });
    for (auto [number, score] : players) {
        cout << number << " ";
    }
    return 0;
}

// #include <algorithm>
// #include <functional>
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<string> s(n);
//     for (string& i : s) {
//         cin >> i;
//     }
//     vector<pair<int, int>> players(n);
//     for (int i = 0; i < n; i++) {
//         // firstは降順、secondは昇順
//         players[i].first = ranges::count(s[i], 'o');
//         players[i].second = -(i + 1);
//     }
//     ranges::sort(players, std::greater());
//     for (auto [score, number] : players) {
//         cout << -number << " ";
//     }
//     return 0;
// }
