#include <bits/stdc++.h>
using namespace std;

int medicines[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};

void judge()
{
    int N;
    string S;
    cin >> N >> S;
    vector<int> danger;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '1')
        {
            danger.push_back(i + 1);
        }
    }

    while (true)
    {
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        judge();
    }
    return 0;
}
