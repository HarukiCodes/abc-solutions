// ABC210 B.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const char bad_card = '1';
    int N;
    string S;
    cin >> N >> S;
    string loser;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == bad_card)
        {
            loser = (i % 2 ? "Aoki" : "Takahashi");
            break;
        }
    }
    cout << loser << endl;
    return 0;
}
