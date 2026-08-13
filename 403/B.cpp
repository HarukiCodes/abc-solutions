#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T, U;
    cin >> T >> U;
    for (int i = 0; i < T.size() - U.size() + 1; i++)
    {
        int matchCnt = 0;
        for (int j = 0; j < U.size(); j++)
        {
            if (T[i + j] == '?' || T[i + j] == U[j])
            {
                matchCnt++;
            }
        }
        if (matchCnt == U.size())
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
