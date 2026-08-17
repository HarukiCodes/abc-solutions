#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

int main() {
    // 8方向を作成
    const string SNUKE = "snuke";
    Point dir[8] = {
        {1, 0},
        {1, 1},
        {0, 1},
        {-1, 1},
        {-1, 0},
        {-1, -1},
        {0, -1},
        {1, -1},
    };

    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    vector<Point> ans;
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            if (s[y][x] != 's') {
                continue;
            }
            for (int i = 0; i < 8; i++) {
                Point p{x, y};
                ans.push_back(p);

                Point delta = dir[i];
                int index = 1;  // 見つけたsを含むので1
                while (index < 5) {
                    p.x += delta.x;
                    p.y += delta.y;

                    if (p.x < 0 || p.x >= w || p.y < 0 || p.y >= h) {
                        break;
                    }
                    if (s[p.y][p.x] != SNUKE[index]) {
                        break;
                    }

                    ans.push_back(p);
                    index++;
                }
                // 見つかったら出力
                if (ans.size() == 5) {
                    for (auto a : ans) {
                        cout << a.y + 1 << " " << a.x + 1 << "\n";
                    }
                } else {
                    ans.clear();
                }
            }
        }
    }
    return 0;
}
