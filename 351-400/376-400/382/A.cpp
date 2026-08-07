#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;
    string S;
    cin >> N >> D >> S;
    int numCookie = 0;
    for (char c : S)
    {
        if (c == '@')
        {
            numCookie++;
        }
    }
    int numEmptyBox = N - numCookie;
    numEmptyBox += D;
    cout << numEmptyBox << '\n';
    return 0;
}