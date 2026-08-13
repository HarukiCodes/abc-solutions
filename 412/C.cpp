#include <bits/stdc++.h>
using namespace std;

int get_min_domino_sequence_length(int N, vector<long long> &dominos)
{
    sort(dominos.begin() + 1, dominos.end() - 1);

    int back_index = 0;
    int use_dominos = 1;

    for (int i = 1; i < N; i++)
    {
        // ドミノNを倒せるなら
        if (dominos[back_index] * 2 >= dominos[N - 1])
        {
            return use_dominos + 1;
        }
        // ドミノNを倒せないが、ドミノiを倒せるなら
        else if (dominos[back_index] * 2 >= dominos[i])
        {
            continue;
        }
        // ドミノi,N両方倒せないなら、一個前の追加を試みる
        if (i - 1 != back_index)
        {
            // i-1を追加
            back_index = i - 1;
            use_dominos++;
            i--;
        }
        else
        {
            // 追加できないなら
            break;
        }
    }

    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<long long> S(N);
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }
        cout << get_min_domino_sequence_length(N, S) << endl;
    }
    return 0;
}