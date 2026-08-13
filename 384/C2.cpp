#include <bits/stdc++.h>
using namespace std;

int main()
{
    int points[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> points[i];
    }
    string problems = "ABCDE";
    vector<pair<int, string>> participants((1 << 5));
    for (int i = 1; i < (1 << 5); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i & (1 << j))
            {
                participants[i].first -= points[j]; // 昇順にソートできるように反転
                participants[i].second += problems[j];
            }
        }
    }
    // 点数は昇順、名前は降順にソートする
    sort(participants.begin(), participants.end());
    for (int i = 0; i < (1 << 5) - 1; i++)
    {
        cout << participants[i].second << "\n";
    }
    return 0;
}
