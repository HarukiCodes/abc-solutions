// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, T;
    cin >> S;
    int ans = (S[3] - '0') * 100 + (S[4] - '0') * 10 + S[5] - '0';
    if (ans == 316)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << (ans >= 1 && ans < 350 ? "Yes" : "No") << endl;
    return 0;
}