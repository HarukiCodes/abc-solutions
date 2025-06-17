#include <iostream>
using namespace std;

int main()
{
    string S1, S2;
    cin >> S1 >> S2;
    string s = "sick", f = "fine";
    int ans = 0;
    if (S1 == s && S2 == s)
    {
        ans = 1;
    }
    else if (S1 == s && S2 == f)
    {
        ans = 2;
    }
    else if (S1 == f && S2 == s)
    {
        ans = 3;
    }
    else if (S1 == f && S2 == f)
    {
        ans = 4;
    }
    cout << ans << "\n";
    return 0;
}
