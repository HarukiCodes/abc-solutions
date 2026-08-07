#include <bits/stdc++.h>
using namespace std;

struct Participant
{
    int score;
    string name;
    // このインスタンスが小さいとは
    // 辞書順が小さい糊塗
    // 点数が高いこと

    // this < otherの並びであっているかを返す
    bool operator<(Participant &other)
    {
        if (score == other.score)
        {
            return name < other.name;
        }
        return score > other.score;
    }
};

int main()
{
    // input
    int points[5]{};
    for (int i = 0; i < 5; i++)
    {
        cin >> points[i];
    }

    // solve
    string problems = "ABCDE"; // 問題の名前
    Participant scores[32]{};
    // 全ての参加者の名前と点数を列挙する
    for (int i = 1; i < (1 << 5); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i & (1 << j))
            {
                scores[i].name += problems[j];
                scores[i].score += points[j];
            }
        }
    }
    // 点数は昇順、名前は降順にソートする
    sort(begin(scores), end(scores));

    // output
    for (int i = 0; i < (1 << 5) - 1; i++)
    {
        cout << scores[i].name << '\n';
    }
    return 0;
}