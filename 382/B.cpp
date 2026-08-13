#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;
    string S;
    cin >> N >> D >> S;
    int elapsedDay = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (S[i] == '@')
        {
            S[i] = '.';
            elapsedDay++;
            if (elapsedDay == D)
            {
                break;
            }
        }
    }
    cout << S << '\n';
    return 0;
}