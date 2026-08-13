// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, T, pass = "";
    cin >> S >> T;
    bool ans = false;
    int idx = 0;
    for (int i = 0; i < S.size(); i++)
    {
        char C = (char)toupper(S[i]);
        if (T[idx] == C)
        {
            pass += T[idx];
            idx++;
            if (idx == 2 && pass + 'X' == T)
            {
                break;
            }
            if (idx == 3)
            {
                break;
            }
        }
    }
    if ((pass + 'X' == T) || pass == T)
    {
        ans = true;
    }
    cout << ((ans) ? "Yes" : "No") << endl;
    return 0;
}