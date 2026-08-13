#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L, R;
    cin >> L >> R;
    string ans;
    if (L == 1 && R == 0)
    {
        ans = "Yes";
    }
    else if (L == 0 && R == 1)
    {
        ans = "No";
    }
    else
    {
        ans = "Invalid";
    }
    cout << ans << endl;
    return 0;
}