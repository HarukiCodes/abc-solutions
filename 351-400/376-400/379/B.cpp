#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    string S;
    cin >> N >> K >> S;
    vector<int> numOX{};
    int counterOX = 1;
    for (int i = 1; i < (int)S.size(); i++)
    {
        if (S[i - 1] != S[i])
        {
            numOX.push_back(counterOX);
            counterOX = 1;
        }
        else
        {
            counterOX++;
        }
    }
    // 最後の並びの数を加える
    numOX.push_back(counterOX);
    // forループで'O'の数について操作するために、
    // 最初の文字でスタート位置を決める
    int start = (S[0] == 'O') ? 0 : 1;
    int ans = 0;
    for (int i = start; i < (int)numOX.size(); i += 2)
    {
        ans += numOX[i] / K;
    }
    cout << ans << "\n";
    return 0;
}

// copilot先生
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    int strawberries = 0;
    int countO = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'O') {
            countO++;
            if (countO == K) {
                strawberries++;
                countO = 0;  // K 本の歯が使われるのでリセット
            }
        } else {
            countO = 0;  // 'X'が出たらリセット
        }
    }

    cout << strawberries << endl;

    return 0;
}
#endif