// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    int idx = 0;
    for (int i = 0; i < T.size(); i++)
    {
        if (T[i] == S[idx])
        {
            cout << i + 1 << " ";
            idx++;
        }
    }
    cout << endl;
    return 0;
}
